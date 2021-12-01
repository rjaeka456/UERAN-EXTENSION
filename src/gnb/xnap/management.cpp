//
// This file is developed by Philip Astillo as extension for
// UERANSIM open source project.
// An attempt for the handover procedure.
//

#include "task.hpp"

#include <utils/common.hpp>

namespace nr::gnb
{

void XnapTask::createGnbContext(const GnbAssociatedConfig &conf)
{
    auto *ctx = new XnapGnbContext();
    ctx->ctxId = utils::NextId();
    ctx->address = conf.address;
    ctx->port = conf.port;
    m_gnbCtx[ctx->ctxId] = ctx;
}

}// namespace nr::gnb