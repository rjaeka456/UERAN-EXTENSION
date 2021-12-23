/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_NG-RAN-Cell-Identity.h"

#include "ASN_XNAP_ProtocolIE-Single-Container.h"
asn_per_constraints_t asn_PER_type_NG_RAN_Cell_Identity_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NG_RAN_Cell_Identity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NG_RAN_Cell_Identity, choice.nr),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_Cell_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_NG_RAN_Cell_Identity, choice.e_utra),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_UTRA_Cell_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-utra"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_XNAP_NG_RAN_Cell_Identity, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Single_Container_5954P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NG_RAN_Cell_Identity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e-utra */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-extension */
};
asn_CHOICE_specifics_t asn_SPC_NG_RAN_Cell_Identity_specs_1 = {
	sizeof(struct ASN_XNAP_NG_RAN_Cell_Identity),
	offsetof(struct ASN_XNAP_NG_RAN_Cell_Identity, _asn_ctx),
	offsetof(struct ASN_XNAP_NG_RAN_Cell_Identity, present),
	sizeof(((struct ASN_XNAP_NG_RAN_Cell_Identity *)0)->present),
	asn_MAP_NG_RAN_Cell_Identity_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NG_RAN_Cell_Identity = {
	"NG-RAN-Cell-Identity",
	"NG-RAN-Cell-Identity",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NG_RAN_Cell_Identity_constr_1, CHOICE_constraint },
	asn_MBR_NG_RAN_Cell_Identity_1,
	3,	/* Elements count */
	&asn_SPC_NG_RAN_Cell_Identity_specs_1	/* Additional specs */
};
