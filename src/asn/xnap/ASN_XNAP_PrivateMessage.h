/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_PrivateMessage_H_
#define	_PrivateMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_PrivateIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PrivateMessage */
typedef struct ASN_XNAP_PrivateMessage {
    ASN_XNAP_PrivateIE_Container_6017P0_t	 privateIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_PrivateMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrivateMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_PrivateMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_PrivateMessage_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PrivateMessage_H_ */
#include <asn_internal.h>
