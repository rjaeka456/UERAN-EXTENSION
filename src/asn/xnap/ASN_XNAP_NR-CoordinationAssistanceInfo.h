/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_NR_CoordinationAssistanceInfo_H_
#define	_NR_CoordinationAssistanceInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_NR_CoordinationAssistanceInfo {
    ASN_XNAP_NR_CoordinationAssistanceInfo_coordination_not_required	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_NR_CoordinationAssistanceInfo;

/* NR-CoordinationAssistanceInfo */
typedef long	 ASN_XNAP_NR_CoordinationAssistanceInfo_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_CoordinationAssistanceInfo_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_CoordinationAssistanceInfo;
extern const asn_INTEGER_specifics_t asn_SPC_NR_CoordinationAssistanceInfo_specs_1;
asn_struct_free_f NR_CoordinationAssistanceInfo_free;
asn_struct_print_f NR_CoordinationAssistanceInfo_print;
asn_constr_check_f NR_CoordinationAssistanceInfo_constraint;
ber_type_decoder_f NR_CoordinationAssistanceInfo_decode_ber;
der_type_encoder_f NR_CoordinationAssistanceInfo_encode_der;
xer_type_decoder_f NR_CoordinationAssistanceInfo_decode_xer;
xer_type_encoder_f NR_CoordinationAssistanceInfo_encode_xer;
per_type_decoder_f NR_CoordinationAssistanceInfo_decode_uper;
per_type_encoder_f NR_CoordinationAssistanceInfo_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CoordinationAssistanceInfo_H_ */
#include <asn_internal.h>
