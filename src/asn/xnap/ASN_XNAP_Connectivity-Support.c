/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "Connectivity-Support.h"

#include "ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_eNDC_Support_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_eNDC_Support_value2enum_2[] = {
	{ 0,	9,	"supported" },
	{ 1,	13,	"not-supported" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_eNDC_Support_enum2value_2[] = {
	1,	/* not-supported(1) */
	0	/* supported(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_eNDC_Support_specs_2 = {
	asn_MAP_eNDC_Support_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_eNDC_Support_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eNDC_Support_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eNDC_Support_2 = {
	"eNDC-Support",
	"eNDC-Support",
	&asn_OP_NativeEnumerated,
	asn_DEF_eNDC_Support_tags_2,
	sizeof(asn_DEF_eNDC_Support_tags_2)
		/sizeof(asn_DEF_eNDC_Support_tags_2[0]) - 1, /* 1 */
	asn_DEF_eNDC_Support_tags_2,	/* Same as above */
	sizeof(asn_DEF_eNDC_Support_tags_2)
		/sizeof(asn_DEF_eNDC_Support_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_eNDC_Support_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eNDC_Support_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Connectivity_Support_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Connectivity_Support, eNDC_Support),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eNDC_Support_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eNDC-Support"
		},
	{ ATF_POINTER, 1, offsetof(struct Connectivity_Support, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Connectivity_Support_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_Connectivity_Support_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Connectivity_Support_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eNDC-Support */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Connectivity_Support_specs_1 = {
	sizeof(struct Connectivity_Support),
	offsetof(struct Connectivity_Support, _asn_ctx),
	asn_MAP_Connectivity_Support_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_Connectivity_Support_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Connectivity_Support = {
	"Connectivity-Support",
	"Connectivity-Support",
	&asn_OP_SEQUENCE,
	asn_DEF_Connectivity_Support_tags_1,
	sizeof(asn_DEF_Connectivity_Support_tags_1)
		/sizeof(asn_DEF_Connectivity_Support_tags_1[0]), /* 1 */
	asn_DEF_Connectivity_Support_tags_1,	/* Same as above */
	sizeof(asn_DEF_Connectivity_Support_tags_1)
		/sizeof(asn_DEF_Connectivity_Support_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Connectivity_Support_1,
	2,	/* Elements count */
	&asn_SPC_Connectivity_Support_specs_1	/* Additional specs */
};

