/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_PDUSessionAdmittedToBeModifiedSNModResponse_H_
#define	_PDUSessionAdmittedToBeModifiedSNModResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDUSessionAdmittedToBeModifiedSNModResponse_Item;

/* PDUSessionAdmittedToBeModifiedSNModResponse */
typedef struct PDUSessionAdmittedToBeModifiedSNModResponse {
	A_SEQUENCE_OF(struct PDUSessionAdmittedToBeModifiedSNModResponse_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionAdmittedToBeModifiedSNModResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionAdmittedToBeModifiedSNModResponse;
extern asn_SET_OF_specifics_t asn_SPC_PDUSessionAdmittedToBeModifiedSNModResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionAdmittedToBeModifiedSNModResponse_1[1];
extern asn_per_constraints_t asn_PER_type_PDUSessionAdmittedToBeModifiedSNModResponse_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionAdmittedToBeModifiedSNModResponse_H_ */
#include <asn_internal.h>
