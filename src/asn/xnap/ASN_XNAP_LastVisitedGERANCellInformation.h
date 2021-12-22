/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_LastVisitedGERANCellInformation_H_
#define	_LastVisitedGERANCellInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LastVisitedGERANCellInformation */
typedef OCTET_STRING_t	 LastVisitedGERANCellInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LastVisitedGERANCellInformation;
asn_struct_free_f LastVisitedGERANCellInformation_free;
asn_struct_print_f LastVisitedGERANCellInformation_print;
asn_constr_check_f LastVisitedGERANCellInformation_constraint;
ber_type_decoder_f LastVisitedGERANCellInformation_decode_ber;
der_type_encoder_f LastVisitedGERANCellInformation_encode_der;
xer_type_decoder_f LastVisitedGERANCellInformation_decode_xer;
xer_type_encoder_f LastVisitedGERANCellInformation_encode_xer;
per_type_decoder_f LastVisitedGERANCellInformation_decode_uper;
per_type_encoder_f LastVisitedGERANCellInformation_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LastVisitedGERANCellInformation_H_ */
#include <asn_internal.h>
