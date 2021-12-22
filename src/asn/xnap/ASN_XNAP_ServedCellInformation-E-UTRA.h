/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_ServedCellInformation_E_UTRA_H_
#define	_ServedCellInformation_E_UTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-UTRAPCI.h"
#include "E-UTRA-CGI.h"
#include "TAC.h"
#include "RANAC.h"
#include "ServedCellInformation-E-UTRA-ModeInfo.h"
#include "NumberOfAntennaPorts-E-UTRA.h"
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ServedCellInformation_E_UTRA__freqBandIndicatorPriority {
	ServedCellInformation_E_UTRA__freqBandIndicatorPriority_not_broadcast	= 0,
	ServedCellInformation_E_UTRA__freqBandIndicatorPriority_broadcast	= 1
	/*
	 * Enumeration is extensible
	 */
} e_ServedCellInformation_E_UTRA__freqBandIndicatorPriority;
typedef enum ServedCellInformation_E_UTRA__bandwidthReducedSI {
	ServedCellInformation_E_UTRA__bandwidthReducedSI_scheduled	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ServedCellInformation_E_UTRA__bandwidthReducedSI;

/* Forward declarations */
struct E_UTRAPRACHConfiguration;
struct MBSFNSubframeInfo_E_UTRA;
struct E_UTRAMultibandInfoList;
struct ProtectedE_UTRAResourceIndication;
struct ProtocolExtensionContainer;
struct ServedCellInformation_E_UTRA_perBPLMN;

/* ServedCellInformation-E-UTRA */
typedef struct ServedCellInformation_E_UTRA {
	E_UTRAPCI_t	 e_utra_pci;
	E_UTRA_CGI_t	 e_utra_cgi;
	TAC_t	 tac;
	RANAC_t	*ranac	/* OPTIONAL */;
	struct ServedCellInformation_E_UTRA__broadcastPLMNs {
		A_SEQUENCE_OF(struct ServedCellInformation_E_UTRA_perBPLMN) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} broadcastPLMNs;
	ServedCellInformation_E_UTRA_ModeInfo_t	 e_utra_mode_info;
	NumberOfAntennaPorts_E_UTRA_t	*numberofAntennaPorts	/* OPTIONAL */;
	struct E_UTRAPRACHConfiguration	*prach_configuration	/* OPTIONAL */;
	struct MBSFNSubframeInfo_E_UTRA	*mBSFNsubframeInfo	/* OPTIONAL */;
	struct E_UTRAMultibandInfoList	*multibandInfo	/* OPTIONAL */;
	long	*freqBandIndicatorPriority	/* OPTIONAL */;
	long	*bandwidthReducedSI	/* OPTIONAL */;
	struct ProtectedE_UTRAResourceIndication	*protectedE_UTRAResourceIndication	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedCellInformation_E_UTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_freqBandIndicatorPriority_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_bandwidthReducedSI_17;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ServedCellInformation_E_UTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_ServedCellInformation_E_UTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_ServedCellInformation_E_UTRA_1[14];

#ifdef __cplusplus
}
#endif

#endif	/* _ServedCellInformation_E_UTRA_H_ */
#include <asn_internal.h>
