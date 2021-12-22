/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_DRB-List-withCause-Item.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_DRB_List_withCause_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_DRB_List_withCause_Item, drb_id),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_DRB_List_withCause_Item, cause),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Cause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cause"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_DRB_List_withCause_Item, rLC_Mode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLCMode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rLC-Mode"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_DRB_List_withCause_Item, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_DRB_List_withCause_Item_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_DRB_List_withCause_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRB_List_withCause_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drb-id */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cause */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rLC-Mode */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_DRB_List_withCause_Item_specs_1 = {
	sizeof(struct ASN_XNAP_DRB_List_withCause_Item),
	offsetof(struct ASN_XNAP_DRB_List_withCause_Item, _asn_ctx),
	asn_MAP_DRB_List_withCause_Item_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_DRB_List_withCause_Item_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRB_List_withCause_Item = {
	"DRB-List-withCause-Item",
	"DRB-List-withCause-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_DRB_List_withCause_Item_tags_1,
	sizeof(asn_DEF_DRB_List_withCause_Item_tags_1)
		/sizeof(asn_DEF_DRB_List_withCause_Item_tags_1[0]), /* 1 */
	asn_DEF_DRB_List_withCause_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_List_withCause_Item_tags_1)
		/sizeof(asn_DEF_DRB_List_withCause_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRB_List_withCause_Item_1,
	4,	/* Elements count */
	&asn_SPC_DRB_List_withCause_Item_specs_1	/* Additional specs */
};

