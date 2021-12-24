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
#include <asn/xnap/ASN_XNAP_XnSetupResponse.h>
#include <asn/xnap/ASN_XNAP_CriticalityDiagnostics.h>
#include <asn/xnap/ASN_XNAP_HandoverRequest.h>

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

    auto *ServedCellsNRItem = asn::New<ASN_XNAP_ServedCells_NR_Item>();
    ServedCellsNRItem->served_cell_info_NR.nrPCI = m_base->config->getCellId();
    asn::SetOctetString3(ServedCellsNRItem->served_cell_info_NR.cellID.plmn_id, ngap_utils::PlmnToOctet3(m_base->config->plmn));
    asn::SetBitStringLong<36>(m_base->config->nci, ServedCellsNRItem->served_cell_info_NR.cellID.nr_CI);
    asn::SetOctetString3(ServedCellsNRItem->served_cell_info_NR.tac, octet3{m_base->config->tac});

    auto *ieServedCellsNR = asn::New<ASN_XNAP_XnSetupRequestIEs>();
    ieServedCellsNR->id = ASN_XNAP_ProtocolIE_ID_id_ListofservedcellsNR;
    ieServedCellsNR->criticality = ASN_XNAP_Criticality_reject;
    ieServedCellsNR->value.present = ASN_XNAP_XnSetupRequestIEs__value_PR_ServedCellsNR;
    asn::SequenceAdd(ieServedCellsNR->value.choice.ServedCellsNR, ServedCellsNRItem);

    //auto *ieServedCellsEUTRA = asn::New<ASN_XNAP_XnSetupRequestIEs>();

    auto *ieInterfaceInstanceIndication = asn::New<ASN_XNAP_XnSetupRequestIEs>();
    ieInterfaceInstanceIndication->id = ASN_XNAP_ProtocolIE_ID_id_InterfaceInstanceIndication;
    ieInterfaceInstanceIndication->criticality = ASN_XNAP_Criticality_reject;
    ieInterfaceInstanceIndication->value.present = ASN_XNAP_XnSetupRequestIEs__value_PR_InterfaceInstanceIndication;

    auto *pdu = asn::xnap::NewMessagePdu<ASN_XNAP_XnSetupRequest>( {ieGlobalNGRANNodeId, ieTAISupportlist, ieAMFRegionInformation, ieServedCellsNR, ieInterfaceInstanceIndication});

    return pdu;
}

