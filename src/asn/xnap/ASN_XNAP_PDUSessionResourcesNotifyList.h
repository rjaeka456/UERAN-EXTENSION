/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_PDUSessionResourcesNotifyList_H_
#define	_PDUSessionResourcesNotifyList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDUSessionResourcesNotify_Item;

/* PDUSessionResourcesNotifyList */
typedef struct PDUSessionResourcesNotifyList {
	A_SEQUENCE_OF(struct PDUSessionResourcesNotify_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourcesNotifyList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourcesNotifyList;

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourcesNotifyList_H_ */
#include <asn_internal.h>
