/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_DRBsAdmittedList_ModConfirm_SNterminated_Item_H_
#define	_DRBsAdmittedList_ModConfirm_SNterminated_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_DRB-ID.h"
#include "ASN_XNAP_LCID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_UPTransportParameters;
struct ASN_XNAP_ProtocolExtensionContainer;

/* DRBsAdmittedList-ModConfirm-SNterminated-Item */
typedef struct ASN_XNAP_DRBsAdmittedList_ModConfirm_SNterminated_Item {
    ASN_XNAP_DRB_ID_t	 drb_ID;
	struct ASN_XNAP_UPTransportParameters	*mN_DL_CG_UP_TNLInfo	/* OPTIONAL */;
	struct ASN_XNAP_UPTransportParameters	*secondary_MN_DL_CG_UP_TNLInfo	/* OPTIONAL */;
    ASN_XNAP_LCID_t	*lCID	/* OPTIONAL */;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_DRBsAdmittedList_ModConfirm_SNterminated_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRBsAdmittedList_ModConfirm_SNterminated_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_DRBsAdmittedList_ModConfirm_SNterminated_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_DRBsAdmittedList_ModConfirm_SNterminated_Item_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _DRBsAdmittedList_ModConfirm_SNterminated_Item_H_ */
#include <asn_internal.h>
