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

namespace sctp
{

class SctpServer
{
  private:
    const int sd;	// Edited by Philip Astillo
		
  public:
    SctpServer(const std::string &address, uint16_t port);
    ~SctpServer();


    //void start();
	
	//========== Edited by Philip Astillo
	void accept(std::string &clientIp, int &clientId, uint16_t &clientPort); 
	void bind(const std::string &address, uint16_t port);
	void listen();
	
    // TODO: Other functionalities
};

} // namespace sctp