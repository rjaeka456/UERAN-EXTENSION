/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_PDUSessionType_H_
#define	_PDUSessionType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDUSessionType {
	PDUSessionType_ipv4	= 0,
	PDUSessionType_ipv6	= 1,
	PDUSessionType_ipv4v6	= 2,
	PDUSessionType_ethernet	= 3,
	PDUSessionType_unstructured	= 4
	/*
	 * Enumeration is extensible
	 */
} e_PDUSessionType;

/* PDUSessionType */
typedef long	 PDUSessionType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PDUSessionType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionType;
extern const asn_INTEGER_specifics_t asn_SPC_PDUSessionType_specs_1;
asn_struct_free_f PDUSessionType_free;
asn_struct_print_f PDUSessionType_print;
asn_constr_check_f PDUSessionType_constraint;
ber_type_decoder_f PDUSessionType_decode_ber;
der_type_encoder_f PDUSessionType_encode_der;
xer_type_decoder_f PDUSessionType_decode_xer;
xer_type_encoder_f PDUSessionType_encode_xer;
per_type_decoder_f PDUSessionType_decode_uper;
per_type_encoder_f PDUSessionType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionType_H_ */
#include <asn_internal.h>
