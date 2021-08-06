//
// This file is a part of UERANSIM open source project.
// Copyright (c) 2021 ALİ GÜNGÖR.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#include "gnb.hpp"
#include "app/task.hpp"
#include "gtp/task.hpp"
#include "ngap/task.hpp"
#include "rls/task.hpp"
#include "rrc/task.hpp"
#include "sctp/task.hpp"

#include "xnap/task.hpp"

#include <lib/app/cli_base.hpp>

#include <iostream>

namespace nr::gnb
{

GNodeB::GNodeB(GnbConfig *config, app::INodeListener *nodeListener, NtsTask *cliCallbackTask)
{
    auto *base = new TaskBase();
    base->config = config;
    base->logBase = new LogBase("logs/" + config->name + ".log");
    base->nodeListener = nodeListener;
    base->cliCallbackTask = cliCallbackTask;

    base->appTask = new GnbAppTask(base);	
    base->sctpTask = new SctpTask(base, "-ngap");
    //base->ngapTask = new NgapTask(base);
		
	// Added by Philip Virgil Astillo
	base->ngapTask = new NgapTask(base);
	base->sctpXnapTask = new SctpTask(base, "-xnap");
	base->xnapTask = new XnapTask(base);
	
    base->rrcTask = new GnbRrcTask(base);
    base->gtpTask = new GtpTask(base);
    base->rlsTask = new GnbRlsTask(base);

    taskBase = base;
}

GNodeB::~GNodeB()
{
    taskBase->appTask->quit();
    taskBase->sctpTask->quit();
    taskBase->ngapTask->quit();
	taskBase->xnapTask->quit(); // Added by Philip Astillo
    taskBase->rrcTask->quit();
    taskBase->gtpTask->quit();
    taskBase->rlsTask->quit();

    delete taskBase->appTask;
    delete taskBase->sctpTask;
    delete taskBase->ngapTask;
	delete taskBase->xnapTask; // Added by Philip Astillo
    delete taskBase->rrcTask;
    delete taskBase->gtpTask;
    delete taskBase->rlsTask;


    delete taskBase->logBase;

    delete taskBase;
}

void GNodeB::start()
{
	
	taskBase->appTask->start();
    taskBase->sctpTask->start();
    taskBase->ngapTask->start();
	taskBase->sctpXnapTask->start();
	taskBase->xnapTask->start();
    taskBase->rrcTask->start();
    taskBase->rlsTask->start();
    taskBase->gtpTask->start();
}

void GNodeB::pushCommand(std::unique_ptr<app::GnbCliCommand> cmd, const InetAddress &address)
{
    taskBase->appTask->push(new NmGnbCliCommand(std::move(cmd), address));
}

} // namespace nr::gnb
