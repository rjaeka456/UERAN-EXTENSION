/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_ULForwarding_H_
#define	_ULForwarding_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_ULForwarding {
    ASN_XNAP_ULForwarding_ul_forwarding_proposed	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_ULForwarding;

/* ULForwarding */
typedef long	 ASN_XNAP_ULForwarding_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ULForwarding_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ULForwarding;
extern const asn_INTEGER_specifics_t asn_SPC_ULForwarding_specs_1;
asn_struct_free_f ULForwarding_free;
asn_struct_print_f ULForwarding_print;
asn_constr_check_f ULForwarding_constraint;
ber_type_decoder_f ULForwarding_decode_ber;
der_type_encoder_f ULForwarding_encode_der;
xer_type_decoder_f ULForwarding_decode_xer;
xer_type_encoder_f ULForwarding_encode_xer;
per_type_decoder_f ULForwarding_decode_uper;
per_type_encoder_f ULForwarding_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ULForwarding_H_ */
#include <asn_internal.h>
