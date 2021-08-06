//
// This file is developed by Philip Astillo as extension for
// UERANSIM open source project.
// An attempt for the handover procedure.
//

#include "task.hpp"

#include <sstream>
#include <cstring>
#include <thread>
#include <chrono>
#include <utility>

namespace nr::gnb
{
	
//======================================================================//

	XnapTask::XnapTask(TaskBase *base) : m_base{base}
	{
		m_logger = base->logBase->makeUniqueLogger("xnap-proc");
		
		m_xnapServer = new XnapServer(base);	
		m_xnapServer->initialize(this);
		
		m_sctpServer = new SctpTask(base->logBase);
	}
	
	void XnapTask::onStart()
	{
		m_sctpServer->start();
		m_xnapServer->start();	
		
		// This part associate the xnap layer with ngap layer
		auto *msg = new NmGnbXnapToNgap(NmGnbXnapToNgap::XNAP_NGAP_ASSOC);
		msg->associatedTask = this;
		m_base->ngapTask->push(msg);
		
		for(auto &gnbAssocConfig : m_base->config->gnbAssocConfigs)
			createGnbContext(gnbAssocConfig);
		if(m_gnbCtx.empty())
			m_logger->warn("No Associated gNB configuration is provided");
		
		for (auto &gnbCtx : m_gnbCtx)
		{
			auto *msg1 = new NmGnbSctp(NmGnbSctp::XN_SCTP_CONNECT);
			msg1->clientId = gnbCtx.second->ctxId;
			msg1->remoteAddress = gnbCtx.second->address;
			msg1->remotePort = gnbCtx.second->port;
			msg1->ppid = sctp::PayloadProtocolId::XNAP;
			msg1->localAddress = m_base->config->xnapIp;
			msg1->localPort = 0;
			msg1->associatedTask = this;
			msg1->nodeType = "client";
			m_base->sctpXnapTask->push(msg1);
		}
	}
	
	void XnapTask::onLoop()
	{
		NtsMessage *msg = take();
		if (!msg)
			return;
		
		switch(msg->msgType)
		{
			case NtsMessageType::GNB_SCTP:
			{
				auto *w = dynamic_cast<NmGnbSctp*>(msg);
				switch(w->present)
				{
					case NmGnbSctp::ASSOCIATION_SETUP:
						m_logger->debug("Association setup of [%s] to [%s] successful", w->nodeType.c_str(), w->remoteAddress.c_str());
						break;
					case NmGnbSctp::ASSOCIATION_SHUTDOWN:
						m_logger->debug("Association shutdown of [%s] to [%s] successful", w->nodeType.c_str(), w->remoteAddress.c_str());
						break;
					default:
						m_logger->unhandledNts(msg);
				}
				break;
			}
			case NtsMessageType::XNAP_CLIENT:
			{
				auto *w = dynamic_cast<NmGnbXnapClientCon*>(msg);
				switch(w->present)
				{
					case NmGnbXnapClientCon::XNAP_CLIENT_CON:
						registerAcceptedClient(w->socketId);	// See gnb/xnap/interface.cpp
						break;
					case NmGnbXnapClientCon::XNAP_CLIENT_ENTRY:
						m_logger->debug("Received a message...");
						break;
					default:
						m_logger->unhandledNts(msg);
						break;
				}				
				break;
			}
			default:
				m_logger->unhandledNts(msg);
				break;
		}
	}
	
	void XnapTask::onQuit()
	{
		for (auto &i : m_gnbCtx)
			delete i.second;
		
		m_gnbCtx.clear();
	}
	

}// namespace::gnb