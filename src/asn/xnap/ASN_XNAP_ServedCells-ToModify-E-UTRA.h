/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_ServedCells_ToModify_E_UTRA_H_
#define	_ServedCells_ToModify_E_UTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ServedCells_ToModify_E_UTRA_Item;

/* ServedCells-ToModify-E-UTRA */
typedef struct ServedCells_ToModify_E_UTRA {
	A_SEQUENCE_OF(struct ServedCells_ToModify_E_UTRA_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedCells_ToModify_E_UTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServedCells_ToModify_E_UTRA;
extern asn_SET_OF_specifics_t asn_SPC_ServedCells_ToModify_E_UTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_ServedCells_ToModify_E_UTRA_1[1];
extern asn_per_constraints_t asn_PER_type_ServedCells_ToModify_E_UTRA_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ServedCells_ToModify_E_UTRA_H_ */
#include <asn_internal.h>
