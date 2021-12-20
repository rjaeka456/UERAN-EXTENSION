#pragma once

#include <type_traits>

extern "C"
{
    struct ASN_XNAP_XNAP_PDU;
    struct ASN_XNAP_InitiatingMessage;
    struct ASN_XNAP_SuccessfulOutcome;
    struct ASN_XNAP_UnsuccessfulOutcome;

    struct ASN_XNAP_XNSetupFailure;
    struct ASN_XNAP_XNSetupRequest;
    struct ASN_XNAP_XNSetupResponse;
}

namespace asn::xnap
{
enum class XnapMessageType
{
    XNSetupFailure,
    XNSetupRequest,
    XNSetupResponse,
};
} // namespace asn:xnap