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

    auto *ieGlobalNGRANNodeId = asn::New<ASN_XNAP_XnSetupRequestIEs>();
    ieGlobalNGRANNodeId->id = ASN_NGAP_ProtocolIE_ID_id_GlobalRANNodeID;
    ieGlobalNGRANNodeId->criticality = ASN_NGAP_Criticality_reject;
    ieGlobalNGRANNodeId->value.present = ASN_NGAP_NGSetupRequestIEs__value_PR_GlobalRANNodeID;
    ieGlobalNGRANNodeId->value.choice.GlobalRANNodeID.present = ASN_NGAP_GlobalRANNodeID_PR_globalGNB_ID;
    ieGlobalNGRANNodeId->value.choice.GlobalRANNodeID.choice.globalGNB_ID = globalGnbId;

    auto *pdu = asn::xnap::NewMessagePdu<ASN_XNAP_XnSetupRequest>( {ieGlobalNGRANNodeId});

    return pdu;
}

} // namespace nr::gnb