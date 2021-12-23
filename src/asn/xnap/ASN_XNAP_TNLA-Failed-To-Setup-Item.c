/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_TNLA-Failed-To-Setup-Item.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_TNLA_Failed_To_Setup_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_TNLA_Failed_To_Setup_Item, tNLAssociationTransportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CPTransportLayerInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tNLAssociationTransportLayerAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_TNLA_Failed_To_Setup_Item, cause),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Cause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cause"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_TNLA_Failed_To_Setup_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_TNLA_Failed_To_Setup_Item_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_TNLA_Failed_To_Setup_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TNLA_Failed_To_Setup_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tNLAssociationTransportLayerAddress */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cause */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_TNLA_Failed_To_Setup_Item_specs_1 = {
	sizeof(struct ASN_XNAP_TNLA_Failed_To_Setup_Item),
	offsetof(struct ASN_XNAP_TNLA_Failed_To_Setup_Item, _asn_ctx),
	asn_MAP_TNLA_Failed_To_Setup_Item_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_TNLA_Failed_To_Setup_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TNLA_Failed_To_Setup_Item = {
	"TNLA-Failed-To-Setup-Item",
	"TNLA-Failed-To-Setup-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_TNLA_Failed_To_Setup_Item_tags_1,
	sizeof(asn_DEF_TNLA_Failed_To_Setup_Item_tags_1)
		/sizeof(asn_DEF_TNLA_Failed_To_Setup_Item_tags_1[0]), /* 1 */
	asn_DEF_TNLA_Failed_To_Setup_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_TNLA_Failed_To_Setup_Item_tags_1)
		/sizeof(asn_DEF_TNLA_Failed_To_Setup_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TNLA_Failed_To_Setup_Item_1,
	3,	/* Elements count */
	&asn_SPC_TNLA_Failed_To_Setup_Item_specs_1	/* Additional specs */
};

