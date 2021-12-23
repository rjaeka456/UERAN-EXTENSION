/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_AS_SecurityInformation_H_
#define	_AS_SecurityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* AS-SecurityInformation */
typedef struct ASN_XNAP_AS_SecurityInformation {
	BIT_STRING_t	 key_NG_RAN_Star;
	long	 ncc;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_AS_SecurityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AS_SecurityInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_AS_SecurityInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_AS_SecurityInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _AS_SecurityInformation_H_ */
#include <asn_internal.h>