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
  //private:
  private:
  ScopedThread *listenThread;	// Added by Philip Astillo
  
  public:		// Philip Astillo changed to public
    struct ClientEntry
    {
        int id;
        sctp::SctpClient *client;
		
        ScopedThread *receiverThread;
        sctp::ISctpHandler *handler;
        NtsTask *associatedTask;
		
		//Added by Philip Astillo
		sctp::SctpServer *server;
		std::string remoteAddress;
    };
	
   // =================== Added by Philip Astillo ====================
  /*public:
	struct Arguments
	{
		const std::string address;
		uint16_t port;
		sctp::PayloadProtocolId ppid;
		NtsTask *associatedTask;
		std::unordered_map<int, ClientEntry *> *m_assocRec;
		explicit Arguments(const std::string &localAddress) : address(localAddress)
		{
		}
	};
	
	std::unordered_map<int, ClientEntry*> m_assocXnap*/
	//=========================================================

  private:
    TaskBase *m_base;
    std::unique_ptr<Logger> m_logger;
    std::unordered_map<int, ClientEntry *> m_clients;
	
    friend class GnbCmdHandler;

  public:
    explicit SctpTask(TaskBase *base, const std::string appType);
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
									   
									   
	void initiateXnSetupRequest(int clientId, std::string &localAddress, uint16_t localPort,
											  const std::string &remoteAddress, uint16_t remotePort,
											  sctp::PayloadProtocolId ppid, NtsTask *associatedTask);
											  
	void registerAcceptedClient(int socketId, sctp::PayloadProtocolId ppid, NtsTask * associatedTask);						

	void receiveXnSetupResponse(int clientId, int associationId, int inStreams, int outStreams);
	
	
};

} // namespace nr::gnb