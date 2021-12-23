/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_NeighbourInformation-NR-Item.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NeighbourInformation_NR_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NeighbourInformation_NR_Item, nr_PCI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-PCI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NeighbourInformation_NR_Item, nr_cgi),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-cgi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NeighbourInformation_NR_Item, tac),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tac"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_NeighbourInformation_NR_Item, ranac),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ranac"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NeighbourInformation_NR_Item, nr_mode_info),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NeighbourInformation_NR_ModeInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-mode-info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NeighbourInformation_NR_Item, connectivitySupport),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Connectivity_Support,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"connectivitySupport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NeighbourInformation_NR_Item, measurementTimingConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementTimingConfiguration"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_NeighbourInformation_NR_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_NeighbourInformation_NR_Item_oms_1[] = { 3, 7 };
static const ber_tlv_tag_t asn_DEF_NeighbourInformation_NR_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NeighbourInformation_NR_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-PCI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-cgi */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tac */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ranac */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* nr-mode-info */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* connectivitySupport */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* measurementTimingConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NeighbourInformation_NR_Item_specs_1 = {
	sizeof(struct ASN_XNAP_NeighbourInformation_NR_Item),
	offsetof(struct ASN_XNAP_NeighbourInformation_NR_Item, _asn_ctx),
	asn_MAP_NeighbourInformation_NR_Item_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_NeighbourInformation_NR_Item_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NeighbourInformation_NR_Item = {
	"NeighbourInformation-NR-Item",
	"NeighbourInformation-NR-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_NeighbourInformation_NR_Item_tags_1,
	sizeof(asn_DEF_NeighbourInformation_NR_Item_tags_1)
		/sizeof(asn_DEF_NeighbourInformation_NR_Item_tags_1[0]), /* 1 */
	asn_DEF_NeighbourInformation_NR_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_NeighbourInformation_NR_Item_tags_1)
		/sizeof(asn_DEF_NeighbourInformation_NR_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NeighbourInformation_NR_Item_1,
	8,	/* Elements count */
	&asn_SPC_NeighbourInformation_NR_Item_specs_1	/* Additional specs */
};