ASN_XNAP_XnAP_PDU* XnapTask::msgXnSetupResponse(int amfRegionID)
{
    auto *globalGnbId = asn::New<ASN_XNAP_GlobalgNB_ID>();
    globalGnbId->gnb_id.present = ASN_XNAP_GNB_ID_Choice_PR_gnb_ID;
    asn::SetBitString(globalGnbId->gnb_id.choice.gnb_ID, octet4{m_base->config->getGnbId()});
    asn::SetOctetString3(globalGnbId->plmn_id, ngap_utils::PlmnToOctet3(m_base->config->plmn));

    auto *ieGlobalNGRANNodeId = asn::New<ASN_XNAP_XnSetupResponseIEs>();
    ieGlobalNGRANNodeId->id = ASN_XNAP_ProtocolIE_ID_id_GlobalNGRANnodeID;
    ieGlobalNGRANNodeId->criticality = ASN_XNAP_Criticality_reject;
    ieGlobalNGRANNodeId->value.present = ASN_XNAP_XnSetupResponseIEs__value_PR_GlobalNGRANNodeID;
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

    auto *ieTAISupportlist = asn::New<ASN_XNAP_XnSetupResponseIEs>();
    ieTAISupportlist->id = ASN_XNAP_ProtocolIE_ID_id_TAISupportlist;
    ieTAISupportlist->criticality = ASN_XNAP_Criticality_reject;
    ieTAISupportlist->value.present = ASN_XNAP_XnSetupResponseIEs__value_PR_TAISupportList;
    asn::SequenceAdd(ieTAISupportlist->value.choice.TAISupportList, TAISupportItem);

    auto *ServedCellsNRItem = asn::New<ASN_XNAP_ServedCells_NR_Item>();
    ServedCellsNRItem->served_cell_info_NR.nrPCI = m_base->config->getCellId();
    asn::SetOctetString3(ServedCellsNRItem->served_cell_info_NR.cellID.plmn_id, ngap_utils::PlmnToOctet3(m_base->config->plmn));
    asn::SetBitStringLong<36>(m_base->config->nci, ServedCellsNRItem->served_cell_info_NR.cellID.nr_CI);
    asn::SetOctetString3(ServedCellsNRItem->served_cell_info_NR.tac, octet3{m_base->config->tac});

    auto *ieServedCellsNR = asn::New<ASN_XNAP_XnSetupResponseIEs>();
    ieServedCellsNR->id = ASN_XNAP_ProtocolIE_ID_id_ListofservedcellsNR;
    ieServedCellsNR->criticality = ASN_XNAP_Criticality_reject;
    ieServedCellsNR->value.present = ASN_XNAP_XnSetupResponseIEs__value_PR_ServedCellsNR;
    asn::SequenceAdd(ieServedCellsNR->value.choice.ServedCellsNR, ServedCellsNRItem);

    //auto *ieServedCellsEUTRA = asn::New<ASN_XNAP_XnSetupRequestIEs>();

    auto *CriticalityDiagnostics = asn::New<ASN_XNAP_XnSetupResponseIEs>();
    CriticalityDiagnostics->id = ASN_XNAP_ProtocolIE_ID_id_CriticalityDiagnostics;
    CriticalityDiagnostics->criticality = ASN_XNAP_Criticality_ignore;
    CriticalityDiagnostics->value.present = ASN_XNAP_XnSetupResponseIEs__value_PR_CriticalityDiagnostics;

    auto *GlobalAMFRegionInformation = asn::New<ASN_XNAP_GlobalAMF_Region_Information>();
    asn::SetOctetString3(GlobalAMFRegionInformation->plmn_ID, ngap_utils::PlmnToOctet3(m_base->config->plmn));
    asn::SetBitStringInt<8>(amfRegionID, GlobalAMFRegionInformation->amf_region_id);

    auto *ieAMFRegionInformation = asn::New<ASN_XNAP_XnSetupResponseIEs>();
    ieAMFRegionInformation->id = ASN_XNAP_ProtocolIE_ID_id_AMFRegionInformation;
    ieAMFRegionInformation->criticality = ASN_XNAP_Criticality_reject;
    ieAMFRegionInformation->value.present = ASN_XNAP_XnSetupResponseIEs__value_PR_AMFRegionInformation;
    asn::SequenceAdd(ieAMFRegionInformation->value.choice.AMFRegionInformation, GlobalAMFRegionInformation);

    auto *ieInterfaceInstanceIndication = asn::New<ASN_XNAP_XnSetupResponseIEs>();
    ieInterfaceInstanceIndication->id = ASN_XNAP_ProtocolIE_ID_id_InterfaceInstanceIndication;
    ieInterfaceInstanceIndication->criticality = ASN_XNAP_Criticality_reject;
    ieInterfaceInstanceIndication->value.present = ASN_XNAP_XnSetupResponseIEs__value_PR_InterfaceInstanceIndication;

    auto *pdu = asn::xnap::NewMessagePdu<ASN_XNAP_XnSetupResponse>( {ieGlobalNGRANNodeId, ieTAISupportlist, ieServedCellsNR, CriticalityDiagnostics, ieAMFRegionInformation, ieInterfaceInstanceIndication});

    return pdu;
}

