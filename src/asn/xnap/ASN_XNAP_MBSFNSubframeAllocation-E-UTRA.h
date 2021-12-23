/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_MBSFNSubframeAllocation_E_UTRA_H_
#define	_MBSFNSubframeAllocation_E_UTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_MBSFNSubframeAllocation_E_UTRA_PR {
    ASN_XNAP_MBSFNSubframeAllocation_E_UTRA_PR_NOTHING,	/* No components present */
    ASN_XNAP_MBSFNSubframeAllocation_E_UTRA_PR_oneframe,
    ASN_XNAP_MBSFNSubframeAllocation_E_UTRA_PR_fourframes,
    ASN_XNAP_MBSFNSubframeAllocation_E_UTRA_PR_choice_extension
} ASN_XNAP_MBSFNSubframeAllocation_E_UTRA_PR;

/* Forward declarations */
struct ASN_XNAP_ProtocolIE_Single_Container;

/* MBSFNSubframeAllocation-E-UTRA */
typedef struct ASN_XNAP_MBSFNSubframeAllocation_E_UTRA {
    ASN_XNAP_MBSFNSubframeAllocation_E_UTRA_PR present;
	union ASN_XNAP_MBSFNSubframeAllocation_E_UTRA_u {
		BIT_STRING_t	 oneframe;
		BIT_STRING_t	 fourframes;
		struct ASN_XNAP_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_MBSFNSubframeAllocation_E_UTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFNSubframeAllocation_E_UTRA;
extern asn_CHOICE_specifics_t asn_SPC_MBSFNSubframeAllocation_E_UTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_MBSFNSubframeAllocation_E_UTRA_1[3];
extern asn_per_constraints_t asn_PER_type_MBSFNSubframeAllocation_E_UTRA_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MBSFNSubframeAllocation_E_UTRA_H_ */
#include <asn_internal.h>
