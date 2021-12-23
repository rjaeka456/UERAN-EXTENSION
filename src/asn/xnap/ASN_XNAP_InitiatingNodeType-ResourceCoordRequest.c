/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_InitiatingNodeType-ResourceCoordRequest.h"

#include "ASN_XNAP_ResourceCoordRequest-ng-eNB-initiated.h"
#include "ASN_XNAP_ResourceCoordRequest-gNB-initiated.h"
#include "ASN_XNAP_ProtocolIE-Single-Container.h"
static asn_per_constraints_t asn_PER_type_InitiatingNodeType_ResourceCoordRequest_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_InitiatingNodeType_ResourceCoordRequest_1[] = {
	{ ATF_POINTER, 0, offsetof(struct InitiatingNodeType_ResourceCoordRequest, choice.ng_eNB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResourceCoordRequest_ng_eNB_initiated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-eNB"
		},
	{ ATF_POINTER, 0, offsetof(struct InitiatingNodeType_ResourceCoordRequest, choice.gNB),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResourceCoordRequest_gNB_initiated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gNB"
		},
	{ ATF_POINTER, 0, offsetof(struct InitiatingNodeType_ResourceCoordRequest, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Single_Container_5954P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_InitiatingNodeType_ResourceCoordRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ng-eNB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gNB */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-extension */
};
static asn_CHOICE_specifics_t asn_SPC_InitiatingNodeType_ResourceCoordRequest_specs_1 = {
	sizeof(struct InitiatingNodeType_ResourceCoordRequest),
	offsetof(struct InitiatingNodeType_ResourceCoordRequest, _asn_ctx),
	offsetof(struct InitiatingNodeType_ResourceCoordRequest, present),
	sizeof(((struct InitiatingNodeType_ResourceCoordRequest *)0)->present),
	asn_MAP_InitiatingNodeType_ResourceCoordRequest_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_InitiatingNodeType_ResourceCoordRequest = {
	"InitiatingNodeType-ResourceCoordRequest",
	"InitiatingNodeType-ResourceCoordRequest",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_InitiatingNodeType_ResourceCoordRequest_constr_1, CHOICE_constraint },
	asn_MBR_InitiatingNodeType_ResourceCoordRequest_1,
	3,	/* Elements count */
	&asn_SPC_InitiatingNodeType_ResourceCoordRequest_specs_1	/* Additional specs */
};

