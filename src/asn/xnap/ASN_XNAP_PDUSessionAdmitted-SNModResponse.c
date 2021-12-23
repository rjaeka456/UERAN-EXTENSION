/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_PDUSessionAdmitted-SNModResponse.h"

#include "ASN_XNAP_PDUSessionAdmittedToBeAddedSNModResponse.h"
#include "ASN_XNAP_PDUSessionAdmittedToBeModifiedSNModResponse.h"
#include "ASN_XNAP_PDUSessionAdmittedToBeReleasedSNModResponse.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_PDUSessionAdmitted_SNModResponse_1[] = {
	{ ATF_POINTER, 4, offsetof(struct PDUSessionAdmitted_SNModResponse, pduSessionResourcesAdmittedToBeAdded),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDUSessionAdmittedToBeAddedSNModResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pduSessionResourcesAdmittedToBeAdded"
		},
	{ ATF_POINTER, 3, offsetof(struct PDUSessionAdmitted_SNModResponse, pduSessionResourcesAdmittedToBeModified),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDUSessionAdmittedToBeModifiedSNModResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pduSessionResourcesAdmittedToBeModified"
		},
	{ ATF_POINTER, 2, offsetof(struct PDUSessionAdmitted_SNModResponse, pduSessionResourcesAdmittedToBeReleased),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDUSessionAdmittedToBeReleasedSNModResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pduSessionResourcesAdmittedToBeReleased"
		},
	{ ATF_POINTER, 1, offsetof(struct PDUSessionAdmitted_SNModResponse, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_PDUSessionAdmitted_SNModResponse_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_PDUSessionAdmitted_SNModResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDUSessionAdmitted_SNModResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pduSessionResourcesAdmittedToBeAdded */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pduSessionResourcesAdmittedToBeModified */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pduSessionResourcesAdmittedToBeReleased */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extension */
};
static asn_SEQUENCE_specifics_t asn_SPC_PDUSessionAdmitted_SNModResponse_specs_1 = {
	sizeof(struct PDUSessionAdmitted_SNModResponse),
	offsetof(struct PDUSessionAdmitted_SNModResponse, _asn_ctx),
	asn_MAP_PDUSessionAdmitted_SNModResponse_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PDUSessionAdmitted_SNModResponse_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDUSessionAdmitted_SNModResponse = {
	"PDUSessionAdmitted-SNModResponse",
	"PDUSessionAdmitted-SNModResponse",
	&asn_OP_SEQUENCE,
	asn_DEF_PDUSessionAdmitted_SNModResponse_tags_1,
	sizeof(asn_DEF_PDUSessionAdmitted_SNModResponse_tags_1)
		/sizeof(asn_DEF_PDUSessionAdmitted_SNModResponse_tags_1[0]), /* 1 */
	asn_DEF_PDUSessionAdmitted_SNModResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDUSessionAdmitted_SNModResponse_tags_1)
		/sizeof(asn_DEF_PDUSessionAdmitted_SNModResponse_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDUSessionAdmitted_SNModResponse_1,
	4,	/* Elements count */
	&asn_SPC_PDUSessionAdmitted_SNModResponse_specs_1	/* Additional specs */
};

