/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_QoSFLowsAcceptedToBeForwarded_Item_H_
#define	_QoSFLowsAcceptedToBeForwarded_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_QoSFlowIdentifier.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* QoSFLowsAcceptedToBeForwarded-Item */
typedef struct ASN_XNAP_QoSFLowsAcceptedToBeForwarded_Item {
    ASN_XNAP_QoSFlowIdentifier_t	 qosFlowIdentifier;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_QoSFLowsAcceptedToBeForwarded_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QoSFLowsAcceptedToBeForwarded_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_QoSFLowsAcceptedToBeForwarded_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_QoSFLowsAcceptedToBeForwarded_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _QoSFLowsAcceptedToBeForwarded_Item_H_ */
#include <asn_internal.h>
