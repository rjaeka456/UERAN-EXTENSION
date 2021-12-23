#pragma once

#include "xnap_msg.hpp"

#include <algorithm>
#include <exception>
#include <functional>
#include <vector>

#include <asn_SEQUENCE_OF.h>
#include <asn_application.h>

namespace asn::xnap
{

ASN_XNAP_XnAP_PDU *XnapPduFromPduDescription(ASN_XNAP_InitiatingMessage *desc);
ASN_XNAP_XnAP_PDU *XnapPduFromPduDescription(ASN_XNAP_SuccessfulOutcome *desc);
ASN_XNAP_XnAP_PDU *XnapPduFromPduDescription(ASN_XNAP_UnsuccessfulOutcome *desc);

int GetPduDescription(XnapMessageType messageType);
int GetProcedureCode(XnapMessageType messageType);
int GetProcedureCriticality(XnapMessageType messageType);
int GetProcedurePresent(XnapMessageType messageType);

void *NewDescFromMessageType(XnapMessageType type, void *&pOutDescription);

template <typename TMessage>
inline void AddProtocolIe(TMessage &msg, typename XnapMessageToIeType<TMessage>::value *element)
{
    ASN_SEQUENCE_ADD(&msg.protocolIEs.list, element);

    // Protocol IE fields must be sorted according to ASN definition order.
    // Using 'present' here because it is consistent with ASN definition order;
    // This is not a constant-time operation.
    std::stable_sort(
        msg.protocolIEs.list.array, msg.protocolIEs.list.array + msg.protocolIEs.list.count,
        [](typename XnapMessageToIeType<TMessage>::value *a, typename XnapMessageToIeType<TMessage>::value *b) {
            return a->value.present < b->value.present;
        });
}

template <typename T>
inline ASN_XNAP_XnAP_PDU *NewMessagePdu(std::vector<typename XnapMessageToIeType<T>::value *> ies)
{
    auto msgType = static_cast<XnapMessageType>(XnapMessageTypeToEnum<T>::V);

    void *pDescription = nullptr;
    void *pMessage = NewDescFromMessageType(msgType, pDescription);


    for (auto &ie : ies)
        AddProtocolIe(*reinterpret_cast<T *>(pMessage), ie);

    int desc = GetPduDescription(msgType);
    switch (desc)
    {
    case 0:
        return XnapPduFromPduDescription(reinterpret_cast<ASN_XNAP_InitiatingMessage *>(pDescription));
    case 1:
        return XnapPduFromPduDescription(reinterpret_cast<ASN_XNAP_SuccessfulOutcome *>(pDescription));
    case 2:
        return XnapPduFromPduDescription(reinterpret_cast<ASN_XNAP_UnsuccessfulOutcome *>(pDescription));
    default:
        std::terminate();
    }
}

template <typename T>
inline typename asn::xnap::XnapMessageToIeUnionType<T>::value *GetProtocolIe(T *msg, int id, int order = 0)
{
    int found = -1;

    for (int i = 0; i < msg->protocolIEs.list.count; i++)
    {
        auto &item = msg->protocolIEs.list.array[i];
        if (item->id == id)
        {
            found++;
            if (order == found)
                return (typename asn::xnap::XnapMessageToIeUnionType<T>::value *)(&item->value.choice);
        }
    }

    return nullptr;
}

bool IsProtocolIeUsable(const ASN_XNAP_XnAP_PDU &pdu, const asn_TYPE_descriptor_t &ieType);

void *FindProtocolIeInPdu(const ASN_XNAP_XnAP_PDU &pdu, const asn_TYPE_descriptor_t &ieType, int protocolIeId);

bool AddProtocolIeIfUsable(const ASN_XNAP_XnAP_PDU &pdu, const asn_TYPE_descriptor_t &ieType, int protocolIeId,
                           int criticality, const std::function<void(void *)> &ieCreator);

} // namespace asn:xnap