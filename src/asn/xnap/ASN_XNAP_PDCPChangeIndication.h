/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_PDCPChangeIndication_H_
#define	_PDCPChangeIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDCPChangeIndication_PR {
	PDCPChangeIndication_PR_NOTHING,	/* No components present */
	PDCPChangeIndication_PR_from_S_NG_RAN_node,
	PDCPChangeIndication_PR_from_M_NG_RAN_node,
	PDCPChangeIndication_PR_choice_extension
} PDCPChangeIndication_PR;
typedef enum PDCPChangeIndication__from_S_NG_RAN_node {
	PDCPChangeIndication__from_S_NG_RAN_node_s_ng_ran_node_key_update_required	= 0,
	PDCPChangeIndication__from_S_NG_RAN_node_pdcp_data_recovery_required	= 1
	/*
	 * Enumeration is extensible
	 */
} e_PDCPChangeIndication__from_S_NG_RAN_node;
typedef enum PDCPChangeIndication__from_M_NG_RAN_node {
	PDCPChangeIndication__from_M_NG_RAN_node_pdcp_data_recovery_required	= 0
	/*
	 * Enumeration is extensible
	 */
} e_PDCPChangeIndication__from_M_NG_RAN_node;

/* Forward declarations */
struct ProtocolIE_Single_Container;

/* PDCPChangeIndication */
typedef struct PDCPChangeIndication {
	PDCPChangeIndication_PR present;
	union PDCPChangeIndication_u {
		long	 from_S_NG_RAN_node;
		long	 from_M_NG_RAN_node;
		struct ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCPChangeIndication_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_from_S_NG_RAN_node_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_from_M_NG_RAN_node_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDCPChangeIndication;

#ifdef __cplusplus
}
#endif

#endif	/* _PDCPChangeIndication_H_ */
#include <asn_internal.h>
