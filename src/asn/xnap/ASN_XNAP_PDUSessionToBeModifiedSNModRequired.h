/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_PDUSessionToBeModifiedSNModRequired_H_
#define	_PDUSessionToBeModifiedSNModRequired_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDUSessionToBeModifiedSNModRequired_Item;

/* PDUSessionToBeModifiedSNModRequired */
typedef struct PDUSessionToBeModifiedSNModRequired {
	A_SEQUENCE_OF(struct PDUSessionToBeModifiedSNModRequired_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionToBeModifiedSNModRequired_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionToBeModifiedSNModRequired;

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionToBeModifiedSNModRequired_H_ */
#include <asn_internal.h>