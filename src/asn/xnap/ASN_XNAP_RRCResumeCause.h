/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_RRCResumeCause_H_
#define	_RRCResumeCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCResumeCause {
	RRCResumeCause_rna_Update	= 0
	/*
	 * Enumeration is extensible
	 */
} e_RRCResumeCause;

/* RRCResumeCause */
typedef long	 RRCResumeCause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCResumeCause;
asn_struct_free_f RRCResumeCause_free;
asn_struct_print_f RRCResumeCause_print;
asn_constr_check_f RRCResumeCause_constraint;
ber_type_decoder_f RRCResumeCause_decode_ber;
der_type_encoder_f RRCResumeCause_encode_der;
xer_type_decoder_f RRCResumeCause_decode_xer;
xer_type_encoder_f RRCResumeCause_encode_xer;
per_type_decoder_f RRCResumeCause_decode_uper;
per_type_encoder_f RRCResumeCause_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCResumeCause_H_ */
#include <asn_internal.h>
