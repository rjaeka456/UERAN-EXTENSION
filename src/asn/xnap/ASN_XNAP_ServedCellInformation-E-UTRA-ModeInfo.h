/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_ServedCellInformation_E_UTRA_ModeInfo_H_
#define	_ServedCellInformation_E_UTRA_ModeInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ServedCellInformation_E_UTRA_ModeInfo_PR {
	ServedCellInformation_E_UTRA_ModeInfo_PR_NOTHING,	/* No components present */
	ServedCellInformation_E_UTRA_ModeInfo_PR_fdd,
	ServedCellInformation_E_UTRA_ModeInfo_PR_tdd,
	ServedCellInformation_E_UTRA_ModeInfo_PR_choice_extension
} ServedCellInformation_E_UTRA_ModeInfo_PR;

/* Forward declarations */
struct ServedCellInformation_E_UTRA_FDDInfo;
struct ServedCellInformation_E_UTRA_TDDInfo;
struct ProtocolIE_Single_Container;

/* ServedCellInformation-E-UTRA-ModeInfo */
typedef struct ServedCellInformation_E_UTRA_ModeInfo {
	ServedCellInformation_E_UTRA_ModeInfo_PR present;
	union ServedCellInformation_E_UTRA_ModeInfo_u {
		struct ServedCellInformation_E_UTRA_FDDInfo	*fdd;
		struct ServedCellInformation_E_UTRA_TDDInfo	*tdd;
		struct ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedCellInformation_E_UTRA_ModeInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServedCellInformation_E_UTRA_ModeInfo;
extern asn_CHOICE_specifics_t asn_SPC_ServedCellInformation_E_UTRA_ModeInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_ServedCellInformation_E_UTRA_ModeInfo_1[3];
extern asn_per_constraints_t asn_PER_type_ServedCellInformation_E_UTRA_ModeInfo_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ServedCellInformation_E_UTRA_ModeInfo_H_ */
#include <asn_internal.h>
