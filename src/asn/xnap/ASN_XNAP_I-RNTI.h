/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_I_RNTI_H_
#define	_I_RNTI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum I_RNTI_PR {
	I_RNTI_PR_NOTHING,	/* No components present */
	I_RNTI_PR_i_RNTI_full,
	I_RNTI_PR_i_RNTI_short,
	I_RNTI_PR_choice_extension
} I_RNTI_PR;

/* Forward declarations */
struct ProtocolIE_Single_Container;

/* I-RNTI */
typedef struct I_RNTI {
	I_RNTI_PR present;
	union I_RNTI_u {
		BIT_STRING_t	 i_RNTI_full;
		BIT_STRING_t	 i_RNTI_short;
		struct ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} I_RNTI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_I_RNTI;
extern asn_CHOICE_specifics_t asn_SPC_I_RNTI_specs_1;
extern asn_TYPE_member_t asn_MBR_I_RNTI_1[3];
extern asn_per_constraints_t asn_PER_type_I_RNTI_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _I_RNTI_H_ */
#include <asn_internal.h>
