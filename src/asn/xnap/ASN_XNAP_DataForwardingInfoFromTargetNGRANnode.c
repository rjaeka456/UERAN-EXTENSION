/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_DataForwardingInfoFromTargetNGRANnode.h"

#include "ASN_XNAP_UPTransportLayerInformation.h"
#include "ASN_XNAP_DataForwardingResponseDRBItemList.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_DataForwardingInfoFromTargetNGRANnode_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DataForwardingInfoFromTargetNGRANnode, qosFlowsAcceptedForDataForwarding_List),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QoSFLowsAcceptedToBeForwarded_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qosFlowsAcceptedForDataForwarding-List"
		},
	{ ATF_POINTER, 4, offsetof(struct DataForwardingInfoFromTargetNGRANnode, pduSessionLevelDLDataForwardingInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UPTransportLayerInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pduSessionLevelDLDataForwardingInfo"
		},
	{ ATF_POINTER, 3, offsetof(struct DataForwardingInfoFromTargetNGRANnode, pduSessionLevelULDataForwardingInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UPTransportLayerInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pduSessionLevelULDataForwardingInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct DataForwardingInfoFromTargetNGRANnode, dataForwardingResponseDRBItemList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DataForwardingResponseDRBItemList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataForwardingResponseDRBItemList"
		},
	{ ATF_POINTER, 1, offsetof(struct DataForwardingInfoFromTargetNGRANnode, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_DataForwardingInfoFromTargetNGRANnode_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_DataForwardingInfoFromTargetNGRANnode_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DataForwardingInfoFromTargetNGRANnode_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qosFlowsAcceptedForDataForwarding-List */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pduSessionLevelDLDataForwardingInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pduSessionLevelULDataForwardingInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dataForwardingResponseDRBItemList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_DataForwardingInfoFromTargetNGRANnode_specs_1 = {
	sizeof(struct DataForwardingInfoFromTargetNGRANnode),
	offsetof(struct DataForwardingInfoFromTargetNGRANnode, _asn_ctx),
	asn_MAP_DataForwardingInfoFromTargetNGRANnode_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_DataForwardingInfoFromTargetNGRANnode_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DataForwardingInfoFromTargetNGRANnode = {
	"DataForwardingInfoFromTargetNGRANnode",
	"DataForwardingInfoFromTargetNGRANnode",
	&asn_OP_SEQUENCE,
	asn_DEF_DataForwardingInfoFromTargetNGRANnode_tags_1,
	sizeof(asn_DEF_DataForwardingInfoFromTargetNGRANnode_tags_1)
		/sizeof(asn_DEF_DataForwardingInfoFromTargetNGRANnode_tags_1[0]), /* 1 */
	asn_DEF_DataForwardingInfoFromTargetNGRANnode_tags_1,	/* Same as above */
	sizeof(asn_DEF_DataForwardingInfoFromTargetNGRANnode_tags_1)
		/sizeof(asn_DEF_DataForwardingInfoFromTargetNGRANnode_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DataForwardingInfoFromTargetNGRANnode_1,
	5,	/* Elements count */
	&asn_SPC_DataForwardingInfoFromTargetNGRANnode_specs_1	/* Additional specs */
};

