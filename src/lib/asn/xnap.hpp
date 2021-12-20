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

int GetPduDescription(XnapMessageType messageType);
int GetProcedureCode(XnapMessageType messageType);
int GetProcedureCriticality(XnapMessageType messageType);
int GetProcedurePresent(XnapMessageType messageType);

void *NewDescFromMessageType(XnapMessageType type, void *&pOutDescription);



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



} // namespace asn:xnap