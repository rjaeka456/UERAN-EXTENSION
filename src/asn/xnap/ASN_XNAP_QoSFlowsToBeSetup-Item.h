/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_QoSFlowsToBeSetup_Item_H_
#define	_QoSFlowsToBeSetup_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_QoSFlowIdentifier.h"
#include "ASN_XNAP_QoSFlowLevelQoSParameters.h"
#include "ASN_XNAP_E-RAB-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* QoSFlowsToBeSetup-Item */
typedef struct ASN_XNAP_QoSFlowsToBeSetup_Item {
    ASN_XNAP_QoSFlowIdentifier_t	 qfi;
    ASN_XNAP_QoSFlowLevelQoSParameters_t	 qosFlowLevelQoSParameters;
    ASN_XNAP_E_RAB_ID_t	*e_RAB_ID	/* OPTIONAL */;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_QoSFlowsToBeSetup_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QoSFlowsToBeSetup_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_QoSFlowsToBeSetup_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_QoSFlowsToBeSetup_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _QoSFlowsToBeSetup_Item_H_ */
#include <asn_internal.h>
