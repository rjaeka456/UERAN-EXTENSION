#include "xnap.hpp"
#include "utils.hpp"
#include "utils/common.hpp"

#include <algorithm>
#include <functional>
#include <exception>
#include <stdexcept>

#include <asn/xnap/ASN_XNAP_InitiatingMessage.h>
#include <asn/xnap/ASN_XNAP_SuccessfulOutcome.h>
#include <asn/xnap/ASN_XNAP_UnsuccessfulOutcome.h>
#include <asn/xnap/ASN_XNAP_XnAP-PDU.h>
#include <asn/xnap/ASN_XNAP_XnSetupFailure.h>
#include <asn/xnap/ASN_XNAP_XnSetupRequest.h>
#include <asn/xnap/ASN_XNAP_XnSetupResponse.h>

namespace asn::xnap
{

ASN_XNAP_XnAP_PDU *XnapPduFromPduDescription(ASN_XNAP_InitiatingMessage *desc)
{
    auto pdu = asn::New<ASN_XNAP_XnAP_PDU>();
    pdu->present = ASN_XNAP_XnAP_PDU_PR_initiatingMessage;
    pdu->choice.initiatingMessage = desc;
    return pdu;
}

int GetPduDescription(XnapMessageType messageType)
{
    switch (messageType)
    {
//    case XnapMessageType::AMFConfigurationUpdate:
//    case XnapMessageType::HandoverCancel:
//    case XnapMessageType::HandoverRequired:
//    case XnapMessageType::HandoverRequest:
//    case XnapMessageType::InitialContextSetupRequest:
//    case XnapMessageType::NGReset:
    case XnapMessageType::XnSetupRequest:
//    case XnapMessageType::PathSwitchRequest:
//    case XnapMessageType::PDUSessionResourceModifyRequest:
//    case XnapMessageType::PDUSessionResourceModifyIndication:
//    case XnapMessageType::PDUSessionResourceReleaseCommand:
//    case XnapMessageType::PDUSessionResourceSetupRequest:
//    case XnapMessageType::PWSCancelRequest:
//    case XnapMessageType::RANConfigurationUpdate:
//    case XnapMessageType::UEContextModificationRequest:
//    case XnapMessageType::UEContextReleaseCommand:
//    case XnapMessageType::UERadioCapabilityCheckRequest:
//    case XnapMessageType::WriteReplaceWarningRequest:
//    case XnapMessageType::AMFStatusIndication:
//    case XnapMessageType::CellTrafficTrace:
//    case XnapMessageType::DeactivateTrace:
//    case XnapMessageType::DownlinkNASTransport:
//    case XnapMessageType::DownlinkNonUEAssociatedNRPPaTransport:
//    case XnapMessageType::DownlinkRANConfigurationTransfer:
//    case XnapMessageType::DownlinkRANStatusTransfer:
//    case XnapMessageType::DownlinkUEAssociatedNRPPaTransport:
//    case XnapMessageType::ErrorIndication:
//    case XnapMessageType::HandoverNotify:
//    case XnapMessageType::InitialUEMessage:
//    case XnapMessageType::LocationReport:
//    case XnapMessageType::LocationReportingControl:
//    case XnapMessageType::LocationReportingFailureIndication:
//    case XnapMessageType::NASNonDeliveryIndication:
//    case XnapMessageType::OverloadStart:
//    case XnapMessageType::OverloadStop:
//    case XnapMessageType::Paging:
//    case XnapMessageType::PDUSessionResourceNotify:
//    case XnapMessageType::PrivateMessage:
//    case XnapMessageType::PWSFailureIndication:
//    case XnapMessageType::PWSRestartIndication:
//    case XnapMessageType::RerouteNASRequest:
//    case XnapMessageType::RRCInactiveTransitionReport:
//    case XnapMessageType::SecondaryRATDataUsageReport:
//    case XnapMessageType::TraceFailureIndication:
//    case XnapMessageType::TraceStart:
//    case XnapMessageType::UEContextReleaseRequest:
//    case XnapMessageType::UERadioCapabilityInfoIndication:
//    case XnapMessageType::UETNLABindingReleaseRequest:
//    case XnapMessageType::UplinkNASTransport:
//    case XnapMessageType::UplinkNonUEAssociatedNRPPaTransport:
//    case XnapMessageType::UplinkRANConfigurationTransfer:
//    case XnapMessageType::UplinkRANStatusTransfer:
//    case XnapMessageType::UplinkUEAssociatedNRPPaTransport:
        return 0;

//    case XnapMessageType::AMFConfigurationUpdateAcknowledge:
//    case XnapMessageType::HandoverCancelAcknowledge:
//    case XnapMessageType::HandoverCommand:
//    case XnapMessageType::HandoverRequestAcknowledge:
//    case XnapMessageType::InitialContextSetupResponse:
//    case XnapMessageType::NGResetAcknowledge:
    case XnapMessageType::XnSetupResponse:
//    case XnapMessageType::PathSwitchRequestAcknowledge:
//    case XnapMessageType::PDUSessionResourceModifyResponse:
//    case XnapMessageType::PDUSessionResourceModifyConfirm:
//    case XnapMessageType::PDUSessionResourceReleaseResponse:
//    case XnapMessageType::PDUSessionResourceSetupResponse:
//    case XnapMessageType::PWSCancelResponse:
//    case XnapMessageType::RANConfigurationUpdateAcknowledge:
//    case XnapMessageType::UEContextModificationResponse:
//    case XnapMessageType::UEContextReleaseComplete:
//    case XnapMessageType::UERadioCapabilityCheckResponse:
//    case XnapMessageType::WriteReplaceWarningResponse:
        return 1;

//    case XnapMessageType::AMFConfigurationUpdateFailure:
//    case XnapMessageType::HandoverPreparationFailure:
//    case XnapMessageType::HandoverFailure:
//    case XnapMessageType::InitialContextSetupFailure:
    case XnapMessageType::XnSetupFailure:
//    case XnapMessageType::PathSwitchRequestFailure:
//    case XnapMessageType::RANConfigurationUpdateFailure:
//    case XnapMessageType::UEContextModificationFailure:
        return 2;
    default:
        assert(false);
        break;
    }

    return 0;
}

void *NewDescFromMessageType(XnapMessageType type, void *&pOutDescription)
{
    int pduDescription = GetPduDescription(type);
    assert(pduDescription >= 0 && pduDescription <= 2);

    if (pduDescription == 0)
    {
        ASN_XNAP_InitiatingMessage* desc = asn::New<ASN_XNAP_InitiatingMessage>();
        desc->procedureCode = GetProcedureCode(type);
        desc->criticality = GetProcedureCriticality(type);
        desc->value.present = static_cast<ASN_XNAP_InitiatingMessage__value_PR>(GetProcedurePresent(type));
        pOutDescription = desc;

        switch (type)
        {
//        case XnapMessageType::AMFConfigurationUpdate:
//            return &desc->value.choice.AMFConfigurationUpdate;
//        case XnapMessageType::HandoverCancel:
//            return &desc->value.choice.HandoverCancel;
//        case XnapMessageType::HandoverRequired:
//            return &desc->value.choice.HandoverRequired;
//        case XnapMessageType::HandoverRequest:
//            return &desc->value.choice.HandoverRequest;
//        case XnapMessageType::InitialContextSetupRequest:
//            return &desc->value.choice.InitialContextSetupRequest;
//        case XnapMessageType::NGReset:
//            return &desc->value.choice.NGReset;
        case XnapMessageType::XnSetupRequest:
            return &desc->value.choice.XnSetupRequest;
//        case XnapMessageType::PathSwitchRequest:
//            return &desc->value.choice.PathSwitchRequest;
//        case XnapMessageType::PDUSessionResourceModifyRequest:
//            return &desc->value.choice.PDUSessionResourceModifyRequest;
//        case XnapMessageType::PDUSessionResourceModifyIndication:
//            return &desc->value.choice.PDUSessionResourceModifyIndication;
//        case XnapMessageType::PDUSessionResourceReleaseCommand:
//            return &desc->value.choice.PDUSessionResourceReleaseCommand;
//        case XnapMessageType::PDUSessionResourceSetupRequest:
//            return &desc->value.choice.PDUSessionResourceSetupRequest;
//        case XnapMessageType::PWSCancelRequest:
//            return &desc->value.choice.PWSCancelRequest;
//        case XnapMessageType::RANConfigurationUpdate:
//            return &desc->value.choice.RANConfigurationUpdate;
//        case XnapMessageType::UEContextModificationRequest:
//            return &desc->value.choice.UEContextModificationRequest;
//        case XnapMessageType::UEContextReleaseCommand:
//            return &desc->value.choice.UEContextReleaseCommand;
//        case XnapMessageType::UERadioCapabilityCheckRequest:
//            return &desc->value.choice.UERadioCapabilityCheckRequest;
//        case XnapMessageType::WriteReplaceWarningRequest:
//            return &desc->value.choice.WriteReplaceWarningRequest;
//        case XnapMessageType::AMFStatusIndication:
//            return &desc->value.choice.AMFStatusIndication;
//        case XnapMessageType::CellTrafficTrace:
//            return &desc->value.choice.CellTrafficTrace;
//        case XnapMessageType::DeactivateTrace:
//            return &desc->value.choice.DeactivateTrace;
//        case XnapMessageType::DownlinkNASTransport:
//            return &desc->value.choice.DownlinkNASTransport;
//        case XnapMessageType::DownlinkNonUEAssociatedNRPPaTransport:
//            return &desc->value.choice.DownlinkNonUEAssociatedNRPPaTransport;
//        case XnapMessageType::DownlinkRANConfigurationTransfer:
//            return &desc->value.choice.DownlinkRANConfigurationTransfer;
//        case XnapMessageType::DownlinkRANStatusTransfer:
//            return &desc->value.choice.DownlinkRANStatusTransfer;
//        case XnapMessageType::DownlinkUEAssociatedNRPPaTransport:
//            return &desc->value.choice.DownlinkUEAssociatedNRPPaTransport;
//        case XnapMessageType::ErrorIndication:
//            return &desc->value.choice.ErrorIndication;
//        case XnapMessageType::HandoverNotify:
//            return &desc->value.choice.HandoverNotify;
//        case XnapMessageType::InitialUEMessage:
//            return &desc->value.choice.InitialUEMessage;
//        case XnapMessageType::LocationReport:
//            return &desc->value.choice.LocationReport;
//        case XnapMessageType::LocationReportingControl:
//            return &desc->value.choice.LocationReportingControl;
//        case XnapMessageType::LocationReportingFailureIndication:
//            return &desc->value.choice.LocationReportingFailureIndication;
//        case XnapMessageType::NASNonDeliveryIndication:
//            return &desc->value.choice.NASNonDeliveryIndication;
//        case XnapMessageType::OverloadStart:
//            return &desc->value.choice.OverloadStart;
//        case XnapMessageType::OverloadStop:
//            return &desc->value.choice.OverloadStop;
//        case XnapMessageType::Paging:
//            return &desc->value.choice.Paging;
//        case XnapMessageType::PDUSessionResourceNotify:
//            return &desc->value.choice.PDUSessionResourceNotify;
//        case XnapMessageType::PrivateMessage:
//            return &desc->value.choice.PrivateMessage;
//        case XnapMessageType::PWSFailureIndication:
//            return &desc->value.choice.PWSFailureIndication;
//        case XnapMessageType::PWSRestartIndication:
//            return &desc->value.choice.PWSRestartIndication;
//        case XnapMessageType::RerouteNASRequest:
//            return &desc->value.choice.RerouteNASRequest;
//        case XnapMessageType::RRCInactiveTransitionReport:
//            return &desc->value.choice.RRCInactiveTransitionReport;
//        case XnapMessageType::SecondaryRATDataUsageReport:
//            return &desc->value.choice.SecondaryRATDataUsageReport;
//        case XnapMessageType::TraceFailureIndication:
//            return &desc->value.choice.TraceFailureIndication;
//        case XnapMessageType::TraceStart:
//            return &desc->value.choice.TraceStart;
//        case XnapMessageType::UEContextReleaseRequest:
//            return &desc->value.choice.UEContextReleaseRequest;
//        case XnapMessageType::UERadioCapabilityInfoIndication:
//            return &desc->value.choice.UERadioCapabilityInfoIndication;
//        case XnapMessageType::UETNLABindingReleaseRequest:
//            return &desc->value.choice.UETNLABindingReleaseRequest;
//        case XnapMessageType::UplinkNASTransport:
//            return &desc->value.choice.UplinkNASTransport;
//        case XnapMessageType::UplinkNonUEAssociatedNRPPaTransport:
//            return &desc->value.choice.UplinkNonUEAssociatedNRPPaTransport;
//        case XnapMessageType::UplinkRANConfigurationTransfer:
//            return &desc->value.choice.UplinkRANConfigurationTransfer;
//        case XnapMessageType::UplinkRANStatusTransfer:
//            return &desc->value.choice.UplinkRANStatusTransfer;
//        case XnapMessageType::UplinkUEAssociatedNRPPaTransport:
//            return &desc->value.choice.UplinkUEAssociatedNRPPaTransport;
        default:
            assert(false);
        }
    }

    if (pduDescription == 1)
    {
        auto *desc = asn::New<ASN_XNAP_SuccessfulOutcome>();
        desc->procedureCode = GetProcedureCode(type);
        desc->criticality = GetProcedureCriticality(type);
        desc->value.present = static_cast<ASN_XNAP_SuccessfulOutcome__value_PR>(GetProcedurePresent(type));
        pOutDescription = desc;

        switch (type)
        {
        case XnapMessageType::XnSetupResponse:
            return &desc->value.choice.XnSetupResponse;
        default:
            assert(false);
        }
    }

    if (pduDescription == 2)
    {
        auto *desc = asn::New<ASN_XNAP_UnsuccessfulOutcome>();
        desc->procedureCode = GetProcedureCode(type);
        desc->criticality = GetProcedureCriticality(type);
        desc->value.present = static_cast<ASN_XNAP_UnsuccessfulOutcome__value_PR>(GetProcedurePresent(type));
        pOutDescription = desc;

        switch (type)
        {
        case XnapMessageType::XnSetupFailure:
            return &desc->value.choice.XnSetupFailure;
        default:
            assert(false);
            break;
        }
    }

    assert(false);
    return nullptr;
}
int GetProcedureCode(XnapMessageType messageType)
{
    switch (messageType)
    {
    case XnapMessageType::XnSetupFailure:
    case XnapMessageType::XnSetupRequest:
    case XnapMessageType::XnSetupResponse:
        return 0;
    default:
        assert(false);
        break;
    }

    return 0;
}
int GetProcedureCriticality(XnapMessageType messageType)
{
    switch (messageType)
    {
    case XnapMessageType::XnSetupFailure:
    case XnapMessageType::XnSetupRequest:
    case XnapMessageType::XnSetupResponse:
        return 0;
    default:
        return 2;
    }
}

} // namespace asn:xnap