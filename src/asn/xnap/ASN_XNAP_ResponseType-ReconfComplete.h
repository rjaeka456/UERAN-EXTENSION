/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_ResponseType_ReconfComplete_H_
#define	_ResponseType_ReconfComplete_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_ResponseType_ReconfComplete_PR {
    ASN_XNAP_ResponseType_ReconfComplete_PR_NOTHING,	/* No components present */
    ASN_XNAP_ResponseType_ReconfComplete_PR_configuration_successfully_applied,
    ASN_XNAP_ResponseType_ReconfComplete_PR_configuration_rejected_by_M_NG_RANNode,
    ASN_XNAP_ResponseType_ReconfComplete_PR_choice_extension
} ASN_XNAP_ResponseType_ReconfComplete_PR;

/* Forward declarations */
struct ASN_XNAP_Configuration_successfully_applied;
struct ASN_XNAP_Configuration_rejected_by_M_NG_RANNode;
struct ASN_XNAP_ProtocolIE_Single_Container;

/* ResponseType-ReconfComplete */
typedef struct ASN_XNAP_ResponseType_ReconfComplete {
    ASN_XNAP_ResponseType_ReconfComplete_PR present;
	union ASN_XNAP_ResponseType_ReconfComplete_u {
		struct ASN_XNAP_Configuration_successfully_applied	*configuration_successfully_applied;
		struct ASN_XNAP_Configuration_rejected_by_M_NG_RANNode	*configuration_rejected_by_M_NG_RANNode;
		struct ASN_XNAP_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_ResponseType_ReconfComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResponseType_ReconfComplete;
extern asn_CHOICE_specifics_t asn_SPC_ResponseType_ReconfComplete_specs_1;
extern asn_TYPE_member_t asn_MBR_ResponseType_ReconfComplete_1[3];
extern asn_per_constraints_t asn_PER_type_ResponseType_ReconfComplete_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ResponseType_ReconfComplete_H_ */
#include <asn_internal.h>
