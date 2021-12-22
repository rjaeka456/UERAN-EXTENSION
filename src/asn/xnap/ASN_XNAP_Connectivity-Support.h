/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_Connectivity_Support_H_
#define	_Connectivity_Support_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Connectivity_Support__eNDC_Support {
	Connectivity_Support__eNDC_Support_supported	= 0,
	Connectivity_Support__eNDC_Support_not_supported	= 1
	/*
	 * Enumeration is extensible
	 */
} e_Connectivity_Support__eNDC_Support;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* Connectivity-Support */
typedef struct Connectivity_Support {
	long	 eNDC_Support;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Connectivity_Support_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eNDC_Support_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Connectivity_Support;
extern asn_SEQUENCE_specifics_t asn_SPC_Connectivity_Support_specs_1;
extern asn_TYPE_member_t asn_MBR_Connectivity_Support_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Connectivity_Support_H_ */
#include <asn_internal.h>
