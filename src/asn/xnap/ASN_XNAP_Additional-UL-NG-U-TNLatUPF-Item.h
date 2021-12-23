/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_Additional_UL_NG_U_TNLatUPF_Item_H_
#define	_Additional_UL_NG_U_TNLatUPF_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_UPTransportLayerInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* Additional-UL-NG-U-TNLatUPF-Item */
typedef struct ASN_XNAP_Additional_UL_NG_U_TNLatUPF_Item {
    ASN_XNAP_UPTransportLayerInformation_t	 additional_UL_NG_U_TNLatUPF;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_Additional_UL_NG_U_TNLatUPF_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Additional_UL_NG_U_TNLatUPF_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_Additional_UL_NG_U_TNLatUPF_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_Additional_UL_NG_U_TNLatUPF_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Additional_UL_NG_U_TNLatUPF_Item_H_ */
#include <asn_internal.h>
