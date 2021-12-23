/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_UERANPagingIdentity_H_
#define	_UERANPagingIdentity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UERANPagingIdentity_PR {
	UERANPagingIdentity_PR_NOTHING,	/* No components present */
	UERANPagingIdentity_PR_i_RNTI_full,
	UERANPagingIdentity_PR_choice_extension
} UERANPagingIdentity_PR;

/* Forward declarations */
struct ProtocolIE_Single_Container;

/* UERANPagingIdentity */
typedef struct UERANPagingIdentity {
	UERANPagingIdentity_PR present;
	union UERANPagingIdentity_u {
		BIT_STRING_t	 i_RNTI_full;
		struct ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UERANPagingIdentity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UERANPagingIdentity;

#ifdef __cplusplus
}
#endif

#endif	/* _UERANPagingIdentity_H_ */
#include <asn_internal.h>