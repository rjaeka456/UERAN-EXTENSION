/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_PDUSessionAdmittedAddedAddReqAck_Item_H_
#define	_PDUSessionAdmittedAddedAddReqAck_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_PDUSession-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_PDUSessionResourceSetupResponseInfo_SNterminated;
struct ASN_XNAP_PDUSessionResourceSetupResponseInfo_MNterminated;
struct ASN_XNAP_ProtocolExtensionContainer;

/* PDUSessionAdmittedAddedAddReqAck-Item */
typedef struct ASN_XNAP_PDUSessionAdmittedAddedAddReqAck_Item {
    ASN_XNAP_PDUSession_ID_t	 pduSessionId;
	struct ASN_XNAP_PDUSessionResourceSetupResponseInfo_SNterminated	*sn_terminated	/* OPTIONAL */;
	struct ASN_XNAP_PDUSessionResourceSetupResponseInfo_MNterminated	*mn_terminated	/* OPTIONAL */;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_PDUSessionAdmittedAddedAddReqAck_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionAdmittedAddedAddReqAck_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_PDUSessionAdmittedAddedAddReqAck_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionAdmittedAddedAddReqAck_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionAdmittedAddedAddReqAck_Item_H_ */
#include <asn_internal.h>
