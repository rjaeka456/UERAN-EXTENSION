/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_PDUSessionNotAdmitted-SNModResponse.h"

#include "ASN_XNAP_PDUSession-List.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_PDUSessionNotAdmitted_SNModResponse_1[] = {
	{ ATF_POINTER, 2, offsetof(struct PDUSessionNotAdmitted_SNModResponse, pdu_Session_List),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDUSession_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdu-Session-List"
		},
	{ ATF_POINTER, 1, offsetof(struct PDUSessionNotAdmitted_SNModResponse, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_PDUSessionNotAdmitted_SNModResponse_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_PDUSessionNotAdmitted_SNModResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDUSessionNotAdmitted_SNModResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdu-Session-List */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extension */
};
static asn_SEQUENCE_specifics_t asn_SPC_PDUSessionNotAdmitted_SNModResponse_specs_1 = {
	sizeof(struct PDUSessionNotAdmitted_SNModResponse),
	offsetof(struct PDUSessionNotAdmitted_SNModResponse, _asn_ctx),
	asn_MAP_PDUSessionNotAdmitted_SNModResponse_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PDUSessionNotAdmitted_SNModResponse_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDUSessionNotAdmitted_SNModResponse = {
	"PDUSessionNotAdmitted-SNModResponse",
	"PDUSessionNotAdmitted-SNModResponse",
	&asn_OP_SEQUENCE,
	asn_DEF_PDUSessionNotAdmitted_SNModResponse_tags_1,
	sizeof(asn_DEF_PDUSessionNotAdmitted_SNModResponse_tags_1)
		/sizeof(asn_DEF_PDUSessionNotAdmitted_SNModResponse_tags_1[0]), /* 1 */
	asn_DEF_PDUSessionNotAdmitted_SNModResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDUSessionNotAdmitted_SNModResponse_tags_1)
		/sizeof(asn_DEF_PDUSessionNotAdmitted_SNModResponse_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDUSessionNotAdmitted_SNModResponse_1,
	2,	/* Elements count */
	&asn_SPC_PDUSessionNotAdmitted_SNModResponse_specs_1	/* Additional specs */
};

