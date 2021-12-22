/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "UEContextInfoHORequest.h"

#include "LocationReportingInformation.h"
#include "MobilityRestrictionList.h"
#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_UEContextInfoHORequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UEContextInfoHORequest, ng_c_UE_reference),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AMF_UE_NGAP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-c-UE-reference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UEContextInfoHORequest, cp_TNL_info_source),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CPTransportLayerInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cp-TNL-info-source"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UEContextInfoHORequest, ueSecurityCapabilities),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UESecurityCapabilities,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueSecurityCapabilities"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UEContextInfoHORequest, securityInformation),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AS_SecurityInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct UEContextInfoHORequest, indexToRatFrequencySelectionPriority),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RFSP_Index,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"indexToRatFrequencySelectionPriority"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UEContextInfoHORequest, ue_AMBR),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UEAggregateMaximumBitRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-AMBR"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UEContextInfoHORequest, pduSessionResourcesToBeSetup_List),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDUSessionResourcesToBeSetup_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pduSessionResourcesToBeSetup-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UEContextInfoHORequest, rrc_Context),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrc-Context"
		},
	{ ATF_POINTER, 3, offsetof(struct UEContextInfoHORequest, locationReportingInformation),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationReportingInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"locationReportingInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct UEContextInfoHORequest, mrl),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MobilityRestrictionList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mrl"
		},
	{ ATF_POINTER, 1, offsetof(struct UEContextInfoHORequest, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_UEContextInfoHORequest_oms_1[] = { 4, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_UEContextInfoHORequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEContextInfoHORequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ng-c-UE-reference */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cp-TNL-info-source */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ueSecurityCapabilities */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* securityInformation */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* indexToRatFrequencySelectionPriority */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ue-AMBR */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pduSessionResourcesToBeSetup-List */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rrc-Context */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* locationReportingInformation */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* mrl */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_UEContextInfoHORequest_specs_1 = {
	sizeof(struct UEContextInfoHORequest),
	offsetof(struct UEContextInfoHORequest, _asn_ctx),
	asn_MAP_UEContextInfoHORequest_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_UEContextInfoHORequest_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	11,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEContextInfoHORequest = {
	"UEContextInfoHORequest",
	"UEContextInfoHORequest",
	&asn_OP_SEQUENCE,
	asn_DEF_UEContextInfoHORequest_tags_1,
	sizeof(asn_DEF_UEContextInfoHORequest_tags_1)
		/sizeof(asn_DEF_UEContextInfoHORequest_tags_1[0]), /* 1 */
	asn_DEF_UEContextInfoHORequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEContextInfoHORequest_tags_1)
		/sizeof(asn_DEF_UEContextInfoHORequest_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UEContextInfoHORequest_1,
	11,	/* Elements count */
	&asn_SPC_UEContextInfoHORequest_specs_1	/* Additional specs */
};

