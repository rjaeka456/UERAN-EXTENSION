/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_E_UTRA_ResourceCoordinationInfo_H_
#define	_E_UTRA_ResourceCoordinationInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-UTRA-CGI.h"
#include <BIT_STRING.h>
#include "E-UTRA-CoordinationAssistanceInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_CGI;
struct ProtocolExtensionContainer;

/* E-UTRA-ResourceCoordinationInfo */
typedef struct E_UTRA_ResourceCoordinationInfo {
	E_UTRA_CGI_t	 e_utra_cell;
	BIT_STRING_t	 ul_coordination_info;
	BIT_STRING_t	*dl_coordination_info	/* OPTIONAL */;
	struct NR_CGI	*nr_cell	/* OPTIONAL */;
	E_UTRA_CoordinationAssistanceInfo_t	*e_utra_coordination_assistance_info	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_UTRA_ResourceCoordinationInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_UTRA_ResourceCoordinationInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_E_UTRA_ResourceCoordinationInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_E_UTRA_ResourceCoordinationInfo_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _E_UTRA_ResourceCoordinationInfo_H_ */
#include <asn_internal.h>
