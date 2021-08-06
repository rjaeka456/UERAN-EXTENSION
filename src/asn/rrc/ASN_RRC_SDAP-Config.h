/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_SDAP_Config_H_
#define	_ASN_RRC_SDAP_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_RRC_PDU-SessionID.h"
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include "ASN_RRC_QFI.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_SDAP_Config__sdap_HeaderDL {
	ASN_RRC_SDAP_Config__sdap_HeaderDL_present	= 0,
	ASN_RRC_SDAP_Config__sdap_HeaderDL_absent	= 1
} e_ASN_RRC_SDAP_Config__sdap_HeaderDL;
typedef enum ASN_RRC_SDAP_Config__sdap_HeaderUL {
	ASN_RRC_SDAP_Config__sdap_HeaderUL_present	= 0,
	ASN_RRC_SDAP_Config__sdap_HeaderUL_absent	= 1
} e_ASN_RRC_SDAP_Config__sdap_HeaderUL;

/* ASN_RRC_SDAP-Config */
typedef struct ASN_RRC_SDAP_Config {
	ASN_RRC_PDU_SessionID_t	 pdu_Session;
	long	 sdap_HeaderDL;
	long	 sdap_HeaderUL;
	BOOLEAN_t	 defaultDRB;
	struct ASN_RRC_SDAP_Config__mappedQoS_FlowsToAdd {
		A_SEQUENCE_OF(ASN_RRC_QFI_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mappedQoS_FlowsToAdd;
	struct ASN_RRC_SDAP_Config__mappedQoS_FlowsToRelease {
		A_SEQUENCE_OF(ASN_RRC_QFI_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mappedQoS_FlowsToRelease;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_SDAP_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_sdap_HeaderDL_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_sdap_HeaderUL_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_SDAP_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_SDAP_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_SDAP_Config_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_SDAP_Config_H_ */
#include <asn_internal.h>
