/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_GlobalngeNB_ID_H_
#define	_GlobalngeNB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_PLMN-Identity.h"
#include "ASN_XNAP_ENB-ID-Choice.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* GlobalngeNB-ID */
typedef struct ASN_XNAP_GlobalngeNB_ID {
    ASN_XNAP_PLMN_Identity_t	 plmn_id;
    ASN_XNAP_ENB_ID_Choice_t	 enb_id;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_GlobalngeNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_GlobalngeNB_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_GlobalngeNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_GlobalngeNB_ID_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalngeNB_ID_H_ */
#include <asn_internal.h>
