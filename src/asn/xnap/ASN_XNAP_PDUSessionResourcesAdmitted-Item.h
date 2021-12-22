/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_PDUSessionResourcesAdmitted_Item_H_
#define	_PDUSessionResourcesAdmitted_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDUSession-ID.h"
#include "PDUSessionResourceAdmittedInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PDUSessionResourcesAdmitted-Item */
typedef struct PDUSessionResourcesAdmitted_Item {
	PDUSession_ID_t	 pduSessionId;
	PDUSessionResourceAdmittedInfo_t	 pduSessionResourceAdmittedInfo;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourcesAdmitted_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourcesAdmitted_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_PDUSessionResourcesAdmitted_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionResourcesAdmitted_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourcesAdmitted_Item_H_ */
#include <asn_internal.h>