ASN_XNAP_XnAP_PDU* XnapTask::msgXnSetupFailure()
{
    auto *ieCause = asn::New<ASN_XNAP_XnSetupFailureIEs>();
    ieCause->id = ASN_XNAP_ProtocolIE_ID_id_Cause;
    ieCause->criticality = ASN_XNAP_Criticality_ignore;
    ieCause->value.present = ASN_XNAP_XnSetupFailureIEs__value_PR_Cause;

    auto *ieTimeToWait = asn::New<ASN_XNAP_XnSetupFailureIEs>();
    ieTimeToWait->id = ASN_XNAP_ProtocolIE_ID_id_TimeToWait;
    ieTimeToWait->criticality = ASN_XNAP_Criticality_ignore;
    ieTimeToWait->value.present = ASN_XNAP_XnSetupFailureIEs__value_PR_TimeToWait;

    auto *CriticalityDiagnostics = asn::New<ASN_XNAP_XnSetupFailureIEs>();
    CriticalityDiagnostics->id = ASN_XNAP_ProtocolIE_ID_id_CriticalityDiagnostics;
    CriticalityDiagnostics->criticality = ASN_XNAP_Criticality_ignore;
    CriticalityDiagnostics->value.present = ASN_XNAP_XnSetupFailureIEs__value_PR_CriticalityDiagnostics;

    auto *ieInterfaceInstanceIndication = asn::New<ASN_XNAP_XnSetupFailureIEs>();
    ieInterfaceInstanceIndication->id = ASN_XNAP_ProtocolIE_ID_id_InterfaceInstanceIndication;
    ieInterfaceInstanceIndication->criticality = ASN_XNAP_Criticality_reject;
    ieInterfaceInstanceIndication->value.present = ASN_XNAP_XnSetupFailureIEs__value_PR_InterfaceInstanceIndication;

    auto *pdu = asn::xnap::NewMessagePdu<ASN_XNAP_XnSetupFailure>( {ieInterfaceInstanceIndication, ieTimeToWait, CriticalityDiagnostics, ieInterfaceInstanceIndication});

    return pdu;
}

ASN_XNAP_XNAP_PDU *XnapTask::msgHandoverRequest()
{
    auto *ieNGRANnodeUEXnAPID = asn::New<ASN_XNAP_HandoverRequestIEs>();
    ieNGRANnodeUEXnAPID->id = ASN_NGAP_ProtocolIE_ID_id_sourceNGRANnodeUEXnAPID;
    ieNGRANnodeUEXnAPID->criticality = ASN_XNAP_Criticality_reject;
    ieNGRANnodeUEXnAPID->value.present = ASN_XNAP_HandoverRequestIEs__value_PR_NGRANnodeUEXnAPID;

    auto *ieCause = asn::New<ASN_XNAP_XnSetupFailureIEs>();
    ieCause->id = ASN_XNAP_ProtocolIE_ID_id_Cause;
    ieCause->criticality = ASN_XNAP_Criticality_reject;
    ieCause->value.present = ASN_XNAP_HandoverRequestIEs__value_PR_Cause;

    auto *ieTargetCGI = asn::New<ASN_XNAP_HandoverRequestIEs>();
    ieTargetCGI->id = ASN_NGAP_ProtocolIE_ID_id_TargetCGI;
    ieTargetCGI->criticality = ASN_XNAP_Criticality_reject;
    ieTargetCGI->value.present = ASN_XNAP_HandoverRequestIEs__value_PR_TargetCGI;

    auto *ieGUAMI = asn::New<ASN_XNAP_HandoverRequestIEs>();
    ieGUAMI->id = ASN_NGAP_ProtocolIE_ID_id_GUAMI;
    ieGUAMI->criticality = ASN_XNAP_Criticality_reject;
    ieGUAMI->value.present = ASN_XNAP_HandoverRequestIEs__value_PR_GUMI;

    auto *ieUEContextInfoHORequest = asn::New<ASN_XNAP_HandoverRequestIEs>();
    ieUEContextInfoHORequest->id = ASN_NGAP_ProtocolIE_ID_id_UEContextInfoHORequest;
    ieUEContextInfoHORequest->criticality = ASN_XNAP_Criticality_reject;
    ieUEContextInfoHORequest->value.present = ASN_XNAP_HandoverRequestIEs__value_PR_UEContextInfoHORequest;

    auto *ieUEHistoryInformation = asn::New<ASN_XNAP_HandoverRequestIEs>();
    ieUEHistoryInformation->id = ASN_NGAP_ProtocolIE_ID_id_UEHistoryInformation;
    ieUEHistoryInformation->criticality = ASN_XNAP_Criticality_ignore;
    ieUEHistoryInformation->value.present = ASN_XNAP_HandoverRequestIEs__value_PR_UEHistoryInformation;

    auto *pdu = asn::xnap::NewMessagePdu<ASN_XNAP_HandoverRequest>( {ieNGRANnodeUEXnAPID, ieCause, ieTargetCGI, ieGUAMI, ieUEContextInfoHORequest, ieUEHistoryInformation});

    return pdu;
}

