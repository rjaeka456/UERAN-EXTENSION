/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "Dynamic5QIDescriptor.h"

#include "ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_delayCritical_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_delayCritical_value2enum_6[] = {
	{ 0,	14,	"delay-critical" },
	{ 1,	18,	"non-delay-critical" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_delayCritical_enum2value_6[] = {
	0,	/* delay-critical(0) */
	1	/* non-delay-critical(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_delayCritical_specs_6 = {
	asn_MAP_delayCritical_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_delayCritical_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_delayCritical_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_delayCritical_6 = {
	"delayCritical",
	"delayCritical",
	&asn_OP_NativeEnumerated,
	asn_DEF_delayCritical_tags_6,
	sizeof(asn_DEF_delayCritical_tags_6)
		/sizeof(asn_DEF_delayCritical_tags_6[0]) - 1, /* 1 */
	asn_DEF_delayCritical_tags_6,	/* Same as above */
	sizeof(asn_DEF_delayCritical_tags_6)
		/sizeof(asn_DEF_delayCritical_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_delayCritical_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_delayCritical_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Dynamic5QIDescriptor_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Dynamic5QIDescriptor, priorityLevelQoS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PriorityLevelQoS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"priorityLevelQoS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Dynamic5QIDescriptor, packetDelayBudget),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PacketDelayBudget,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"packetDelayBudget"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Dynamic5QIDescriptor, packetErrorRate),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PacketErrorRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"packetErrorRate"
		},
	{ ATF_POINTER, 5, offsetof(struct Dynamic5QIDescriptor, fiveQI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FiveQI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fiveQI"
		},
	{ ATF_POINTER, 4, offsetof(struct Dynamic5QIDescriptor, delayCritical),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_delayCritical_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"delayCritical"
		},
	{ ATF_POINTER, 3, offsetof(struct Dynamic5QIDescriptor, averagingWindow),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AveragingWindow,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"averagingWindow"
		},
	{ ATF_POINTER, 2, offsetof(struct Dynamic5QIDescriptor, maximumDataBurstVolume),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaximumDataBurstVolume,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maximumDataBurstVolume"
		},
	{ ATF_POINTER, 1, offsetof(struct Dynamic5QIDescriptor, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_Dynamic5QIDescriptor_oms_1[] = { 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_Dynamic5QIDescriptor_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Dynamic5QIDescriptor_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* priorityLevelQoS */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* packetDelayBudget */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* packetErrorRate */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* fiveQI */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* delayCritical */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* averagingWindow */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* maximumDataBurstVolume */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_Dynamic5QIDescriptor_specs_1 = {
	sizeof(struct Dynamic5QIDescriptor),
	offsetof(struct Dynamic5QIDescriptor, _asn_ctx),
	asn_MAP_Dynamic5QIDescriptor_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_Dynamic5QIDescriptor_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Dynamic5QIDescriptor = {
	"Dynamic5QIDescriptor",
	"Dynamic5QIDescriptor",
	&asn_OP_SEQUENCE,
	asn_DEF_Dynamic5QIDescriptor_tags_1,
	sizeof(asn_DEF_Dynamic5QIDescriptor_tags_1)
		/sizeof(asn_DEF_Dynamic5QIDescriptor_tags_1[0]), /* 1 */
	asn_DEF_Dynamic5QIDescriptor_tags_1,	/* Same as above */
	sizeof(asn_DEF_Dynamic5QIDescriptor_tags_1)
		/sizeof(asn_DEF_Dynamic5QIDescriptor_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Dynamic5QIDescriptor_1,
	8,	/* Elements count */
	&asn_SPC_Dynamic5QIDescriptor_specs_1	/* Additional specs */
};

