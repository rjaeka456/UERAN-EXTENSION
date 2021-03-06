/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_E_UTRA_Cell_Identity_H_
#define	_E_UTRA_Cell_Identity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E-UTRA-Cell-Identity */
typedef BIT_STRING_t	 ASN_XNAP_E_UTRA_Cell_Identity_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_E_UTRA_Cell_Identity_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_E_UTRA_Cell_Identity;
asn_struct_free_f E_UTRA_Cell_Identity_free;
asn_struct_print_f E_UTRA_Cell_Identity_print;
asn_constr_check_f E_UTRA_Cell_Identity_constraint;
ber_type_decoder_f E_UTRA_Cell_Identity_decode_ber;
der_type_encoder_f E_UTRA_Cell_Identity_encode_der;
xer_type_decoder_f E_UTRA_Cell_Identity_decode_xer;
xer_type_encoder_f E_UTRA_Cell_Identity_encode_xer;
per_type_decoder_f E_UTRA_Cell_Identity_decode_uper;
per_type_encoder_f E_UTRA_Cell_Identity_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _E_UTRA_Cell_Identity_H_ */
#include <asn_internal.h>
