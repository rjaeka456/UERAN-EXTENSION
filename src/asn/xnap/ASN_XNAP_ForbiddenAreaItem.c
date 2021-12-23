/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_ForbiddenAreaItem.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
static int
memb_forbidden_TACs_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4096)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_forbidden_TACs_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 12,  12,  1,  4096 }	/* (SIZE(1..4096)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_forbidden_TACs_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 12,  12,  1,  4096 }	/* (SIZE(1..4096)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_forbidden_TACs_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_forbidden_TACs_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_forbidden_TACs_specs_3 = {
	sizeof(struct ASN_XNAP_ForbiddenAreaItem__forbidden_TACs),
	offsetof(struct ASN_XNAP_ForbiddenAreaItem__forbidden_TACs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_forbidden_TACs_3 = {
	"forbidden-TACs",
	"forbidden-TACs",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_forbidden_TACs_tags_3,
	sizeof(asn_DEF_forbidden_TACs_tags_3)
		/sizeof(asn_DEF_forbidden_TACs_tags_3[0]) - 1, /* 1 */
	asn_DEF_forbidden_TACs_tags_3,	/* Same as above */
	sizeof(asn_DEF_forbidden_TACs_tags_3)
		/sizeof(asn_DEF_forbidden_TACs_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_forbidden_TACs_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_forbidden_TACs_3,
	1,	/* Single element */
	&asn_SPC_forbidden_TACs_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ForbiddenAreaItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ForbiddenAreaItem, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ForbiddenAreaItem, forbidden_TACs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_forbidden_TACs_3,
		0,
		{ 0, &asn_PER_memb_forbidden_TACs_constr_3,  memb_forbidden_TACs_constraint_1 },
		0, 0, /* No default value */
		"forbidden-TACs"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_ForbiddenAreaItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ForbiddenAreaItem_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_ForbiddenAreaItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ForbiddenAreaItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* forbidden-TACs */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ForbiddenAreaItem_specs_1 = {
	sizeof(struct ASN_XNAP_ForbiddenAreaItem),
	offsetof(struct ASN_XNAP_ForbiddenAreaItem, _asn_ctx),
	asn_MAP_ForbiddenAreaItem_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ForbiddenAreaItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ForbiddenAreaItem = {
	"ForbiddenAreaItem",
	"ForbiddenAreaItem",
	&asn_OP_SEQUENCE,
	asn_DEF_ForbiddenAreaItem_tags_1,
	sizeof(asn_DEF_ForbiddenAreaItem_tags_1)
		/sizeof(asn_DEF_ForbiddenAreaItem_tags_1[0]), /* 1 */
	asn_DEF_ForbiddenAreaItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_ForbiddenAreaItem_tags_1)
		/sizeof(asn_DEF_ForbiddenAreaItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ForbiddenAreaItem_1,
	3,	/* Elements count */
	&asn_SPC_ForbiddenAreaItem_specs_1	/* Additional specs */
};
