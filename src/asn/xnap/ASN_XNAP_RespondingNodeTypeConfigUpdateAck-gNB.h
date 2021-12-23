/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_RespondingNodeTypeConfigUpdateAck_gNB_H_
#define	_RespondingNodeTypeConfigUpdateAck_gNB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ServedCells_NR;
struct ASN_XNAP_ProtocolExtensionContainer;

/* RespondingNodeTypeConfigUpdateAck-gNB */
typedef struct ASN_XNAP_RespondingNodeTypeConfigUpdateAck_gNB {
	struct ASN_XNAP_ServedCells_NR	*served_NR_Cells	/* OPTIONAL */;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_RespondingNodeTypeConfigUpdateAck_gNB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RespondingNodeTypeConfigUpdateAck_gNB;
extern asn_SEQUENCE_specifics_t asn_SPC_RespondingNodeTypeConfigUpdateAck_gNB_specs_1;
extern asn_TYPE_member_t asn_MBR_RespondingNodeTypeConfigUpdateAck_gNB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RespondingNodeTypeConfigUpdateAck_gNB_H_ */
#include <asn_internal.h>