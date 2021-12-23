/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_DataTrafficResources_H_
#define	_DataTrafficResources_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DataTrafficResources */
typedef BIT_STRING_t	 ASN_XNAP_DataTrafficResources_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DataTrafficResources_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DataTrafficResources;
asn_struct_free_f DataTrafficResources_free;
asn_struct_print_f DataTrafficResources_print;
asn_constr_check_f DataTrafficResources_constraint;
ber_type_decoder_f DataTrafficResources_decode_ber;
der_type_encoder_f DataTrafficResources_encode_der;
xer_type_decoder_f DataTrafficResources_decode_xer;
xer_type_encoder_f DataTrafficResources_encode_xer;
per_type_decoder_f DataTrafficResources_decode_uper;
per_type_encoder_f DataTrafficResources_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DataTrafficResources_H_ */
#include <asn_internal.h>