/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Descriptions"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_XnAP_PDU_H_
#define	_XnAP_PDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_XnAP_PDU_PR {
	XnAP_PDU_PR_NOTHING,	/* No components present */
    ASN_XNAP_XnAP_PDU_PR_initiatingMessage,
    ASN_XNAP_XnAP_PDU_PR_successfulOutcome,
    ASN_XNAP_XnAP_PDU_PR_unsuccessfulOutcome
	/* Extensions may appear below */
	
} ASN_XNAP_XnAP_PDU_PR;

/* Forward declarations */
struct ASN_XNAP_InitiatingMessage;
struct ASN_XNAP_SuccessfulOutcome;
struct ASN_XNAP_UnsuccessfulOutcome;

/* XnAP-PDU */
typedef struct ASN_XNAP_XnAP_PDU {
    ASN_XNAP_XnAP_PDU_PR present;
	union ASN_XNAP_XnAP_PDU_u {
		struct ASN_XNAP_InitiatingMessage	*initiatingMessage;
		struct ASN_XNAP_SuccessfulOutcome	*successfulOutcome;
		struct ASN_XNAP_UnsuccessfulOutcome	*unsuccessfulOutcome;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_XnAP_PDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_XnAP_PDU;

#ifdef __cplusplus
}
#endif

#endif	/* _XnAP_PDU_H_ */
#include <asn_internal.h>
