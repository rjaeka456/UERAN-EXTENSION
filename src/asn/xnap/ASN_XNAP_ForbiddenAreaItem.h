/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_ForbiddenAreaItem_H_
#define	_ForbiddenAreaItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include "TAC.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ForbiddenAreaItem */
typedef struct ForbiddenAreaItem {
	PLMN_Identity_t	 plmn_Identity;
	struct ForbiddenAreaItem__forbidden_TACs {
		A_SEQUENCE_OF(TAC_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} forbidden_TACs;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ForbiddenAreaItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ForbiddenAreaItem;
extern asn_SEQUENCE_specifics_t asn_SPC_ForbiddenAreaItem_specs_1;
extern asn_TYPE_member_t asn_MBR_ForbiddenAreaItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ForbiddenAreaItem_H_ */
#include <asn_internal.h>
