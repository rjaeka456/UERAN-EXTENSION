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
#include <asn/xnap/ASN_XNAP_ProtocolIE-Field.h>


namespace asn::xnap
{

ASN_XNAP_XnAP_PDU *XnapPduFromPduDescription(ASN_XNAP_InitiatingMessage *desc)
{
    auto pdu = asn::New<ASN_XNAP_XnAP_PDU>();
    pdu->present = ASN_XNAP_XnAP_PDU_PR_initiatingMessage;
    pdu->choice.initiatingMessage = desc;
    return pdu;
}

ASN_XNAP_XnAP_PDU *XnapPduFromPduDescription(ASN_XNAP_SuccessfulOutcome *desc)
{
    auto pdu = asn::New<ASN_XNAP_XnAP_PDU>();
    pdu->present = ASN_XNAP_XnAP_PDU_PR_successfulOutcome;
    pdu->choice.successfulOutcome = desc;
    return pdu;
}

ASN_XNAP_XnAP_PDU *XnapPduFromPduDescription(ASN_XNAP_UnsuccessfulOutcome *desc)
{
    auto pdu = asn::New<ASN_XNAP_XnAP_PDU>();
    pdu->present = ASN_XNAP_XnAP_PDU_PR_unsuccessfulOutcome;
    pdu->choice.unsuccessfulOutcome = desc;
    return pdu;
}

int GetPduDescription(XnapMessageType messageType)
{
    switch (messageType)
    {
    case XnapMessageType::XnSetupRequest:
        return 0;

    case XnapMessageType::XnSetupResponse:
        return 1;

    case XnapMessageType::XnSetupFailure:
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
        case XnapMessageType::XnSetupRequest:
            return &desc->value.choice.XnSetupRequest;
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

struct IeFieldInfo
{
    unsigned int ieIdOffset;
    unsigned int ieCriticalityOffset;
    unsigned int ieStructSize;
    void *listPtr;
    unsigned int presOffset;
    unsigned int choiceOffset;
    unsigned int presSize;
    unsigned int memberIndex;
    void *protocolIeContainerPtr;
    asn_anonymous_set_ *list;
};

static bool GetProtocolIeInfo(const ASN_XNAP_XnAP_PDU &pdu, const asn_TYPE_descriptor_t &ieType, IeFieldInfo &info)
{
    // This function assumes all ASN structs are "C++ standard layout".
    // Therefore no problem is expected since the structs are already standard layout.

    // Assert that the machine is Little Endian. (This assumption is used for presentEnumSize and related)
    if (!utils::IsLittleEndian())
        throw std::runtime_error("Big Endian architecture is not supported");

    asn_TYPE_descriptor_t *desc;
    void *ptr;

    if (pdu.present == ASN_XNAP_XnAP_PDU_PR_initiatingMessage)
    {
        desc = &asn_DEF_InitiatingMessage;
        ptr = pdu.choice.initiatingMessage;
    }
    else if (pdu.present == ASN_XNAP_XnAP_PDU_PR_successfulOutcome)
    {
        desc = &asn_DEF_SuccessfulOutcome;
        ptr = pdu.choice.successfulOutcome;
    }
    else if (pdu.present == ASN_XNAP_XnAP_PDU_PR_unsuccessfulOutcome)
    {
        desc = &asn_DEF_UnsuccessfulOutcome;
        ptr = pdu.choice.unsuccessfulOutcome;
    }
    else
        return false;

    ptr = reinterpret_cast<int8_t *>(ptr) + desc->elements[2].memb_offset;
    desc = desc->elements[2].type;

    auto members = desc->elements;
    unsigned memberCount = desc->elements_count;

    auto choiceSpecs = reinterpret_cast<const asn_CHOICE_specifics_t *>(desc->specifics);

    unsigned presentEnumSize = choiceSpecs->pres_size;

    auto presPtr = reinterpret_cast<int8_t *>(ptr) + choiceSpecs->pres_offset;

    uint64_t presentValue = 0;
    for (unsigned i = 0; i < presentEnumSize; i++)
        presentValue += (*(presPtr + i) & 0xFF) << (i * 8);

    if (presentValue == 0)
        return false;

    ptr = reinterpret_cast<int8_t *>(ptr) + members[presentValue - 1].memb_offset;
    desc = members[presentValue - 1].type;

    members = desc->elements;
    memberCount = desc->elements_count;

    ptr = reinterpret_cast<int8_t *>(ptr) + members[0].memb_offset;
    desc = members[0].type;

    info.protocolIeContainerPtr = ptr;

    members = desc->elements;
    memberCount = desc->elements_count;

    ptr = reinterpret_cast<int8_t *>(ptr) + members[0].memb_offset;
    desc = members[0].type;

    members = desc->elements;
    memberCount = desc->elements_count;

    info.ieIdOffset = members[0].memb_offset;
    info.ieCriticalityOffset = members[1].memb_offset;
    info.ieStructSize = reinterpret_cast<const asn_SEQUENCE_specifics_t *>(desc->specifics)->struct_size;

    info.listPtr = ptr;

    info.presOffset = members[2].memb_offset;
    info.choiceOffset = members[2].memb_offset;

    ptr = reinterpret_cast<int8_t *>(ptr) + members[2].memb_offset;
    desc = members[2].type;

    members = desc->elements;
    memberCount = desc->elements_count;

    choiceSpecs = reinterpret_cast<const asn_CHOICE_specifics_t *>(desc->specifics);
    info.presOffset += choiceSpecs->pres_offset;

    info.presSize = choiceSpecs->pres_size;

    info.memberIndex = ~0;

    for (unsigned i = 0; i < memberCount; i++)
    {
        if (members[i].type == &ieType)
        {
            // NOT: Birden fazla varsa ilk buludğunu alıyor.
            info.memberIndex = i;
            break;
        }
    }

    if (info.memberIndex == ~0U)
        return false;

    ptr = reinterpret_cast<int8_t *>(ptr) + members[info.memberIndex].memb_offset;
    desc = members[info.memberIndex].type;

    info.choiceOffset += members[info.memberIndex].memb_offset;

    info.list = reinterpret_cast<asn_anonymous_set_ *>(info.listPtr);

    return true;
}

bool IsProtocolIeUsable(const ASN_XNAP_XnAP_PDU &pdu, const asn_TYPE_descriptor_t &ieType)
{
    IeFieldInfo inf{};
    return GetProtocolIeInfo(pdu, ieType, inf);
}

void *FindProtocolIeInPdu(const ASN_XNAP_XnAP_PDU &pdu, const asn_TYPE_descriptor_t &ieType, int protocolIeId)
{
    IeFieldInfo inf{};
    if (!GetProtocolIeInfo(pdu, ieType, inf))
        return nullptr;

    for (int i = 0; i < inf.list->count; i++)
    {
        void *item = inf.list->array[i];
        ASN_XNAP_ProtocolIE_ID_t ieId =
            *reinterpret_cast<ASN_XNAP_ProtocolIE_ID_t *>((reinterpret_cast<int8_t *>(item) + inf.ieIdOffset));
        if (ieId == protocolIeId)
        {
            auto *valuePlace = (void *)(reinterpret_cast<int8_t *>(item) + inf.choiceOffset);
            return valuePlace;
        }
    }
    return nullptr;
}

} // namespace asn::xnap