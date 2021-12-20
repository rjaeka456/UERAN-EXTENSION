//
// Created by ran5g on 21. 12. 20..
//

#include "task.hpp"

#include <lib/asn/xnap.hpp>
#include <gnb/app/task.hpp>
#include <gnb/rrc/task.hpp>
#include <gnb/sctp/task.hpp>

#include <asn/xnap/ASN_XNAP_XnAP-PDU.h>
#include <asn/xnap/ASN_XNAP_XnSetupRequest.h>

namespace nr::gnb
{

ASN_XNAP_XNAP_PDU *XnapTask::msgXnSetupRequest()
{

    auto *pdu = asn::xnap::NewMessagePdu<ASN_XNAP_XNSetupRequest>(
        {ieGlobalGnbId, ieRanNodeName, ieSupportedTaList, iePagingDrx});

    return pdu;
}

} // namespace nr::gnb