/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_RANPagingAreaChoice_H_
#define	_RANPagingAreaChoice_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_RANPagingAreaChoice_PR {
    ASN_XNAP_RANPagingAreaChoice_PR_NOTHING,	/* No components present */
    ASN_XNAP_RANPagingAreaChoice_PR_cell_List,
    ASN_XNAP_RANPagingAreaChoice_PR_rANAreaID_List,
    ASN_XNAP_RANPagingAreaChoice_PR_choice_extension
} ASN_XNAP_RANPagingAreaChoice_PR;

/* Forward declarations */
struct ASN_XNAP_NG_RAN_Cell_Identity_ListinRANPagingArea;
struct ASN_XNAP_RANAreaID_List;
struct ASN_XNAP_ProtocolIE_Single_Container;

/* RANPagingAreaChoice */
typedef struct ASN_XNAP_RANPagingAreaChoice {
    ASN_XNAP_RANPagingAreaChoice_PR present;
	union ASN_XNAP_RANPagingAreaChoice_u {
		struct ASN_XNAP_NG_RAN_Cell_Identity_ListinRANPagingArea	*cell_List;
		struct ASN_XNAP_RANAreaID_List	*rANAreaID_List;
		struct ASN_XNAP_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_RANPagingAreaChoice_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANPagingAreaChoice;
extern asn_CHOICE_specifics_t asn_SPC_RANPagingAreaChoice_specs_1;
extern asn_TYPE_member_t asn_MBR_RANPagingAreaChoice_1[3];
extern asn_per_constraints_t asn_PER_type_RANPagingAreaChoice_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RANPagingAreaChoice_H_ */
#include <asn_internal.h>
