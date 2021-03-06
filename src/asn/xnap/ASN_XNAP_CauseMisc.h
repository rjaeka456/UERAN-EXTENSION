/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_CauseMisc_H_
#define	_CauseMisc_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_CauseMisc {
    ASN_XNAP_CauseMisc_control_processing_overload	= 0,
    ASN_XNAP_CauseMisc_hardware_failure	= 1,
    ASN_XNAP_CauseMisc_o_and_M_intervention	= 2,
    ASN_XNAP_CauseMisc_not_enough_user_plane_processing_resources	= 3,
    ASN_XNAP_CauseMisc_unspecified	= 4
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_CauseMisc;

/* CauseMisc */
typedef long	 ASN_XNAP_CauseMisc_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CauseMisc_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CauseMisc;
extern const asn_INTEGER_specifics_t asn_SPC_CauseMisc_specs_1;
asn_struct_free_f CauseMisc_free;
asn_struct_print_f CauseMisc_print;
asn_constr_check_f CauseMisc_constraint;
ber_type_decoder_f CauseMisc_decode_ber;
der_type_encoder_f CauseMisc_encode_der;
xer_type_decoder_f CauseMisc_decode_xer;
xer_type_encoder_f CauseMisc_encode_xer;
per_type_decoder_f CauseMisc_decode_uper;
per_type_encoder_f CauseMisc_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CauseMisc_H_ */
#include <asn_internal.h>
