/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_PacketDelayBudget_H_
#define	_PacketDelayBudget_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PacketDelayBudget */
typedef long	 ASN_XNAP_PacketDelayBudget_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PacketDelayBudget_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PacketDelayBudget;
asn_struct_free_f PacketDelayBudget_free;
asn_struct_print_f PacketDelayBudget_print;
asn_constr_check_f PacketDelayBudget_constraint;
ber_type_decoder_f PacketDelayBudget_decode_ber;
der_type_encoder_f PacketDelayBudget_encode_der;
xer_type_decoder_f PacketDelayBudget_decode_xer;
xer_type_encoder_f PacketDelayBudget_encode_xer;
per_type_decoder_f PacketDelayBudget_decode_uper;
per_type_encoder_f PacketDelayBudget_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PacketDelayBudget_H_ */
#include <asn_internal.h>
