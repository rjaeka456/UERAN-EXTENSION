/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_ServedCellInformation_NR_H_
#define	_ServedCellInformation_NR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_NRPCI.h"
#include "ASN_XNAP_NR-CGI.h"
#include "ASN_XNAP_TAC.h"
#include "ASN_XNAP_RANAC.h"
#include "ASN_XNAP_BroadcastPLMNs.h"
#include "ASN_XNAP_NRModeInfo.h"
#include <OCTET_STRING.h>
#include "ASN_XNAP_Connectivity-Support.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* ServedCellInformation-NR */
typedef struct ASN_XNAP_ServedCellInformation_NR {
    ASN_XNAP_NRPCI_t	 nrPCI;
    ASN_XNAP_NR_CGI_t	 cellID;
    ASN_XNAP_TAC_t	 tac;
    ASN_XNAP_RANAC_t	*ranac	/* OPTIONAL */;
    ASN_XNAP_BroadcastPLMNs_t	 broadcastPLMN;
    ASN_XNAP_NRModeInfo_t	 nrModeInfo;
	OCTET_STRING_t	 measurementTimingConfiguration;
    ASN_XNAP_Connectivity_Support_t	 connectivitySupport;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_ServedCellInformation_NR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ServedCellInformation_NR;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_ServedCellInformation_NR_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_ServedCellInformation_NR_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _ServedCellInformation_NR_H_ */
#include <asn_internal.h>
