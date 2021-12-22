/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_E_UTRAPRACHConfiguration_H_
#define	_E_UTRAPRACHConfiguration_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E_UTRAPRACHConfiguration__highSpeedFlag {
	E_UTRAPRACHConfiguration__highSpeedFlag_true	= 0,
	E_UTRAPRACHConfiguration__highSpeedFlag_false	= 1
	/*
	 * Enumeration is extensible
	 */
} e_E_UTRAPRACHConfiguration__highSpeedFlag;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* E-UTRAPRACHConfiguration */
typedef struct E_UTRAPRACHConfiguration {
	long	 rootSequenceIndex;
	long	 zeroCorrelationIndex;
	long	 highSpeedFlag;
	long	 prach_FreqOffset;
	long	*prach_ConfigIndex	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_UTRAPRACHConfiguration_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_highSpeedFlag_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_E_UTRAPRACHConfiguration;
extern asn_SEQUENCE_specifics_t asn_SPC_E_UTRAPRACHConfiguration_specs_1;
extern asn_TYPE_member_t asn_MBR_E_UTRAPRACHConfiguration_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _E_UTRAPRACHConfiguration_H_ */
#include <asn_internal.h>
