/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_RespondingNodeTypeConfigUpdateAck_H_
#define	_RespondingNodeTypeConfigUpdateAck_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_RespondingNodeTypeConfigUpdateAck_PR {
    ASN_XNAP_RespondingNodeTypeConfigUpdateAck_PR_NOTHING,	/* No components present */
    ASN_XNAP_RespondingNodeTypeConfigUpdateAck_PR_ng_eNB,
    ASN_XNAP_RespondingNodeTypeConfigUpdateAck_PR_gNB,
    ASN_XNAP_RespondingNodeTypeConfigUpdateAck_PR_choice_extension
} ASN_XNAP_RespondingNodeTypeConfigUpdateAck_PR;

/* Forward declarations */
struct ASN_XNAP_RespondingNodeTypeConfigUpdateAck_ng_eNB;
struct ASN_XNAP_RespondingNodeTypeConfigUpdateAck_gNB;
struct ASN_XNAP_ProtocolIE_Single_Container;

/* RespondingNodeTypeConfigUpdateAck */
typedef struct ASN_XNAP_RespondingNodeTypeConfigUpdateAck {
    ASN_XNAP_RespondingNodeTypeConfigUpdateAck_PR present;
	union ASN_XNAP_RespondingNodeTypeConfigUpdateAck_u {
		struct RespondingNodeTypeConfigUpdateAck_ng_eNB	*ng_eNB;
		struct RespondingNodeTypeConfigUpdateAck_gNB	*gNB;
		struct ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_RespondingNodeTypeConfigUpdateAck_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RespondingNodeTypeConfigUpdateAck;

#ifdef __cplusplus
}
#endif

#endif	/* _RespondingNodeTypeConfigUpdateAck_H_ */
#include <asn_internal.h>
