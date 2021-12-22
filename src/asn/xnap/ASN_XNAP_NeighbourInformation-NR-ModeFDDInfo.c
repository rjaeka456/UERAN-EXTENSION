/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "NeighbourInformation-NR-ModeFDDInfo.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NeighbourInformation_NR_ModeFDDInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NeighbourInformation_NR_ModeFDDInfo, ul_NR_FreqInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRFrequencyInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-NR-FreqInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighbourInformation_NR_ModeFDDInfo, dl_NR_FequInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRFrequencyInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-NR-FequInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct NeighbourInformation_NR_ModeFDDInfo, ie_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ie-Extensions"
		},
};
static const int asn_MAP_NeighbourInformation_NR_ModeFDDInfo_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_NeighbourInformation_NR_ModeFDDInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NeighbourInformation_NR_ModeFDDInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-NR-FreqInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-NR-FequInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ie-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NeighbourInformation_NR_ModeFDDInfo_specs_1 = {
	sizeof(struct NeighbourInformation_NR_ModeFDDInfo),
	offsetof(struct NeighbourInformation_NR_ModeFDDInfo, _asn_ctx),
	asn_MAP_NeighbourInformation_NR_ModeFDDInfo_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NeighbourInformation_NR_ModeFDDInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NeighbourInformation_NR_ModeFDDInfo = {
	"NeighbourInformation-NR-ModeFDDInfo",
	"NeighbourInformation-NR-ModeFDDInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_NeighbourInformation_NR_ModeFDDInfo_tags_1,
	sizeof(asn_DEF_NeighbourInformation_NR_ModeFDDInfo_tags_1)
		/sizeof(asn_DEF_NeighbourInformation_NR_ModeFDDInfo_tags_1[0]), /* 1 */
	asn_DEF_NeighbourInformation_NR_ModeFDDInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_NeighbourInformation_NR_ModeFDDInfo_tags_1)
		/sizeof(asn_DEF_NeighbourInformation_NR_ModeFDDInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NeighbourInformation_NR_ModeFDDInfo_1,
	3,	/* Elements count */
	&asn_SPC_NeighbourInformation_NR_ModeFDDInfo_specs_1	/* Additional specs */
};

