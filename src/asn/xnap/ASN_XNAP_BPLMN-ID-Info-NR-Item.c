/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_BPLMN-ID-Info-NR-Item.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_BPLMN_ID_Info_NR_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BPLMN_ID_Info_NR_Item, broadcastPLMNs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BroadcastPLMNs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"broadcastPLMNs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BPLMN_ID_Info_NR_Item, tac),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tac"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BPLMN_ID_Info_NR_Item, nr_CI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_Cell_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-CI"
		},
	{ ATF_POINTER, 2, offsetof(struct BPLMN_ID_Info_NR_Item, ranac),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ranac"
		},
	{ ATF_POINTER, 1, offsetof(struct BPLMN_ID_Info_NR_Item, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_BPLMN_ID_Info_NR_Item_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_BPLMN_ID_Info_NR_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BPLMN_ID_Info_NR_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* broadcastPLMNs */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tac */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nr-CI */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ranac */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_BPLMN_ID_Info_NR_Item_specs_1 = {
	sizeof(struct BPLMN_ID_Info_NR_Item),
	offsetof(struct BPLMN_ID_Info_NR_Item, _asn_ctx),
	asn_MAP_BPLMN_ID_Info_NR_Item_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_BPLMN_ID_Info_NR_Item_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BPLMN_ID_Info_NR_Item = {
	"BPLMN-ID-Info-NR-Item",
	"BPLMN-ID-Info-NR-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_BPLMN_ID_Info_NR_Item_tags_1,
	sizeof(asn_DEF_BPLMN_ID_Info_NR_Item_tags_1)
		/sizeof(asn_DEF_BPLMN_ID_Info_NR_Item_tags_1[0]), /* 1 */
	asn_DEF_BPLMN_ID_Info_NR_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_BPLMN_ID_Info_NR_Item_tags_1)
		/sizeof(asn_DEF_BPLMN_ID_Info_NR_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BPLMN_ID_Info_NR_Item_1,
	5,	/* Elements count */
	&asn_SPC_BPLMN_ID_Info_NR_Item_specs_1	/* Additional specs */
};
