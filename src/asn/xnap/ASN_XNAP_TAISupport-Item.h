/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_TAISupport_Item_H_
#define	_TAISupport_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_TAC.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;
struct BroadcastPLMNinTAISupport_Item;

/* TAISupport-Item */
typedef struct ASN_XNAP_TAISupport_Item {
	TAC_t	 tac;
	struct TAISupport_Item__broadcastPLMNs {
		A_SEQUENCE_OF(struct BroadcastPLMNinTAISupport_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} broadcastPLMNs;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TAISupport_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TAISupport_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_TAISupport_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_TAISupport_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _TAISupport_Item_H_ */
#include <asn_internal.h>