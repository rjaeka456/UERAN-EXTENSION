/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_DRBsAdmittedList-SetupResponse-MNterminated-Item.h"

#include "ASN_XNAP_UPTransportParameters.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_DRBsAdmittedList_SetupResponse_MNterminated_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_DRBsAdmittedList_SetupResponse_MNterminated_Item, drb_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_DRBsAdmittedList_SetupResponse_MNterminated_Item, sN_DL_SCG_UP_TNLInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UPTransportParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sN-DL-SCG-UP-TNLInfo"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_DRBsAdmittedList_SetupResponse_MNterminated_Item, secondary_SN_DL_SCG_UP_TNLInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UPTransportParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"secondary-SN-DL-SCG-UP-TNLInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_DRBsAdmittedList_SetupResponse_MNterminated_Item, lCID),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LCID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lCID"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_DRBsAdmittedList_SetupResponse_MNterminated_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_DRBsAdmittedList_SetupResponse_MNterminated_Item_oms_1[] = { 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_DRBsAdmittedList_SetupResponse_MNterminated_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRBsAdmittedList_SetupResponse_MNterminated_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drb-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sN-DL-SCG-UP-TNLInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* secondary-SN-DL-SCG-UP-TNLInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lCID */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_DRBsAdmittedList_SetupResponse_MNterminated_Item_specs_1 = {
	sizeof(struct ASN_XNAP_DRBsAdmittedList_SetupResponse_MNterminated_Item),
	offsetof(struct ASN_XNAP_DRBsAdmittedList_SetupResponse_MNterminated_Item, _asn_ctx),
	asn_MAP_DRBsAdmittedList_SetupResponse_MNterminated_Item_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_DRBsAdmittedList_SetupResponse_MNterminated_Item_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRBsAdmittedList_SetupResponse_MNterminated_Item = {
	"DRBsAdmittedList-SetupResponse-MNterminated-Item",
	"DRBsAdmittedList-SetupResponse-MNterminated-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_DRBsAdmittedList_SetupResponse_MNterminated_Item_tags_1,
	sizeof(asn_DEF_DRBsAdmittedList_SetupResponse_MNterminated_Item_tags_1)
		/sizeof(asn_DEF_DRBsAdmittedList_SetupResponse_MNterminated_Item_tags_1[0]), /* 1 */
	asn_DEF_DRBsAdmittedList_SetupResponse_MNterminated_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRBsAdmittedList_SetupResponse_MNterminated_Item_tags_1)
		/sizeof(asn_DEF_DRBsAdmittedList_SetupResponse_MNterminated_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRBsAdmittedList_SetupResponse_MNterminated_Item_1,
	5,	/* Elements count */
	&asn_SPC_DRBsAdmittedList_SetupResponse_MNterminated_Item_specs_1	/* Additional specs */
};
