//
// This file is a part of UERANSIM open source project.
// Copyright (c) 2021 ALİ GÜNGÖR.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#pragma once

#include "types.hpp"

#include <string>

// Added by Philip Astillo
#include <arpa/inet.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/sctp.h>
#include <sys/socket.h>
#include <unistd.h>

namespace sctp
{

int CreateSocket();
void BindSocket(int sd, const std::string &address, uint16_t port);
void SetInitOptions(int sd, int maxRxStreams, int maxTxStreams, int maxAttempts, int initTimeoutMs);
void SetEventOptions(int sd);
void StartListening(int sd);
void CloseSocket(int sd);
//void Accept(int sd);
std::string Accept(int sd, int &nsd, uint16_t &port);	// Edited by Philip Astillo
void Connect(int sd, const std::string &address, uint16_t port);
void SendMessage(int sd, const uint8_t *buffer, size_t length, int ppid, uint16_t stream);
void ReceiveMessage(int sd, uint32_t ppid, ISctpHandler *handler);

} // namespace sctp