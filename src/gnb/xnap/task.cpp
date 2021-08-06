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
	
class SctpHandler : public sctp::ISctpHandler
{
  private:
    SctpTask *const sctpTask;
    int clientId;

  public:
    SctpHandler(SctpTask *const sctpTask, int clientId) : sctpTask(sctpTask), clientId(clientId)
    {
    }

  private:
    void onAssociationSetup(int associationId, int inStreams, int outStreams) override
    {
        auto *w = new NmGnbSctp(NmGnbSctp::ASSOCIATION_SETUP);
        w->clientId = clientId;
        w->associationId = associationId;
        w->inStreams = inStreams;
        w->outStreams = outStreams;
        sctpTask->push(w);
    }

    void onAssociationShutdown() override
    {
        auto *w = new NmGnbSctp(NmGnbSctp::ASSOCIATION_SHUTDOWN);
        w->clientId = clientId;
        sctpTask->push(w);
    }

    void onMessage(const uint8_t *buffer, size_t length, uint16_t stream) override
    {
        auto *data = new uint8_t[length];
        std::memcpy(data, buffer, length);

        auto *w = new NmGnbSctp(NmGnbSctp::RECEIVE_MESSAGE);
        w->clientId = clientId;
        w->buffer = UniqueBuffer{data, length};
        w->stream = stream;
        sctpTask->push(w);
    }

    void onUnhandledNotification() override
    {
        auto *w = new NmGnbSctp(NmGnbSctp::UNHANDLED_NOTIFICATION);
        w->clientId = clientId;
        sctpTask->push(w);
    }
};


[[noreturn]] static void ReceiverThread(std::pair<sctp::SctpClient *, sctp::ISctpHandler *> *args)
{
    sctp::SctpClient *client = args->first;
    sctp::ISctpHandler *handler = args->second;

    delete args;

    while (true)
        client->receive(handler);
}

//======================================================================//

	XnapTask::XnapTask(TaskBase *base) : m_base{base}
	{
		m_logger = base->logBase->makeUniqueLogger("xnap-proc");
		
		m_xnapServer = new XnapServer(base);	
		m_xnapServer->initialize(this);
	}
	
	void XnapTask::onStart()
	{
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
						m_logger->debug("Association setup succesful");
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