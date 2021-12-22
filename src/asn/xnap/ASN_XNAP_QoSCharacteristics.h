/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_QoSCharacteristics_H_
#define	_QoSCharacteristics_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_QoSCharacteristics_PR {
    ASN_XNAP_QoSCharacteristics_PR_NOTHING,	/* No components present */
    ASN_XNAP_QoSCharacteristics_PR_non_dynamic,
    ASN_XNAP_QoSCharacteristics_PR_dynamic,
    ASN_XNAP_QoSCharacteristics_PR_choice_extension
} ASN_XNAP_QoSCharacteristics_PR;

/* Forward declarations */
struct ASN_XNAP_NonDynamic5QIDescriptor;
struct ASN_XNAP_Dynamic5QIDescriptor;
struct ASN_XNAP_ProtocolIE_Single_Container;

/* QoSCharacteristics */
typedef struct ASN_XNAP_QoSCharacteristics {
    ASN_XNAP_QoSCharacteristics_PR present;
	union ASN_XNAP_QoSCharacteristics_u {
		struct ASN_XNAP_NonDynamic5QIDescriptor	*non_dynamic;
		struct ASN_XNAP_Dynamic5QIDescriptor	*dynamic;
		struct ASN_XNAP_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_QoSCharacteristics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QoSCharacteristics;
extern asn_CHOICE_specifics_t asn_SPC_QoSCharacteristics_specs_1;
extern asn_TYPE_member_t asn_MBR_QoSCharacteristics_1[3];
extern asn_per_constraints_t asn_PER_type_QoSCharacteristics_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _QoSCharacteristics_H_ */
#include <asn_internal.h>
