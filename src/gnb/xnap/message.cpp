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
#include <asn/xnap/ASN_XNAP_TAISupport-Item.h>
#include <asn/xnap/ASN_XNAP_BroadcastPLMNinTAISupport-Item.h>
#include <asn/xnap/ASN_XNAP_S-NSSAI.h>
#include <asn/xnap/ASN_XNAP_GlobalAMF-Region-Information.h>
#include <asn/xnap/ASN_XNAP_ServedCells-NR-Item.h>

namespace nr::gnb
{

ASN_XNAP_XnAP_PDU* XnapTask::msgXnSetupRequest(int amfRegionID)
{
    auto *globalGnbId = asn::New<ASN_XNAP_GlobalgNB_ID>();
    globalGnbId->gnb_id.present = ASN_XNAP_GNB_ID_Choice_PR_gnb_ID;
    asn::SetBitString(globalGnbId->gnb_id.choice.gnb_ID, octet4{m_base->config->getGnbId()});
    asn::SetOctetString3(globalGnbId->plmn_id, ngap_utils::PlmnToOctet3(m_base->config->plmn));

    auto *ieGlobalNGRANNodeId = asn::New<ASN_XNAP_XnSetupRequestIEs>();
    ieGlobalNGRANNodeId->id = ASN_XNAP_ProtocolIE_ID_id_GlobalNGRANnodeID;
    ieGlobalNGRANNodeId->criticality = ASN_XNAP_Criticality_reject;
    ieGlobalNGRANNodeId->value.present = ASN_XNAP_XnSetupRequestIEs__value_PR_GlobalNGRANNodeID;
    ieGlobalNGRANNodeId->value.choice.GlobalNGRANNodeID.present = ASN_XNAP_GlobalNG_RANNode_ID_PR_gNB;
    ieGlobalNGRANNodeId->value.choice.GlobalNGRANNodeID.choice.gNB = globalGnbId;

    auto *broadcastPlmn = asn::New<ASN_XNAP_BroadcastPLMNinTAISupport_Item>();
    asn::SetOctetString3(broadcastPlmn->plmn_id, ngap_utils::PlmnToOctet3(m_base->config->plmn));
    for (auto &nssai : m_base->config->nssai.slices)
    {
        auto *item = asn::New<ASN_XNAP_S_NSSAI>();
        asn::SetOctetString1(item->sst, static_cast<uint8_t>(nssai.sst));
        if (nssai.sd.has_value())
        {
            item->sd = asn::New<OCTET_STRING_t>();
            asn::SetOctetString3(*item->sd, octet3{nssai.sd.value()});
        }
        asn::SequenceAdd(broadcastPlmn->tAISliceSupport_List, item);
    }

    auto *TAISupportItem = asn::New<ASN_XNAP_TAISupport_Item>();
    asn::SetOctetString3(TAISupportItem->tac, octet3{m_base->config->tac});
    asn::SequenceAdd(TAISupportItem->broadcastPLMNs, broadcastPlmn);

    auto *ieTAISupportlist = asn::New<ASN_XNAP_XnSetupRequestIEs>();
    ieTAISupportlist->id = ASN_XNAP_ProtocolIE_ID_id_TAISupportlist;
    ieTAISupportlist->criticality = ASN_XNAP_Criticality_reject;
    ieTAISupportlist->value.present = ASN_XNAP_XnSetupRequestIEs__value_PR_TAISupportList;
    asn::SequenceAdd(ieTAISupportlist->value.choice.TAISupportList, TAISupportItem);

    auto *GlobalAMFRegionInformation = asn::New<ASN_XNAP_GlobalAMF_Region_Information>();
    asn::SetOctetString3(GlobalAMFRegionInformation->plmn_ID, ngap_utils::PlmnToOctet3(m_base->config->plmn));
    asn::SetBitStringInt<8>(amfRegionID, GlobalAMFRegionInformation->amf_region_id);

    auto *ieAMFRegionInformation = asn::New<ASN_XNAP_XnSetupRequestIEs>();
    ieAMFRegionInformation->id = ASN_XNAP_ProtocolIE_ID_id_AMFRegionInformation;
    ieAMFRegionInformation->criticality = ASN_XNAP_Criticality_reject;
    ieAMFRegionInformation->value.present = ASN_XNAP_XnSetupRequestIEs__value_PR_AMFRegionInformation;
    asn::SequenceAdd(ieAMFRegionInformation->value.choice.AMFRegionInformation, GlobalAMFRegionInformation);

    auto *ServedCellsNRItem = asn::New<ASN_XNAP_ServedCells_NR_Item>;


    auto *ieServedCellsNR = asn::New<ASN_XNAP_XnSetupRequestIEs>();
    ieServedCellsNR->id = ASN_XNAP_ProtocolIE_ID_id_ListofservedcellsNR;
    ieServedCellsNR->criticality = ASN_XNAP_Criticality_reject;
    ieServedCellsNR->value.present = ASN_XNAP_XnSetupRequestIEs__value_PR_ServedCellsNR;


    //auto *ieServedCellsEUTRA = asn::New<ASN_XNAP_XnSetupRequestIEs>();

    auto *ieInterfaceInstanceIndication = asn::New<ASN_XNAP_XnSetupRequestIEs>();

    auto *pdu = asn::xnap::NewMessagePdu<ASN_XNAP_XnSetupRequest>( {ieGlobalNGRANNodeId, ieTAISupportlist, ieAMFRegionInformation, ieServedCellsNR, ieInterfaceInstanceIndication});

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