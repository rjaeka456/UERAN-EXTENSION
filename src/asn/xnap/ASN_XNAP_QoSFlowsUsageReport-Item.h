/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_QoSFlowsUsageReport_Item_H_
#define	_QoSFlowsUsageReport_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_QoSFlowIdentifier.h"
#include <NativeEnumerated.h>
#include "ASN_XNAP_VolumeTimedReportList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_QoSFlowsUsageReport_Item__rATType {
    ASN_XNAP_QoSFlowsUsageReport_Item__rATType_nr	= 0,
    ASN_XNAP_QoSFlowsUsageReport_Item__rATType_eutra	= 1
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_QoSFlowsUsageReport_Item__rATType;

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* QoSFlowsUsageReport-Item */
typedef struct ASN_XNAP_QoSFlowsUsageReport_Item {
    ASN_XNAP_QoSFlowIdentifier_t	 qosFlowIdentifier;
	long	 rATType;
    ASN_XNAP_VolumeTimedReportList_t	 qoSFlowsTimedReportList;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_QoSFlowsUsageReport_Item_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rATType_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_QoSFlowsUsageReport_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_QoSFlowsUsageReport_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_QoSFlowsUsageReport_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _QoSFlowsUsageReport_Item_H_ */
#include <asn_internal.h>
