#include "xnap.hpp"

namespace asn::xnap
{

int GetPduDescription(XnapMessageType messageType)
{
    switch (messageType)
    {
    case NgapMessageType::AMFConfigurationUpdate:
    case NgapMessageType::HandoverCancel:
    case NgapMessageType::HandoverRequired:
    case NgapMessageType::HandoverRequest:
    case NgapMessageType::InitialContextSetupRequest:
    case NgapMessageType::NGReset:
    case NgapMessageType::NGSetupRequest:
    case NgapMessageType::PathSwitchRequest:
    case NgapMessageType::PDUSessionResourceModifyRequest:
    case NgapMessageType::PDUSessionResourceModifyIndication:
    case NgapMessageType::PDUSessionResourceReleaseCommand:
    case NgapMessageType::PDUSessionResourceSetupRequest:
    case NgapMessageType::PWSCancelRequest:
    case NgapMessageType::RANConfigurationUpdate:
    case NgapMessageType::UEContextModificationRequest:
    case NgapMessageType::UEContextReleaseCommand:
    case NgapMessageType::UERadioCapabilityCheckRequest:
    case NgapMessageType::WriteReplaceWarningRequest:
    case NgapMessageType::AMFStatusIndication:
    case NgapMessageType::CellTrafficTrace:
    case NgapMessageType::DeactivateTrace:
    case NgapMessageType::DownlinkNASTransport:
    case NgapMessageType::DownlinkNonUEAssociatedNRPPaTransport:
    case NgapMessageType::DownlinkRANConfigurationTransfer:
    case NgapMessageType::DownlinkRANStatusTransfer:
    case NgapMessageType::DownlinkUEAssociatedNRPPaTransport:
    case NgapMessageType::ErrorIndication:
    case NgapMessageType::HandoverNotify:
    case NgapMessageType::InitialUEMessage:
    case NgapMessageType::LocationReport:
    case NgapMessageType::LocationReportingControl:
    case NgapMessageType::LocationReportingFailureIndication:
    case NgapMessageType::NASNonDeliveryIndication:
    case NgapMessageType::OverloadStart:
    case NgapMessageType::OverloadStop:
    case NgapMessageType::Paging:
    case NgapMessageType::PDUSessionResourceNotify:
    case NgapMessageType::PrivateMessage:
    case NgapMessageType::PWSFailureIndication:
    case NgapMessageType::PWSRestartIndication:
    case NgapMessageType::RerouteNASRequest:
    case NgapMessageType::RRCInactiveTransitionReport:
    case NgapMessageType::SecondaryRATDataUsageReport:
    case NgapMessageType::TraceFailureIndication:
    case NgapMessageType::TraceStart:
    case NgapMessageType::UEContextReleaseRequest:
    case NgapMessageType::UERadioCapabilityInfoIndication:
    case NgapMessageType::UETNLABindingReleaseRequest:
    case NgapMessageType::UplinkNASTransport:
    case NgapMessageType::UplinkNonUEAssociatedNRPPaTransport:
    case NgapMessageType::UplinkRANConfigurationTransfer:
    case NgapMessageType::UplinkRANStatusTransfer:
    case NgapMessageType::UplinkUEAssociatedNRPPaTransport:
        return 0;

    case NgapMessageType::AMFConfigurationUpdateAcknowledge:
    case NgapMessageType::HandoverCancelAcknowledge:
    case NgapMessageType::HandoverCommand:
    case NgapMessageType::HandoverRequestAcknowledge:
    case NgapMessageType::InitialContextSetupResponse:
    case NgapMessageType::NGResetAcknowledge:
    case NgapMessageType::NGSetupResponse:
    case NgapMessageType::PathSwitchRequestAcknowledge:
    case NgapMessageType::PDUSessionResourceModifyResponse:
    case NgapMessageType::PDUSessionResourceModifyConfirm:
    case NgapMessageType::PDUSessionResourceReleaseResponse:
    case NgapMessageType::PDUSessionResourceSetupResponse:
    case NgapMessageType::PWSCancelResponse:
    case NgapMessageType::RANConfigurationUpdateAcknowledge:
    case NgapMessageType::UEContextModificationResponse:
    case NgapMessageType::UEContextReleaseComplete:
    case NgapMessageType::UERadioCapabilityCheckResponse:
    case NgapMessageType::WriteReplaceWarningResponse:
        return 1;

    case NgapMessageType::AMFConfigurationUpdateFailure:
    case NgapMessageType::HandoverPreparationFailure:
    case NgapMessageType::HandoverFailure:
    case NgapMessageType::InitialContextSetupFailure:
    case NgapMessageType::NGSetupFailure:
    case NgapMessageType::PathSwitchRequestFailure:
    case NgapMessageType::RANConfigurationUpdateFailure:
    case NgapMessageType::UEContextModificationFailure:
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
        auto *desc = asn::New<ASN_NGAP_InitiatingMessage>();
        desc->procedureCode = GetProcedureCode(type);
        desc->criticality = GetProcedureCriticality(type);
        desc->value.present = static_cast<ASN_NGAP_InitiatingMessage__value_PR>(GetProcedurePresent(type));
        pOutDescription = desc;

        switch (type)
        {
        case XnapMessageType::AMFConfigurationUpdate:
            return &desc->value.choice.AMFConfigurationUpdate;
        case XnapMessageType::HandoverCancel:
            return &desc->value.choice.HandoverCancel;
        case XnapMessageType::HandoverRequired:
            return &desc->value.choice.HandoverRequired;
        case XnapMessageType::HandoverRequest:
            return &desc->value.choice.HandoverRequest;
        case XnapMessageType::InitialContextSetupRequest:
            return &desc->value.choice.InitialContextSetupRequest;
        case XnapMessageType::NGReset:
            return &desc->value.choice.NGReset;
        case XnapMessageType::XnSetupRequest:
            return &desc->value.choice.NGSetupRequest;
        case XnapMessageType::PathSwitchRequest:
            return &desc->value.choice.PathSwitchRequest;
        case XnapMessageType::PDUSessionResourceModifyRequest:
            return &desc->value.choice.PDUSessionResourceModifyRequest;
        case XnapMessageType::PDUSessionResourceModifyIndication:
            return &desc->value.choice.PDUSessionResourceModifyIndication;
        case XnapMessageType::PDUSessionResourceReleaseCommand:
            return &desc->value.choice.PDUSessionResourceReleaseCommand;
        case XnapMessageType::PDUSessionResourceSetupRequest:
            return &desc->value.choice.PDUSessionResourceSetupRequest;
        case XnapMessageType::PWSCancelRequest:
            return &desc->value.choice.PWSCancelRequest;
        case XnapMessageType::RANConfigurationUpdate:
            return &desc->value.choice.RANConfigurationUpdate;
        case XnapMessageType::UEContextModificationRequest:
            return &desc->value.choice.UEContextModificationRequest;
        case XnapMessageType::UEContextReleaseCommand:
            return &desc->value.choice.UEContextReleaseCommand;
        case XnapMessageType::UERadioCapabilityCheckRequest:
            return &desc->value.choice.UERadioCapabilityCheckRequest;
        case XnapMessageType::WriteReplaceWarningRequest:
            return &desc->value.choice.WriteReplaceWarningRequest;
        case XnapMessageType::AMFStatusIndication:
            return &desc->value.choice.AMFStatusIndication;
        case XnapMessageType::CellTrafficTrace:
            return &desc->value.choice.CellTrafficTrace;
        case XnapMessageType::DeactivateTrace:
            return &desc->value.choice.DeactivateTrace;
        case XnapMessageType::DownlinkNASTransport:
            return &desc->value.choice.DownlinkNASTransport;
        case XnapMessageType::DownlinkNonUEAssociatedNRPPaTransport:
            return &desc->value.choice.DownlinkNonUEAssociatedNRPPaTransport;
        case XnapMessageType::DownlinkRANConfigurationTransfer:
            return &desc->value.choice.DownlinkRANConfigurationTransfer;
        case XnapMessageType::DownlinkRANStatusTransfer:
            return &desc->value.choice.DownlinkRANStatusTransfer;
        case XnapMessageType::DownlinkUEAssociatedNRPPaTransport:
            return &desc->value.choice.DownlinkUEAssociatedNRPPaTransport;
        case XnapMessageType::ErrorIndication:
            return &desc->value.choice.ErrorIndication;
        case XnapMessageType::HandoverNotify:
            return &desc->value.choice.HandoverNotify;
        case XnapMessageType::InitialUEMessage:
            return &desc->value.choice.InitialUEMessage;
        case XnapMessageType::LocationReport:
            return &desc->value.choice.LocationReport;
        case XnapMessageType::LocationReportingControl:
            return &desc->value.choice.LocationReportingControl;
        case XnapMessageType::LocationReportingFailureIndication:
            return &desc->value.choice.LocationReportingFailureIndication;
        case XnapMessageType::NASNonDeliveryIndication:
            return &desc->value.choice.NASNonDeliveryIndication;
        case XnapMessageType::OverloadStart:
            return &desc->value.choice.OverloadStart;
        case XnapMessageType::OverloadStop:
            return &desc->value.choice.OverloadStop;
        case XnapMessageType::Paging:
            return &desc->value.choice.Paging;
        case XnapMessageType::PDUSessionResourceNotify:
            return &desc->value.choice.PDUSessionResourceNotify;
        case XnapMessageType::PrivateMessage:
            return &desc->value.choice.PrivateMessage;
        case XnapMessageType::PWSFailureIndication:
            return &desc->value.choice.PWSFailureIndication;
        case XnapMessageType::PWSRestartIndication:
            return &desc->value.choice.PWSRestartIndication;
        case XnapMessageType::RerouteNASRequest:
            return &desc->value.choice.RerouteNASRequest;
        case XnapMessageType::RRCInactiveTransitionReport:
            return &desc->value.choice.RRCInactiveTransitionReport;
        case XnapMessageType::SecondaryRATDataUsageReport:
            return &desc->value.choice.SecondaryRATDataUsageReport;
        case XnapMessageType::TraceFailureIndication:
            return &desc->value.choice.TraceFailureIndication;
        case XnapMessageType::TraceStart:
            return &desc->value.choice.TraceStart;
        case XnapMessageType::UEContextReleaseRequest:
            return &desc->value.choice.UEContextReleaseRequest;
        case XnapMessageType::UERadioCapabilityInfoIndication:
            return &desc->value.choice.UERadioCapabilityInfoIndication;
        case XnapMessageType::UETNLABindingReleaseRequest:
            return &desc->value.choice.UETNLABindingReleaseRequest;
        case XnapMessageType::UplinkNASTransport:
            return &desc->value.choice.UplinkNASTransport;
        case XnapMessageType::UplinkNonUEAssociatedNRPPaTransport:
            return &desc->value.choice.UplinkNonUEAssociatedNRPPaTransport;
        case XnapMessageType::UplinkRANConfigurationTransfer:
            return &desc->value.choice.UplinkRANConfigurationTransfer;
        case XnapMessageType::UplinkRANStatusTransfer:
            return &desc->value.choice.UplinkRANStatusTransfer;
        case XnapMessageType::UplinkUEAssociatedNRPPaTransport:
            return &desc->value.choice.UplinkUEAssociatedNRPPaTransport;
        default:
            assert(false);
        }
    }

    if (pduDescription == 1)
    {
        auto *desc = asn::New<ASN_XNAP_SuccessfulOutcome>();
        desc->procedureCode = GetProcedureCode(type);
        desc->criticality = GetProcedureCriticality(type);
        desc->value.present = static_cast<ASN_NGAP_SuccessfulOutcome__value_PR>(GetProcedurePresent(type));
        pOutDescription = desc;

        switch (type)
        {
        case XnapMessageType::AMFConfigurationUpdateAcknowledge:
            return &desc->value.choice.AMFConfigurationUpdateAcknowledge;
        case XnapMessageType::HandoverCancelAcknowledge:
            return &desc->value.choice.HandoverCancelAcknowledge;
        case XnapMessageType::HandoverCommand:
            return &desc->value.choice.HandoverCommand;
        case XnapMessageType::HandoverRequestAcknowledge:
            return &desc->value.choice.HandoverRequestAcknowledge;
        case XnapMessageType::InitialContextSetupResponse:
            return &desc->value.choice.InitialContextSetupResponse;
        case XnapMessageType::NGResetAcknowledge:
            return &desc->value.choice.NGResetAcknowledge;
        case XnapMessageType::NGSetupResponse:
            return &desc->value.choice.NGSetupResponse;
        case XnapMessageType::PathSwitchRequestAcknowledge:
            return &desc->value.choice.PathSwitchRequestAcknowledge;
        case XnapMessageType::PDUSessionResourceModifyResponse:
            return &desc->value.choice.PDUSessionResourceModifyResponse;
        case XnapMessageType::PDUSessionResourceModifyConfirm:
            return &desc->value.choice.PDUSessionResourceModifyConfirm;
        case XnapMessageType::PDUSessionResourceReleaseResponse:
            return &desc->value.choice.PDUSessionResourceReleaseResponse;
        case XnapMessageType::PDUSessionResourceSetupResponse:
            return &desc->value.choice.PDUSessionResourceSetupResponse;
        case XnapMessageType::PWSCancelResponse:
            return &desc->value.choice.PWSCancelResponse;
        case XnapMessageType::RANConfigurationUpdateAcknowledge:
            return &desc->value.choice.RANConfigurationUpdateAcknowledge;
        case XnapMessageType::UEContextModificationResponse:
            return &desc->value.choice.UEContextModificationResponse;
        case XnapMessageType::UEContextReleaseComplete:
            return &desc->value.choice.UEContextReleaseComplete;
        case XnapMessageType::UERadioCapabilityCheckResponse:
            return &desc->value.choice.UERadioCapabilityCheckResponse;
        case XnapMessageType::WriteReplaceWarningResponse:
            return &desc->value.choice.WriteReplaceWarningResponse;
        default:
            assert(false);
        }
    }

    if (pduDescription == 2)
    {
        auto *desc = asn::New<ASN_NGAP_UnsuccessfulOutcome>();
        desc->procedureCode = GetProcedureCode(type);
        desc->criticality = GetProcedureCriticality(type);
        desc->value.present = static_cast<ASN_NGAP_UnsuccessfulOutcome__value_PR>(GetProcedurePresent(type));
        pOutDescription = desc;

        switch (type)
        {
        case XnapMessageType::AMFConfigurationUpdateFailure:
            return &desc->value.choice.AMFConfigurationUpdateFailure;
        case XnapMessageType::HandoverPreparationFailure:
            return &desc->value.choice.HandoverPreparationFailure;
        case XnapMessageType::HandoverFailure:
            return &desc->value.choice.HandoverFailure;
        case XnapMessageType::InitialContextSetupFailure:
            return &desc->value.choice.InitialContextSetupFailure;
        case XnapMessageType::NGSetupFailure:
            return &desc->value.choice.NGSetupFailure;
        case XnapMessageType::PathSwitchRequestFailure:
            return &desc->value.choice.PathSwitchRequestFailure;
        case XnapMessageType::RANConfigurationUpdateFailure:
            return &desc->value.choice.RANConfigurationUpdateFailure;
        case XnapMessageType::UEContextModificationFailure:
            return &desc->value.choice.UEContextModificationFailure;
        default:
            assert(false);
            break;
        }
    }

    assert(false);
    return nullptr;
}
} // namespace asn:xnap