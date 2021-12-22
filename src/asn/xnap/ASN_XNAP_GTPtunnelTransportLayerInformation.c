/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "GTPtunnelTransportLayerInformation.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_GTPtunnelTransportLayerInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GTPtunnelTransportLayerInformation, tnl_address),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportLayerAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tnl-address"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GTPtunnelTransportLayerInformation, gtp_teid),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GTP_TEID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gtp-teid"
		},
	{ ATF_POINTER, 1, offsetof(struct GTPtunnelTransportLayerInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_GTPtunnelTransportLayerInformation_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_GTPtunnelTransportLayerInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GTPtunnelTransportLayerInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tnl-address */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gtp-teid */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_GTPtunnelTransportLayerInformation_specs_1 = {
	sizeof(struct GTPtunnelTransportLayerInformation),
	offsetof(struct GTPtunnelTransportLayerInformation, _asn_ctx),
	asn_MAP_GTPtunnelTransportLayerInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_GTPtunnelTransportLayerInformation_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GTPtunnelTransportLayerInformation = {
	"GTPtunnelTransportLayerInformation",
	"GTPtunnelTransportLayerInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_GTPtunnelTransportLayerInformation_tags_1,
	sizeof(asn_DEF_GTPtunnelTransportLayerInformation_tags_1)
		/sizeof(asn_DEF_GTPtunnelTransportLayerInformation_tags_1[0]), /* 1 */
	asn_DEF_GTPtunnelTransportLayerInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_GTPtunnelTransportLayerInformation_tags_1)
		/sizeof(asn_DEF_GTPtunnelTransportLayerInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GTPtunnelTransportLayerInformation_1,
	3,	/* Elements count */
	&asn_SPC_GTPtunnelTransportLayerInformation_specs_1	/* Additional specs */
};

