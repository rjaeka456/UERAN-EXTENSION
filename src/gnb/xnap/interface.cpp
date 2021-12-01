
#include "task.hpp"

#include <gnb/app/task.hpp>
#include <gnb/sctp/task.hpp>
#include <utils/common.hpp>

namespace nr::gnb
{
void XnapTask::registerAcceptedClient(int socketId)
{
		
    m_logger->info("New GnodeB Client is being registered to client-info-list (server)");
		
    auto *msg = new NmGnbXnapClientCon(NmGnbXnapClientCon::XNAP_CLIENT_ENTRY);
    msg->socketId = socketId;
    msg->associatedTask = this;
    msg->ppid = sctp::PayloadProtocolId::XNAP;
    msg->nodeType = "server";
    m_sctpServer->push(msg);
}
}// namespace nr::gnb