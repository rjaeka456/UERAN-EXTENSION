
#include "task.hpp"

#include <gnb/app/task.hpp>
#include <gnb/sctp/task.hpp>
#include <utils/common.hpp>

namespace nr::gnb
{
	void XnapTask::registerAcceptedClient(int socketId)
	{
		auto *msg = new NmGnbXnapClientCon(NmGnbXnapClientCon::XNAP_CLIENT_ENTRY);
		msg->socketId = socketId;
		msg->associatedTask = this;
		msg->ppid = sctp::PayloadProtocolId::XNAP;
		m_base->sctpXnapTask->push(msg);
	}	
}// namespace nr::gnb