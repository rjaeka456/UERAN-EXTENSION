/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_PDUSessionReleasedSNModConfirm.h"

#include "ASN_XNAP_PDUSession-List-withDataForwardingFromTarget.h"
#include "ASN_XNAP_PDUSession-List.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_PDUSessionReleasedSNModConfirm_1[] = {
	{ ATF_POINTER, 3, offsetof(struct PDUSessionReleasedSNModConfirm, sn_terminated),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDUSession_List_withDataForwardingFromTarget,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sn-terminated"
		},
	{ ATF_POINTER, 2, offsetof(struct PDUSessionReleasedSNModConfirm, mn_terminated),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDUSession_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mn-terminated"
		},
	{ ATF_POINTER, 1, offsetof(struct PDUSessionReleasedSNModConfirm, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_PDUSessionReleasedSNModConfirm_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_PDUSessionReleasedSNModConfirm_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDUSessionReleasedSNModConfirm_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sn-terminated */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mn-terminated */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extension */
};
static asn_SEQUENCE_specifics_t asn_SPC_PDUSessionReleasedSNModConfirm_specs_1 = {
	sizeof(struct PDUSessionReleasedSNModConfirm),
	offsetof(struct PDUSessionReleasedSNModConfirm, _asn_ctx),
	asn_MAP_PDUSessionReleasedSNModConfirm_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PDUSessionReleasedSNModConfirm_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDUSessionReleasedSNModConfirm = {
	"PDUSessionReleasedSNModConfirm",
	"PDUSessionReleasedSNModConfirm",
	&asn_OP_SEQUENCE,
	asn_DEF_PDUSessionReleasedSNModConfirm_tags_1,
	sizeof(asn_DEF_PDUSessionReleasedSNModConfirm_tags_1)
		/sizeof(asn_DEF_PDUSessionReleasedSNModConfirm_tags_1[0]), /* 1 */
	asn_DEF_PDUSessionReleasedSNModConfirm_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDUSessionReleasedSNModConfirm_tags_1)
		/sizeof(asn_DEF_PDUSessionReleasedSNModConfirm_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDUSessionReleasedSNModConfirm_1,
	3,	/* Elements count */
	&asn_SPC_PDUSessionReleasedSNModConfirm_specs_1	/* Additional specs */
};

