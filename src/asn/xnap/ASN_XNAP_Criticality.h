/*
* Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
* From ASN.1 module "XnAP-CommonDataTypes"
* 	found in "./xnap-15.5.0.asn1"
* 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
*/

#ifndef	_Criticality_H_
#define	_Criticality_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

   /* Dependencies */
   typedef enum ASN_XNAP_Criticality {
       Criticality_reject	= 0,
       Criticality_ignore	= 1,
       Criticality_notify	= 2
   } e_ASN_XNAP_Criticality;

   /* Criticality */
   typedef long	 ASN_XNAP_Criticality_t;

   /* Implementation */
   extern asn_per_constraints_t asn_PER_type_Criticality_constr_1;
   extern asn_TYPE_descriptor_t asn_DEF_Criticality;
   extern const asn_INTEGER_specifics_t asn_SPC_Criticality_specs_1;
   asn_struct_free_f Criticality_free;
   asn_struct_print_f Criticality_print;
   asn_constr_check_f Criticality_constraint;
   ber_type_decoder_f Criticality_decode_ber;
   der_type_encoder_f Criticality_encode_der;
   xer_type_decoder_f Criticality_decode_xer;
   xer_type_encoder_f Criticality_encode_xer;
   per_type_decoder_f Criticality_decode_uper;
   per_type_encoder_f Criticality_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Criticality_H_ */
#include <asn_internal.h>