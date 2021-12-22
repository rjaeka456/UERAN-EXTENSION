/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "DRBsToBeSetupList-Setup-MNterminated-Item.h"

#include "ULConfiguration.h"
#include "PDCPSNLength.h"
#include "UPTransportParameters.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_DRBsToBeSetupList_Setup_MNterminated_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRBsToBeSetupList_Setup_MNterminated_Item, drb_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRBsToBeSetupList_Setup_MNterminated_Item, mN_UL_PDCP_UP_TNLInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UPTransportParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mN-UL-PDCP-UP-TNLInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRBsToBeSetupList_Setup_MNterminated_Item, rLC_Mode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLCMode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rLC-Mode"
		},
	{ ATF_POINTER, 1, offsetof(struct DRBsToBeSetupList_Setup_MNterminated_Item, uL_Configuration),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ULConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uL-Configuration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRBsToBeSetupList_Setup_MNterminated_Item, dRB_QoS),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QoSFlowLevelQoSParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRB-QoS"
		},
	{ ATF_POINTER, 3, offsetof(struct DRBsToBeSetupList_Setup_MNterminated_Item, pDCP_SNLength),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCPSNLength,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDCP-SNLength"
		},
	{ ATF_POINTER, 2, offsetof(struct DRBsToBeSetupList_Setup_MNterminated_Item, secondary_MN_UL_PDCP_UP_TNLInfo),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UPTransportParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"secondary-MN-UL-PDCP-UP-TNLInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct DRBsToBeSetupList_Setup_MNterminated_Item, duplicationActivation),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DuplicationActivation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"duplicationActivation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRBsToBeSetupList_Setup_MNterminated_Item, qoSFlowsMappedtoDRB_Setup_MNterminated),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QoSFlowsMappedtoDRB_Setup_MNterminated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qoSFlowsMappedtoDRB-Setup-MNterminated"
		},
	{ ATF_POINTER, 1, offsetof(struct DRBsToBeSetupList_Setup_MNterminated_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_DRBsToBeSetupList_Setup_MNterminated_Item_oms_1[] = { 3, 5, 6, 7, 9 };
static const ber_tlv_tag_t asn_DEF_DRBsToBeSetupList_Setup_MNterminated_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRBsToBeSetupList_Setup_MNterminated_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drb-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mN-UL-PDCP-UP-TNLInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rLC-Mode */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uL-Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dRB-QoS */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pDCP-SNLength */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* secondary-MN-UL-PDCP-UP-TNLInfo */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* duplicationActivation */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* qoSFlowsMappedtoDRB-Setup-MNterminated */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_DRBsToBeSetupList_Setup_MNterminated_Item_specs_1 = {
	sizeof(struct DRBsToBeSetupList_Setup_MNterminated_Item),
	offsetof(struct DRBsToBeSetupList_Setup_MNterminated_Item, _asn_ctx),
	asn_MAP_DRBsToBeSetupList_Setup_MNterminated_Item_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_DRBsToBeSetupList_Setup_MNterminated_Item_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRBsToBeSetupList_Setup_MNterminated_Item = {
	"DRBsToBeSetupList-Setup-MNterminated-Item",
	"DRBsToBeSetupList-Setup-MNterminated-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_DRBsToBeSetupList_Setup_MNterminated_Item_tags_1,
	sizeof(asn_DEF_DRBsToBeSetupList_Setup_MNterminated_Item_tags_1)
		/sizeof(asn_DEF_DRBsToBeSetupList_Setup_MNterminated_Item_tags_1[0]), /* 1 */
	asn_DEF_DRBsToBeSetupList_Setup_MNterminated_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRBsToBeSetupList_Setup_MNterminated_Item_tags_1)
		/sizeof(asn_DEF_DRBsToBeSetupList_Setup_MNterminated_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRBsToBeSetupList_Setup_MNterminated_Item_1,
	10,	/* Elements count */
	&asn_SPC_DRBsToBeSetupList_Setup_MNterminated_Item_specs_1	/* Additional specs */
};

