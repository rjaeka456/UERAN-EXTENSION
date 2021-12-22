/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_ServedCellInformation_E_UTRA_TDDInfo_H_
#define	_ServedCellInformation_E_UTRA_TDDInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-UTRAARFCN.h"
#include "E-UTRATransmissionBandwidth.h"
#include <NativeEnumerated.h>
#include "SpecialSubframeInfo-E-UTRA.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ServedCellInformation_E_UTRA_TDDInfo__subframeAssignmnet {
	ServedCellInformation_E_UTRA_TDDInfo__subframeAssignmnet_sa0	= 0,
	ServedCellInformation_E_UTRA_TDDInfo__subframeAssignmnet_sa1	= 1,
	ServedCellInformation_E_UTRA_TDDInfo__subframeAssignmnet_sa2	= 2,
	ServedCellInformation_E_UTRA_TDDInfo__subframeAssignmnet_sa3	= 3,
	ServedCellInformation_E_UTRA_TDDInfo__subframeAssignmnet_sa4	= 4,
	ServedCellInformation_E_UTRA_TDDInfo__subframeAssignmnet_sa5	= 5,
	ServedCellInformation_E_UTRA_TDDInfo__subframeAssignmnet_sa6	= 6
	/*
	 * Enumeration is extensible
	 */
} e_ServedCellInformation_E_UTRA_TDDInfo__subframeAssignmnet;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ServedCellInformation-E-UTRA-TDDInfo */
typedef struct ServedCellInformation_E_UTRA_TDDInfo {
	E_UTRAARFCN_t	 earfcn;
	E_UTRATransmissionBandwidth_t	 e_utraTxBW;
	long	 subframeAssignmnet;
	SpecialSubframeInfo_E_UTRA_t	 specialSubframeInfo;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedCellInformation_E_UTRA_TDDInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_subframeAssignmnet_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ServedCellInformation_E_UTRA_TDDInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_ServedCellInformation_E_UTRA_TDDInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_ServedCellInformation_E_UTRA_TDDInfo_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _ServedCellInformation_E_UTRA_TDDInfo_H_ */
#include <asn_internal.h>
