/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_PagingDRX_H_
#define	_PagingDRX_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_PagingDRX {
    ASN_XNAP_PagingDRX_v32	= 0,
    ASN_XNAP_PagingDRX_v64	= 1,
    ASN_XNAP_PagingDRX_v128	= 2,
    ASN_XNAP_PagingDRX_v256	= 3
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_PagingDRX;

/* PagingDRX */
typedef long	 ASN_XNAP_PagingDRX_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PagingDRX;
asn_struct_free_f PagingDRX_free;
asn_struct_print_f PagingDRX_print;
asn_constr_check_f PagingDRX_constraint;
ber_type_decoder_f PagingDRX_decode_ber;
der_type_encoder_f PagingDRX_encode_der;
xer_type_decoder_f PagingDRX_decode_xer;
xer_type_encoder_f PagingDRX_encode_xer;
per_type_decoder_f PagingDRX_decode_uper;
per_type_encoder_f PagingDRX_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PagingDRX_H_ */
#include <asn_internal.h>