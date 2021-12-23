//
// Created by ran5g on 21. 12. 20..
//

#pragma once

#include <optional>
#include <unordered_map>

#include <gnb/nts.hpp>
#include <gnb/types.hpp>
#include <lib/app/monitor.hpp>
#include <utils/logger.hpp>
#include <utils/nts.hpp>

extern "C"
{
    struct ASN_XNAP_XnAP_PDU;
}

namespace nr::gnb
{

class XnapTask : public NtsTask
{
  private:
    TaskBase *m_base;
    std::unique_ptr<Logger> m_logger;
    bool m_isInitialized;

  private:
    /* Message Generation functions */
    ASN_XNAP_XnAP_PDU* msgXnSetupRequest();
    ASN_XNAP_XnAP_PDU* msgXnSetupResponse();
    ASN_XNAP_XnAP_PDU* msgXnSetupFailure();
    ASN_XNAP_XnAP_PDU* msgHandoverRequest();
    ASN_XNAP_XnAP_PDU* msgHandoverRequestAcknowledge();
    ASN_XNAP_XnAP_PDU* msgHandoverPreparationFailure();
    ASN_XNAP_XnAP_PDU* msgSNStatusTransfer();
    ASN_XNAP_XnAP_PDU* msgUEContextRelease();

};

} // namespace nr::gnb