ASN_XNAP_XnAP_PDU* XnapTask::msgHandoverRequestAcknowledge()
{
    auto *ieSourceNGRANnodeUEXnAPID = asn::New<ASN_XNAP_ASN_XNAP_HandoverRequestAcknowledgeIEs>();
    ieSourceNGRANnodeUEXnAPID->id = ASN_XNAP_ProtocolIE_ID_id_sourceNGRANnodeUEXnAPID;
    ieSourceNGRANnodeUEXnAPID->criticality = ASN_XNAP_Criticality_reject;
    ieSourceNGRANnodeUEXnAPID->value.present = ASN_XNAP_HandoverRequestAcknowledgeIEs__value_PR_SourceNGRANnodeUEXnAPID;

    auto *ieTargetNGRANnodeUEXnAPID = asn::New<ASN_XNAP_ASN_XNAP_HandoverRequestAcknowledgeIEs>();
    ieTargetNGRANnodeUEXnAPID->id = ASN_XNAP_ProtocolIE_ID_id_targetNGRANnodeUEXnAPID;
    ieTargetNGRANnodeUEXnAPID->criticality = ASN_XNAP_Criticality_reject;
    ieTargetNGRANnodeUEXnAPID->value.present = ASN_XNAP_HandoverRequestAcknowledgeIEs__value_PR_TargetNGRANnodeUEXnAPID;

    auto *iePDUSessionResourcesAdmittedList  = asn::New<ASN_XNAP_ASN_XNAP_HandoverRequestAcknowledgeIEs>();
    iePDUSessionResourcesAdmittedList->id = ASN_XNAP_ProtocolIE_ID_id_PDUSessionResourcesAdmittedList;
    iePDUSessionResourcesAdmittedList->criticality = ASN_XNAP_Criticality_ignore;
    iePDUSessionResourcesAdmittedList->value.present = ASN_XNAP_HandoverRequestAcknowledgeIEs__value_PR_PDUSessionResourcesAdmittedList;

    auto *iePDUSessionResourcesNotAdmittedList = asn::New<ASN_XNAP_ASN_XNAP_HandoverRequestAcknowledgeIEs>();
    iePDUSessionResourcesNotAdmittedList->id = ASN_XNAP_ProtocolIE_ID_id_PDUSessionResourcesNotAdmittedList;
    iePDUSessionResourcesNotAdmittedList->criticality = ASN_XNAP_Criticality_ignore;
    iePDUSessionResourcesNotAdmittedList->value.present = ASN_XNAP_HandoverRequestAcknowledgeIEs__value_PR_PDUSessionResourcesNotAdmittedList;

    auto *pdu = asn::xnap::NewMessagePdu<ASN_XNAP_HandoverRequestAcknowledge>( {ieSourceNGRANnodeUEXnAPID, ietargetNGRANnodeUEXnAPID, iePDUSessionResourcesAdmittedList, iePDUSessionResourcesNotAdmittedList});

    return pdu;
}

ASN_XNAP_XnAP_PDU* XnapTask::msgHandoverPreparationFailure()
{
    auto *ieSourceNGRANnodeUEXnAPID = asn::New<ASN_XNAP_HandoverPreparationFailureIEs>();
    ieSourceNGRANnodeUEXnAPID->id = ASN_XNAP_ProtocolIE_ID_id_sourceNGRANnodeUEXnAPID;
    ieSourceNGRANnodeUEXnAPID->criticality = ASN_XNAP_Criticality_reject;
    ieSourceNGRANnodeUEXnAPID->value.present = ASN_XNAP_ASN_XNAP_HandoverPreparationFailureIEs__value_PR_SourceNGRANnodeUEXnAPID;

    auto *ieCause = asn::New<ASN_XNAP_HandoverPreparationFailureIEs>();
    ieCause->id = ASN_XNAP_ProtocolIE_ID_id_Cause;
    ieCause->criticality = ASN_XNAP_Criticality_ignore;
    ieCause->value.present = ASN_XNAP_ASN_XNAP_HandoverPreparationFailureIEsIEs__value_PR_Cause;

    auto *CriticalityDiagnostics = asn::New<ASN_XNAP_HandoverPreparationFailureIEs>();
    CriticalityDiagnostics->id = ASN_XNAP_ProtocolIE_ID_id_CriticalityDiagnostics;
    CriticalityDiagnostics->criticality = ASN_XNAP_Criticality_ignore;
    CriticalityDiagnostics->value.present = ASN_XNAP_ASN_XNAP_HandoverPreparationFailureIEsIEs__value_PR_CriticalityDiagnostics;

    auto *pdu = asn::xnap::NewMessagePdu<ASN_XNAP_HandoverPreparationFailure>( {ieSourceNGRANnodeUEXnAPID, ieCause, CriticalityDiagnostics});

    return pdu;
}

