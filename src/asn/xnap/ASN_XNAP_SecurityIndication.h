/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_SecurityIndication_H_
#define	_SecurityIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecurityIndication__integrityProtectionIndication {
	SecurityIndication__integrityProtectionIndication_required	= 0,
	SecurityIndication__integrityProtectionIndication_preferred	= 1,
	SecurityIndication__integrityProtectionIndication_not_needed	= 2
	/*
	 * Enumeration is extensible
	 */
} e_SecurityIndication__integrityProtectionIndication;
typedef enum SecurityIndication__confidentialityProtectionIndication {
	SecurityIndication__confidentialityProtectionIndication_required	= 0,
	SecurityIndication__confidentialityProtectionIndication_preferred	= 1,
	SecurityIndication__confidentialityProtectionIndication_not_needed	= 2
	/*
	 * Enumeration is extensible
	 */
} e_SecurityIndication__confidentialityProtectionIndication;

/* Forward declarations */
struct MaximumIPdatarate;
struct ProtocolExtensionContainer;

/* SecurityIndication */
typedef struct SecurityIndication {
	long	 integrityProtectionIndication;
	long	 confidentialityProtectionIndication;
	struct MaximumIPdatarate	*maximumIPdatarate	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityIndication_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_integrityProtectionIndication_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_confidentialityProtectionIndication_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SecurityIndication;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityIndication_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityIndication_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityIndication_H_ */
#include <asn_internal.h>
