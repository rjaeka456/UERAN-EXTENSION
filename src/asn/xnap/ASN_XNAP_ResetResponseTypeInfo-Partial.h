/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_ResetResponseTypeInfo_Partial_H_
#define	_ResetResponseTypeInfo_Partial_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_ResetResponsePartialReleaseList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* ResetResponseTypeInfo-Partial */
typedef struct ASN_XNAP_ResetResponseTypeInfo_Partial {
    ASN_XNAP_ResetResponsePartialReleaseList_t	 ue_contexts_AdmittedToBeReleasedList;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_ResetResponseTypeInfo_Partial_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResetResponseTypeInfo_Partial;
extern asn_SEQUENCE_specifics_t asn_SPC_ResetResponseTypeInfo_Partial_specs_1;
extern asn_TYPE_member_t asn_MBR_ResetResponseTypeInfo_Partial_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ResetResponseTypeInfo_Partial_H_ */
#include <asn_internal.h>
