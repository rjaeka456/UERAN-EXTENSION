/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-16.7.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_XnSetupRequest.h"

asn_TYPE_member_t asn_MBR_XnSetupRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct XnSetupRequest, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Container_5952P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_XnSetupRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_XnSetupRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_XnSetupRequest_specs_1 = {
	sizeof(struct XnSetupRequest),
	offsetof(struct XnSetupRequest, _asn_ctx),
	asn_MAP_XnSetupRequest_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_XnSetupRequest = {
	"XnSetupRequest",
	"XnSetupRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_XnSetupRequest_tags_1,
	sizeof(asn_DEF_XnSetupRequest_tags_1)
		/sizeof(asn_DEF_XnSetupRequest_tags_1[0]), /* 1 */
	asn_DEF_XnSetupRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_XnSetupRequest_tags_1)
		/sizeof(asn_DEF_XnSetupRequest_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_XnSetupRequest_1,
	1,	/* Elements count */
	&asn_SPC_XnSetupRequest_specs_1	/* Additional specs */
};

