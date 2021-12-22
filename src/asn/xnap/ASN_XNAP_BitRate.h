/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_BitRate_H_
#define	_BitRate_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BitRate */
typedef INTEGER_t	 BitRate_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_BitRate_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_BitRate;
asn_struct_free_f BitRate_free;
asn_struct_print_f BitRate_print;
asn_constr_check_f BitRate_constraint;
ber_type_decoder_f BitRate_decode_ber;
der_type_encoder_f BitRate_encode_der;
xer_type_decoder_f BitRate_decode_xer;
xer_type_encoder_f BitRate_encode_xer;
per_type_decoder_f BitRate_decode_uper;
per_type_encoder_f BitRate_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _BitRate_H_ */
#include <asn_internal.h>
