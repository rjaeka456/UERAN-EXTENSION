/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_ServedCellInformation-E-UTRA-TDDInfo.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_subframeAssignmnet_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  6 }	/* (0..6,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_subframeAssignmnet_value2enum_4[] = {
	{ 0,	3,	"sa0" },
	{ 1,	3,	"sa1" },
	{ 2,	3,	"sa2" },
	{ 3,	3,	"sa3" },
	{ 4,	3,	"sa4" },
	{ 5,	3,	"sa5" },
	{ 6,	3,	"sa6" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_subframeAssignmnet_enum2value_4[] = {
	0,	/* sa0(0) */
	1,	/* sa1(1) */
	2,	/* sa2(2) */
	3,	/* sa3(3) */
	4,	/* sa4(4) */
	5,	/* sa5(5) */
	6	/* sa6(6) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_subframeAssignmnet_specs_4 = {
	asn_MAP_subframeAssignmnet_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_subframeAssignmnet_enum2value_4,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	8,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_subframeAssignmnet_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subframeAssignmnet_4 = {
	"subframeAssignmnet",
	"subframeAssignmnet",
	&asn_OP_NativeEnumerated,
	asn_DEF_subframeAssignmnet_tags_4,
	sizeof(asn_DEF_subframeAssignmnet_tags_4)
		/sizeof(asn_DEF_subframeAssignmnet_tags_4[0]) - 1, /* 1 */
	asn_DEF_subframeAssignmnet_tags_4,	/* Same as above */
	sizeof(asn_DEF_subframeAssignmnet_tags_4)
		/sizeof(asn_DEF_subframeAssignmnet_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_subframeAssignmnet_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subframeAssignmnet_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ServedCellInformation_E_UTRA_TDDInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA_TDDInfo, earfcn),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_E_UTRAARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"earfcn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA_TDDInfo, e_utraTxBW),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_E_UTRATransmissionBandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-utraTxBW"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA_TDDInfo, subframeAssignmnet),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subframeAssignmnet_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeAssignmnet"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA_TDDInfo, specialSubframeInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpecialSubframeInfo_E_UTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"specialSubframeInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA_TDDInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ServedCellInformation_E_UTRA_TDDInfo_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_ServedCellInformation_E_UTRA_TDDInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ServedCellInformation_E_UTRA_TDDInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* earfcn */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e-utraTxBW */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* subframeAssignmnet */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* specialSubframeInfo */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ServedCellInformation_E_UTRA_TDDInfo_specs_1 = {
	sizeof(struct ASN_XNAP_ServedCellInformation_E_UTRA_TDDInfo),
	offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA_TDDInfo, _asn_ctx),
	asn_MAP_ServedCellInformation_E_UTRA_TDDInfo_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_ServedCellInformation_E_UTRA_TDDInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ServedCellInformation_E_UTRA_TDDInfo = {
	"ServedCellInformation-E-UTRA-TDDInfo",
	"ServedCellInformation-E-UTRA-TDDInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_ServedCellInformation_E_UTRA_TDDInfo_tags_1,
	sizeof(asn_DEF_ServedCellInformation_E_UTRA_TDDInfo_tags_1)
		/sizeof(asn_DEF_ServedCellInformation_E_UTRA_TDDInfo_tags_1[0]), /* 1 */
	asn_DEF_ServedCellInformation_E_UTRA_TDDInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_ServedCellInformation_E_UTRA_TDDInfo_tags_1)
		/sizeof(asn_DEF_ServedCellInformation_E_UTRA_TDDInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ServedCellInformation_E_UTRA_TDDInfo_1,
	5,	/* Elements count */
	&asn_SPC_ServedCellInformation_E_UTRA_TDDInfo_specs_1	/* Additional specs */
};

