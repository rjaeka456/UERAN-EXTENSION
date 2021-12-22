/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_QoSFlowsAdmitted_List_H_
#define	_QoSFlowsAdmitted_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QoSFlowsAdmitted_Item;

/* QoSFlowsAdmitted-List */
typedef struct QoSFlowsAdmitted_List {
	A_SEQUENCE_OF(struct QoSFlowsAdmitted_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QoSFlowsAdmitted_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QoSFlowsAdmitted_List;
extern asn_SET_OF_specifics_t asn_SPC_QoSFlowsAdmitted_List_specs_1;
extern asn_TYPE_member_t asn_MBR_QoSFlowsAdmitted_List_1[1];
extern asn_per_constraints_t asn_PER_type_QoSFlowsAdmitted_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _QoSFlowsAdmitted_List_H_ */
#include <asn_internal.h>
