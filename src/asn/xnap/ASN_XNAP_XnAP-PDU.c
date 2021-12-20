/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Descriptions"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_XnAP-PDU.h"

#include "ASN_XNAP_InitiatingMessage.h"
#include "ASN_XNAP_SuccessfulOutcome.h"
#include "ASN_XNAP_UnsuccessfulOutcome.h"

static asn_per_constraints_t asn_PER_type_XnAP_PDU_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_XnAP_PDU_1[] = {
	{ ATF_POINTER, 0, offsetof(struct XnAP_PDU, choice.initiatingMessage),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InitiatingMessage,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"initiatingMessage"
		},
	{ ATF_POINTER, 0, offsetof(struct XnAP_PDU, choice.successfulOutcome),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SuccessfulOutcome,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"successfulOutcome"
		},
	{ ATF_POINTER, 0, offsetof(struct XnAP_PDU, choice.unsuccessfulOutcome),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UnsuccessfulOutcome,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"unsuccessfulOutcome"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_XnAP_PDU_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* initiatingMessage */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* successfulOutcome */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* unsuccessfulOutcome */
};
static asn_CHOICE_specifics_t asn_SPC_XnAP_PDU_specs_1 = {
	sizeof(struct XnAP_PDU),
	offsetof(struct XnAP_PDU, _asn_ctx),
	offsetof(struct XnAP_PDU, present),
	sizeof(((struct XnAP_PDU *)0)->present),
	asn_MAP_XnAP_PDU_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_XnAP_PDU = {
	"XnAP-PDU",
	"XnAP-PDU",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_XnAP_PDU_constr_1, CHOICE_constraint },
	asn_MBR_XnAP_PDU_1,
	3,	/* Elements count */
	&asn_SPC_XnAP_PDU_specs_1	/* Additional specs */
};

