/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "UERANPagingIdentity.h"

#include "ProtocolIE-Single-Container.h"
static int
memb_i_RNTI_full_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 40)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_i_RNTI_full_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  40,  40 }	/* (SIZE(40..40)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_UERANPagingIdentity_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_UERANPagingIdentity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UERANPagingIdentity, choice.i_RNTI_full),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_i_RNTI_full_constr_2,  memb_i_RNTI_full_constraint_1 },
		0, 0, /* No default value */
		"i-RNTI-full"
		},
	{ ATF_POINTER, 0, offsetof(struct UERANPagingIdentity, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Single_Container_5954P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UERANPagingIdentity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* i-RNTI-full */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* choice-extension */
};
static asn_CHOICE_specifics_t asn_SPC_UERANPagingIdentity_specs_1 = {
	sizeof(struct UERANPagingIdentity),
	offsetof(struct UERANPagingIdentity, _asn_ctx),
	offsetof(struct UERANPagingIdentity, present),
	sizeof(((struct UERANPagingIdentity *)0)->present),
	asn_MAP_UERANPagingIdentity_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UERANPagingIdentity = {
	"UERANPagingIdentity",
	"UERANPagingIdentity",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_UERANPagingIdentity_constr_1, CHOICE_constraint },
	asn_MBR_UERANPagingIdentity_1,
	2,	/* Elements count */
	&asn_SPC_UERANPagingIdentity_specs_1	/* Additional specs */
};

