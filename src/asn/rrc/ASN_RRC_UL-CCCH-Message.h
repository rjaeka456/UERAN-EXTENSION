/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_UL_CCCH_Message_H_
#define	_ASN_RRC_UL_CCCH_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_RRC_UL-CCCH-MessageType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ASN_RRC_UL-CCCH-Message */
typedef struct ASN_RRC_UL_CCCH_Message {
	ASN_RRC_UL_CCCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_UL_CCCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_UL_CCCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_UL_CCCH_Message_H_ */
#include <asn_internal.h>
