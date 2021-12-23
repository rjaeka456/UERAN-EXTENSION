#include "task.hpp"

#include <lib/asn/xnap.hpp>
#include <gnb/app/task.hpp>
#include <gnb/rrc/task.hpp>
#include <gnb/sctp/task.hpp>

#include <asn/xnap/ASN_XNAP_XnAP-PDU.h>
#include <asn/xnap/ASN_XNAP_Criticality.h>
#include <asn/xnap/ASN_XNAP_ProtocolIE-Field.h>
#include <asn/xnap/ASN_XNAP_XnSetupRequest.h>
#include <asn/xnap/ASN_XNAP_GlobalgNB-ID.h>

namespace nr::gnb
{

ASN_XNAP_XnAP_PDU* XnapTask::msgXnSetupRequest()
{
    auto *globalgnbId = asn::New<ASN_XNAP_GlobalgNB_ID>();


    auto *ieGlobalNGRANNodeId = asn::New<ASN_XNAP_XnSetupRequestIEs>();
    ieGlobalNGRANNodeId->id = ASN_XNAP_ProtocolIE_ID_id_GlobalNGRANnodeID;
    ieGlobalNGRANNodeId->criticality = ASN_XNAP_Criticality_reject;
    ieGlobalNGRANNodeId->value.present = ASN_XNAP_XnSetupRequestIEs__value_PR_GlobalNGRANNodeID;
    ieGlobalNGRANNodeId->value.choice.GlobalNGRANNodeID.present = ASN_XNAP_GlobalNG_RANNode_ID_PR_gNB;
    ieGlobalNGRANNodeId->value.choice.GlobalNGRANNodeID.choice.gNB = globalgnbId;

    auto *ieSupportedTAList = asn::New<ASN_XNAP_XnSetupRequestIEs>();

    auto *ieServedCellsNR = asn::New<ASN_XNAP_XnSetupRequestIEs>();

    auto *ieServedCellsEUTRA = asn::New<ASN_XNAP_XnSetupRequestIEs>();

    auto *ieInterfaceInstanceIndication = asn::New<ASN_XNAP_XnSetupRequestIEs>();

    auto *pdu = asn::xnap::NewMessagePdu<ASN_XNAP_XnSetupRequest>( {ieGlobalNGRANNodeId, ieSupportedTAList, ieServedCellsNR, ieServedCellsEUTRA, ieInterfaceInstanceIndication});

    return pdu;
}

/*ASN_XNAP_XNAP_PDU *XnapTask::msgHandoverRequest()
{

    auto *ieGlobalNGRANNodeId = asn::New<ASN_XNAP_XnSetupRequestIEs>();
    ieGlobalNGRANNodeId->id = ASN_NGAP_ProtocolIE_ID_id_GlobalRANNodeID;
    ieGlobalNGRANNodeId->criticality = ASN_NGAP_Criticality_reject;
    ieGlobalNGRANNodeId->value.present = ASN_NGAP_NGSetupRequestIEs__value_PR_GlobalRANNodeID;
    ieGlobalNGRANNodeId->value.choice.GlobalRANNodeID.present = ASN_NGAP_GlobalRANNodeID_PR_globalGNB_ID;
    ieGlobalNGRANNodeId->value.choice.GlobalRANNodeID.choice.globalGNB_ID = globalGnbId;

    auto *pdu = asn::xnap::NewMessagePdu<ASN_XNAP_XnSetupRequest>( {ieGlobalNGRANNodeId});

    return pdu;
}*/

} // namespace nr::gnb