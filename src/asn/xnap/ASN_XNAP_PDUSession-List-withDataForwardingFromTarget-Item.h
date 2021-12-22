/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_PDUSession_List_withDataForwardingFromTarget_Item_H_
#define	_PDUSession_List_withDataForwardingFromTarget_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDUSession-ID.h"
#include "DataForwardingInfoFromTargetNGRANnode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PDUSession-List-withDataForwardingFromTarget-Item */
typedef struct PDUSession_List_withDataForwardingFromTarget_Item {
	PDUSession_ID_t	 pduSessionId;
	DataForwardingInfoFromTargetNGRANnode_t	 dataforwardinginfoTarget;
	struct ProtocolExtensionContainer	*iE_Extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSession_List_withDataForwardingFromTarget_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSession_List_withDataForwardingFromTarget_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_PDUSession_List_withDataForwardingFromTarget_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSession_List_withDataForwardingFromTarget_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSession_List_withDataForwardingFromTarget_Item_H_ */
#include <asn_internal.h>
