/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_DRBsToBeModified_List_ModRqd_MNterminated_Item_H_
#define	_DRBsToBeModified_List_ModRqd_MNterminated_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DRB-ID.h"
#include "UPTransportLayerInformation.h"
#include "LCID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UPTransportLayerInformation;
struct RLC_Status;
struct ProtocolExtensionContainer;

/* DRBsToBeModified-List-ModRqd-MNterminated-Item */
typedef struct DRBsToBeModified_List_ModRqd_MNterminated_Item {
	DRB_ID_t	 drb_ID;
	UPTransportLayerInformation_t	 sN_DL_SCG_UP_TNLInfo;
	struct UPTransportLayerInformation	*secondary_SN_DL_SCG_UP_TNLInfo	/* OPTIONAL */;
	LCID_t	*lCID	/* OPTIONAL */;
	struct RLC_Status	*rlc_status	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRBsToBeModified_List_ModRqd_MNterminated_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRBsToBeModified_List_ModRqd_MNterminated_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_DRBsToBeModified_List_ModRqd_MNterminated_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_DRBsToBeModified_List_ModRqd_MNterminated_Item_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _DRBsToBeModified_List_ModRqd_MNterminated_Item_H_ */
#include <asn_internal.h>
