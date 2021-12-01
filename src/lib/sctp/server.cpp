//
// This file is a part of UERANSIM open source project.
// Copyright (c) 2021 ALİ GÜNGÖR.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#include "server.hpp"
#include "internal.hpp"

/*sctp::SctpServer::SctpServer(const std::string &address, uint16_t port) : sd(0)
{
    try
    {
        //sd = CreateSocket();
        //BindSocket(sd, address, port);
        SetInitOptions(sd, 10, 10, 10, 10 * 1000);
        SetEventOptions(sd);
        //StartListening(sd);
    }
    catch (const SctpError &e)
    {
        CloseSocket(sd);
        throw;
    }
}*/

sctp::SctpServer::SctpServer(const std::string &address, uint16_t port) : sd(CreateSocket())
{
    try
    {
        //sd = CreateSocket();		// Edited by Philip Astillo
        //BindSocket(sd, address, port);
        SetInitOptions(sd, 10, 10, 10, 10 * 1000);
        SetEventOptions(sd);
        //StartListening(sd);
    }
    catch (const SctpError &e)
    {
        CloseSocket(sd);
        throw;
    }
}

sctp::SctpServer::~SctpServer()
{
    CloseSocket(sd);
}

//void sctp::SctpServer::start()
void sctp::SctpServer::accept(std::string &clientAddress, int &clientId, uint16_t &clientPort)	// Edited by Philip Astillo
{
    int assocSocket;

    std::string addr = Accept(sd, assocSocket, clientPort);

    clientAddress = addr;
    clientId = assocSocket;
}

// ============ Added by Philip Astillo ===================
void sctp::SctpServer::bind(const std::string &address, uint16_t port)
{
    BindSocket(sd, address, port);
}

void sctp::SctpServer::listen()
{
    StartListening(sd);
}
//=================================================
