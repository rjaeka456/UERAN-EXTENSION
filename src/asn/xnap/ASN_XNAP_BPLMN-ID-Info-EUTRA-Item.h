/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_BPLMN_ID_Info_EUTRA_Item_H_
#define	_BPLMN_ID_Info_EUTRA_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_BroadcastEUTRAPLMNs.h"
#include "ASN_XNAP_TAC.h"
#include "ASN_XNAP_E-UTRA-Cell-Identity.h"
#include "ASN_XNAP_RANAC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* BPLMN-ID-Info-EUTRA-Item */
typedef struct ASN_XNAP_BPLMN_ID_Info_EUTRA_Item {
	BroadcastEUTRAPLMNs_t	 broadcastPLMNs;
    ASN_XNAP_TAC_t	 tac;
    ASN_XNAP_E_UTRA_Cell_Identity_t	 e_utraCI;
    ASN_XNAP_RANAC_t	*ranac	/* OPTIONAL */;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_BPLMN_ID_Info_EUTRA_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BPLMN_ID_Info_EUTRA_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_BPLMN_ID_Info_EUTRA_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_BPLMN_ID_Info_EUTRA_Item_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _BPLMN_ID_Info_EUTRA_Item_H_ */
#include <asn_internal.h>