ASN_XNAP_XnAP_PDU* XnapTask::msgSNStatusTransfer()
{
    auto *ieSourceNGRANnodeUEXnAPID = asn::New<ASN_XNAP_ASN_XNAP_SNStatusTransfereIEs>();
    ieSourceNGRANnodeUEXnAPID->id = ASN_XNAP_ProtocolIE_ID_id_sourceNGRANnodeUEXnAPID;
    ieSourceNGRANnodeUEXnAPID->criticality = ASN_XNAP_Criticality_reject;
    ieSourceNGRANnodeUEXnAPID->value.present = ASN_XNAP_SNStatusTransferIEs__value_PR_SourceNGRANnodeUEXnAPID;

    auto *ieTargetNGRANnodeUEXnAPID = asn::New<ASN_XNAP_ASN_XNAP_SNStatusTransferIEs>();
    ieTargetNGRANnodeUEXnAPID->id = ASN_XNAP_ProtocolIE_ID_id_targetNGRANnodeUEXnAPID;
    ieTargetNGRANnodeUEXnAPID->criticality = ASN_XNAP_Criticality_reject;
    ieTargetNGRANnodeUEXnAPID->value.present = ASN_XNAP_SNStatusTransferIEs__value_PR_TargetNGRANnodeUEXnAPID;

    auto *DRBsSubjectToStatusTransferList = asn::New<ASN_XNAP_ASN_XNAP_SNStatusTransferIEs>();
    DRBsSubjectToStatusTransferList->id = ASN_XNAP_ProtocolIE_ID_id_DRBsSubjectToStatusTransferList;
    DRBsSubjectToStatusTransferList->criticality = ASN_XNAP_Criticality_ignore;
    DRBsSubjectToStatusTransferList->value.present = ASN_XNAP_SNStatusTransferIEs__value_PR_TargetNGRANnodeUEXnAPID;

    auto *pdu = asn::xnap::NewMessagePdu<ASN_XNAP_SNStatusTransfer>( {ieSourceNGRANnodeUEXnAPID, ieTargetNGRANnodeUEXnAPID, DRBsSubjectToStatusTransferList});

    return pdu;
}

ASN_XNAP_XnAP_PDU* XnapTask::msgUEContextRelease()
{
    auto *ieSourceNGRANnodeUEXnAPID = asn::New<ASN_XNAP_ASN_XNAP_UEContextReleaseIEs>();
    ieSourceNGRANnodeUEXnAPID->id = ASN_XNAP_ProtocolIE_ID_id_sourceNGRANnodeUEXnAPID;
    ieSourceNGRANnodeUEXnAPID->criticality = ASN_XNAP_Criticality_reject;
    ieSourceNGRANnodeUEXnAPID->value.present = ASN_XNAP_UEContextReleaseIEs__value_PR_SourceNGRANnodeUEXnAPID;

    auto *ieTargetNGRANnodeUEXnAPID = asn::New<ASN_XNAP_ASN_XNAP_UEContextReleaseIEs>();
    ieTargetNGRANnodeUEXnAPID->id = ASN_XNAP_ProtocolIE_ID_id_targetNGRANnodeUEXnAPID;
    ieTargetNGRANnodeUEXnAPID->criticality = ASN_XNAP_Criticality_reject;
    ieTargetNGRANnodeUEXnAPID->value.present = ASN_XNAP_UEContextReleaseIEs__value_PR_TargetNGRANnodeUEXnAPID;

    auto *pdu = asn::xnap::NewMessagePdu<ASN_XNAP_UEContextRelease>( {ieSourceNGRANnodeUEXnAPID, ieTargetNGRANnodeUEXnAPID});

    return pdu;
}

} // namespace nr::gnb