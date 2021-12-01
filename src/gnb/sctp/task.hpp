//
// This file is a part of UERANSIM open source project.
// Copyright (c) 2021 ALİ GÜNGÖR.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#pragma once

#include <memory>
#include <thread>
#include <unordered_map>
#include <vector>

#include <gnb/nts.hpp>
#include <lib/sctp/sctp.hpp>
#include <utils/logger.hpp>
#include <utils/nts.hpp>
#include <utils/scoped_thread.hpp>

namespace nr::gnb
{

class SctpTask : public NtsTask
{
  public: // Philip Astillo changed to public
    struct ClientEntry
    {
        int id;
        sctp::SctpClient *client;
        ScopedThread *receiverThread;
        sctp::ISctpHandler *handler;
        NtsTask *associatedTask;

        //Added by Philip Astillo
        std::string nodeType;
        std::string remoteAddress;
    };

  private:
    TaskBase *m_base;
    std::unique_ptr<Logger> m_logger;
    std::unordered_map<int, ClientEntry *> m_clients;

    ScopedThread *listenThread;	// Added by Philip Astillo

    friend class GnbCmdHandler;

  public:
    explicit SctpTask(TaskBase *base, const std::string appType);
    explicit SctpTask(LogBase *logBase);
    explicit SctpTask(TaskBase *base);
    ~SctpTask() override = default;

  protected:
    void onStart() override;
    void onLoop() override;
    void onQuit() override;

  private:
    static void DeleteClientEntry(ClientEntry *entry);

  private:
    void receiveSctpConnectionSetupRequest(int clientId, const std::string &localAddress, uint16_t localPort,
                                           const std::string &remoteAddress, uint16_t remotePort,
                                           sctp::PayloadProtocolId ppid, NtsTask *associatedTask);
    void receiveAssociationSetup(int clientId, int associationId, int inStreams, int outStreams);
    void receiveAssociationShutdown(int clientId);
    void receiveClientReceive(int clientId, uint16_t stream, UniqueBuffer &&buffer);
    void receiveUnhandledNotification(int clientId);
    void receiveConnectionClose(int clientId);
    void receiveSendMessage(int clientId, uint16_t stream, UniqueBuffer &&buffer);

    // =========================== Added by Philip Astillo =================================


    void connectXnapServer(int clientId, std::string &localAddress, uint16_t localPort,
                           const std::string &remoteAddress, uint16_t remotePort,
                           sctp::PayloadProtocolId ppid, NtsTask *associatedTask, const std::string &nodeType);

    void registerAcceptedClient(int socketId, sctp::PayloadProtocolId ppid, NtsTask * associatedTask, const std::string &nodeType);

    void receiveXnSetupResponse(int clientId, int associationId, int inStreams, int outStreams);
};

} // namespace nr::gnb