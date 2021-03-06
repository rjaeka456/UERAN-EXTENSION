/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_CellAssistanceInfo_NR_H_
#define	_CellAssistanceInfo_NR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellAssistanceInfo_NR_PR {
	CellAssistanceInfo_NR_PR_NOTHING,	/* No components present */
	CellAssistanceInfo_NR_PR_limitedNR_List,
	CellAssistanceInfo_NR_PR_full_List,
	CellAssistanceInfo_NR_PR_choice_extension
} CellAssistanceInfo_NR_PR;
typedef enum CellAssistanceInfo_NR__full_List {
	CellAssistanceInfo_NR__full_List_all_served_cells_NR	= 0
	/*
	 * Enumeration is extensible
	 */
} e_CellAssistanceInfo_NR__full_List;

/* Forward declarations */
struct ProtocolIE_Single_Container;
struct NR_CGI;

/* CellAssistanceInfo-NR */
typedef struct CellAssistanceInfo_NR {
	CellAssistanceInfo_NR_PR present;
	union CellAssistanceInfo_NR_u {
		struct CellAssistanceInfo_NR__limitedNR_List {
			A_SEQUENCE_OF(struct NR_CGI) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *limitedNR_List;
		long	 full_List;
		struct ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellAssistanceInfo_NR_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_full_List_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CellAssistanceInfo_NR;

#ifdef __cplusplus
}
#endif

#endif	/* _CellAssistanceInfo_NR_H_ */
#include <asn_internal.h>
