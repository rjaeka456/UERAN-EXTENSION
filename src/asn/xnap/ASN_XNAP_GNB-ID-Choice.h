/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_GNB_ID_Choice_H_
#define	_GNB_ID_Choice_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_GNB_ID_Choice_PR {
    ASN_XNAP_GNB_ID_Choice_PR_NOTHING,	/* No components present */
    ASN_XNAP_GNB_ID_Choice_PR_gnb_ID,
    ASN_XNAP_GNB_ID_Choice_PR_choice_extension
} ASN_XNAP_GNB_ID_Choice_PR;

/* Forward declarations */
struct ASN_XNAP_ProtocolIE_Single_Container;

/* GNB-ID-Choice */
typedef struct ASN_XNAP_GNB_ID_Choice {
    ASN_XNAP_GNB_ID_Choice_PR present;
	union ASN_XNAP_GNB_ID_Choice_u {
		BIT_STRING_t	 gnb_ID;
		struct ASN_XNAP_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_GNB_ID_Choice_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_GNB_ID_Choice;
extern asn_CHOICE_specifics_t asn_SPC_ASN_XNAP_GNB_ID_Choice_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_GNB_ID_Choice_1[2];
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_GNB_ID_Choice_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _GNB_ID_Choice_H_ */
#include <asn_internal.h>
