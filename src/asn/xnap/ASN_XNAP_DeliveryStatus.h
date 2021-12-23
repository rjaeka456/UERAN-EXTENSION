/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_DeliveryStatus_H_
#define	_DeliveryStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DeliveryStatus */
typedef long	 ASN_XNAP_DeliveryStatus_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DeliveryStatus_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DeliveryStatus;
asn_struct_free_f DeliveryStatus_free;
asn_struct_print_f DeliveryStatus_print;
asn_constr_check_f DeliveryStatus_constraint;
ber_type_decoder_f DeliveryStatus_decode_ber;
der_type_encoder_f DeliveryStatus_encode_der;
xer_type_decoder_f DeliveryStatus_decode_xer;
xer_type_encoder_f DeliveryStatus_encode_xer;
per_type_decoder_f DeliveryStatus_decode_uper;
per_type_encoder_f DeliveryStatus_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DeliveryStatus_H_ */
#include <asn_internal.h>