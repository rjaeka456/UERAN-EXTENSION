#pragma once

#include <type_traits>

extern "C"
{
    struct ASN_XNAP_XnAP_PDU;
    struct ASN_XNAP_InitiatingMessage;
    struct ASN_XNAP_SuccessfulOutcome;
    struct ASN_XNAP_UnsuccessfulOutcome;

    struct ASN_XNAP_XnSetupFailure;
    struct ASN_XNAP_XnSetupRequest;
    struct ASN_XNAP_XnSetupResponse;
}

namespace asn::xnap
{
enum class XnapMessageType
{
    XnSetupFailure,
    XnSetupRequest,
    XnSetupResponse,
};

template <XnapMessageType T>
struct XnapMessageEnumToType
{
};

template <>
struct XnapMessageEnumToType<XnapMessageType::XnSetupRequest>
{
    typedef ASN_XNAP_XnSetupRequest T;
};

template <typename T>
struct XnapMessageTypeToEnum;

template <>
struct XnapMessageTypeToEnum<ASN_XNAP_XnSetupRequest>
{
    enum
    {
        V = (int)XnapMessageType::XnSetupRequest
    };
};

template <typename T>
struct XnapMessageToIeType
{
    typedef typename std::remove_reference<decltype(*T{}.protocolIEs.list.array[0])>::type value;
};

template <typename T>
struct XnapMessageToIeUnionType
{
    typedef decltype(typename XnapMessageToIeType<T>::value{}.value.choice) value;
};
} // namespace asn:xnap