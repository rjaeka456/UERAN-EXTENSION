/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_GlobalNG_RANNode_ID_H_
#define	_GlobalNG_RANNode_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_GlobalNG_RANNode_ID_PR {
    ASN_XNAP_GlobalNG_RANNode_ID_PR_NOTHING,	/* No components present */
    ASN_XNAP_GlobalNG_RANNode_ID_PR_gNB,
    ASN_XNAP_GlobalNG_RANNode_ID_PR_ng_eNB,
    ASN_XNAP_GlobalNG_RANNode_ID_PR_choice_extension
} ASN_XNAP_GlobalNG_RANNode_ID_PR;

/* Forward declarations */
struct ASN_XNAP_GlobalgNB_ID;
struct ASN_XNAP_GlobalngeNB_ID;
struct ASN_XNAP_ProtocolIE_Single_Container;

/* GlobalNG-RANNode-ID */
typedef struct ASN_XNAP_GlobalNG_RANNode_ID {
    ASN_XNAP_GlobalNG_RANNode_ID_PR present;
	union ASN_XNAP_GlobalNG_RANNode_ID_u {
		struct ASN_XNAP_GlobalgNB_ID* gNB;
		struct ASN_XNAP_GlobalngeNB_ID* ng_eNB;
		struct ASN_XNAP_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_GlobalNG_RANNode_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GlobalNG_RANNode_ID;
extern asn_CHOICE_specifics_t asn_SPC_GlobalNG_RANNode_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_GlobalNG_RANNode_ID_1[3];
extern asn_per_constraints_t asn_PER_type_GlobalNG_RANNode_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalNG_RANNode_ID_H_ */
#include <asn_internal.h>
