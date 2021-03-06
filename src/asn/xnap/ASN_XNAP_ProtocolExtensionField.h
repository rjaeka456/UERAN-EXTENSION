/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-Containers"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_ProtocolExtensionField_H_
#define	_ProtocolExtensionField_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_ProtocolIE-ID.h"
#include "ASN_XNAP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_ProtocolExtensionField_6004P0__extensionValue_PR {
	ProtocolExtensionField_6004P0__extensionValue_PR_NOTHING,	/* No components present */
	
} ASN_XNAP_ProtocolExtensionField_6004P0__extensionValue_PR;

/* ProtocolExtensionField */
typedef struct ASN_XNAP_ProtocolExtensionField_6004P0 {
    ASN_XNAP_ProtocolIE_ID_t	 id;
    ASN_XNAP_Criticality_t	 criticality;
	struct ASN_XNAP_ProtocolExtensionField_6004P0__extensionValue {
        ASN_XNAP_ProtocolExtensionField_6004P0__extensionValue_PR present;
		union ASN_XNAP_ProtocolExtensionField_6004P0__extensionValue_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} extensionValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_ProtocolExtensionField_6004P0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ProtocolExtensionField_6004P0;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_ProtocolExtensionField_6004P0_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_ProtocolExtensionField_6004P0_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolExtensionField_H_ */
#include <asn_internal.h>
