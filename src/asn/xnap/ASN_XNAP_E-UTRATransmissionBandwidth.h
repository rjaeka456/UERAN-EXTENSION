/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_E_UTRATransmissionBandwidth_H_
#define	_E_UTRATransmissionBandwidth_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_E_UTRATransmissionBandwidth {
    ASN_XNAP_E_UTRATransmissionBandwidth_bw6	= 0,
    ASN_XNAP_E_UTRATransmissionBandwidth_bw15	= 1,
    ASN_XNAP_E_UTRATransmissionBandwidth_bw25	= 2,
    ASN_XNAP_E_UTRATransmissionBandwidth_bw50	= 3,
    ASN_XNAP_E_UTRATransmissionBandwidth_bw75	= 4,
    ASN_XNAP_E_UTRATransmissionBandwidth_bw100	= 5,
	/*
	 * Enumeration is extensible
	 */
    ASN_XNAP_E_UTRATransmissionBandwidth_bw1	= 6
} e_ASN_XNAP_E_UTRATransmissionBandwidth;

/* E-UTRATransmissionBandwidth */
typedef long	 ASN_XNAP_E_UTRATransmissionBandwidth_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_E_UTRATransmissionBandwidth_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_E_UTRATransmissionBandwidth;
extern const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_E_UTRATransmissionBandwidth_specs_1;
asn_struct_free_f E_UTRATransmissionBandwidth_free;
asn_struct_print_f E_UTRATransmissionBandwidth_print;
asn_constr_check_f E_UTRATransmissionBandwidth_constraint;
ber_type_decoder_f E_UTRATransmissionBandwidth_decode_ber;
der_type_encoder_f E_UTRATransmissionBandwidth_encode_der;
xer_type_decoder_f E_UTRATransmissionBandwidth_decode_xer;
xer_type_encoder_f E_UTRATransmissionBandwidth_encode_xer;
per_type_decoder_f E_UTRATransmissionBandwidth_decode_uper;
per_type_encoder_f E_UTRATransmissionBandwidth_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _E_UTRATransmissionBandwidth_H_ */
#include <asn_internal.h>