/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_PDUSessionsToBeAdded-SNModRequest-Item.h"

#include "ASN_XNAP_PDUSessionAggregateMaximumBitRate.h"
#include "ASN_XNAP_PDUSessionResourceSetupInfo-SNterminated.h"
#include "ASN_XNAP_PDUSessionResourceSetupInfo-MNterminated.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_PDUSessionsToBeAdded_SNModRequest_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_PDUSessionsToBeAdded_SNModRequest_Item, pduSessionId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDUSession_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pduSessionId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_PDUSessionsToBeAdded_SNModRequest_Item, s_NSSAI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S_NSSAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-NSSAI"
		},
	{ ATF_POINTER, 4, offsetof(struct ASN_XNAP_PDUSessionsToBeAdded_SNModRequest_Item, sN_PDUSessionAMBR),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDUSessionAggregateMaximumBitRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sN-PDUSessionAMBR"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_PDUSessionsToBeAdded_SNModRequest_Item, sn_terminated),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDUSessionResourceSetupInfo_SNterminated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sn-terminated"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_PDUSessionsToBeAdded_SNModRequest_Item, mn_terminated),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDUSessionResourceSetupInfo_MNterminated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mn-terminated"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_PDUSessionsToBeAdded_SNModRequest_Item, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_PDUSessionsToBeAdded_SNModRequest_Item_oms_1[] = { 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_PDUSessionsToBeAdded_SNModRequest_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDUSessionsToBeAdded_SNModRequest_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pduSessionId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* s-NSSAI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sN-PDUSessionAMBR */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sn-terminated */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mn-terminated */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_PDUSessionsToBeAdded_SNModRequest_Item_specs_1 = {
	sizeof(struct ASN_XNAP_PDUSessionsToBeAdded_SNModRequest_Item),
	offsetof(struct ASN_XNAP_PDUSessionsToBeAdded_SNModRequest_Item, _asn_ctx),
	asn_MAP_PDUSessionsToBeAdded_SNModRequest_Item_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_PDUSessionsToBeAdded_SNModRequest_Item_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDUSessionsToBeAdded_SNModRequest_Item = {
	"PDUSessionsToBeAdded-SNModRequest-Item",
	"PDUSessionsToBeAdded-SNModRequest-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_PDUSessionsToBeAdded_SNModRequest_Item_tags_1,
	sizeof(asn_DEF_PDUSessionsToBeAdded_SNModRequest_Item_tags_1)
		/sizeof(asn_DEF_PDUSessionsToBeAdded_SNModRequest_Item_tags_1[0]), /* 1 */
	asn_DEF_PDUSessionsToBeAdded_SNModRequest_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDUSessionsToBeAdded_SNModRequest_Item_tags_1)
		/sizeof(asn_DEF_PDUSessionsToBeAdded_SNModRequest_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDUSessionsToBeAdded_SNModRequest_Item_1,
	6,	/* Elements count */
	&asn_SPC_PDUSessionsToBeAdded_SNModRequest_Item_specs_1	/* Additional specs */
};

