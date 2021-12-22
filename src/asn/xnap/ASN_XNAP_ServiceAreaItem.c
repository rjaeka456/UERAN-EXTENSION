/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ServiceAreaItem.h"

#include "ProtocolExtensionContainer.h"
static int
memb_allowed_TACs_ServiceArea_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_not_allowed_TACs_ServiceArea_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_allowed_TACs_ServiceArea_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_not_allowed_TACs_ServiceArea_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_allowed_TACs_ServiceArea_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_not_allowed_TACs_ServiceArea_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_allowed_TACs_ServiceArea_3[] = {
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
static const ber_tlv_tag_t asn_DEF_allowed_TACs_ServiceArea_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_allowed_TACs_ServiceArea_specs_3 = {
	sizeof(struct ServiceAreaItem__allowed_TACs_ServiceArea),
	offsetof(struct ServiceAreaItem__allowed_TACs_ServiceArea, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_allowed_TACs_ServiceArea_3 = {
	"allowed-TACs-ServiceArea",
	"allowed-TACs-ServiceArea",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_allowed_TACs_ServiceArea_tags_3,
	sizeof(asn_DEF_allowed_TACs_ServiceArea_tags_3)
		/sizeof(asn_DEF_allowed_TACs_ServiceArea_tags_3[0]) - 1, /* 1 */
	asn_DEF_allowed_TACs_ServiceArea_tags_3,	/* Same as above */
	sizeof(asn_DEF_allowed_TACs_ServiceArea_tags_3)
		/sizeof(asn_DEF_allowed_TACs_ServiceArea_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_allowed_TACs_ServiceArea_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_allowed_TACs_ServiceArea_3,
	1,	/* Single element */
	&asn_SPC_allowed_TACs_ServiceArea_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_not_allowed_TACs_ServiceArea_5[] = {
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
static const ber_tlv_tag_t asn_DEF_not_allowed_TACs_ServiceArea_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_not_allowed_TACs_ServiceArea_specs_5 = {
	sizeof(struct ServiceAreaItem__not_allowed_TACs_ServiceArea),
	offsetof(struct ServiceAreaItem__not_allowed_TACs_ServiceArea, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_not_allowed_TACs_ServiceArea_5 = {
	"not-allowed-TACs-ServiceArea",
	"not-allowed-TACs-ServiceArea",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_not_allowed_TACs_ServiceArea_tags_5,
	sizeof(asn_DEF_not_allowed_TACs_ServiceArea_tags_5)
		/sizeof(asn_DEF_not_allowed_TACs_ServiceArea_tags_5[0]) - 1, /* 1 */
	asn_DEF_not_allowed_TACs_ServiceArea_tags_5,	/* Same as above */
	sizeof(asn_DEF_not_allowed_TACs_ServiceArea_tags_5)
		/sizeof(asn_DEF_not_allowed_TACs_ServiceArea_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_not_allowed_TACs_ServiceArea_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_not_allowed_TACs_ServiceArea_5,
	1,	/* Single element */
	&asn_SPC_not_allowed_TACs_ServiceArea_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ServiceAreaItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ServiceAreaItem, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-Identity"
		},
	{ ATF_POINTER, 3, offsetof(struct ServiceAreaItem, allowed_TACs_ServiceArea),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_allowed_TACs_ServiceArea_3,
		0,
		{ 0, &asn_PER_memb_allowed_TACs_ServiceArea_constr_3,  memb_allowed_TACs_ServiceArea_constraint_1 },
		0, 0, /* No default value */
		"allowed-TACs-ServiceArea"
		},
	{ ATF_POINTER, 2, offsetof(struct ServiceAreaItem, not_allowed_TACs_ServiceArea),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_not_allowed_TACs_ServiceArea_5,
		0,
		{ 0, &asn_PER_memb_not_allowed_TACs_ServiceArea_constr_5,  memb_not_allowed_TACs_ServiceArea_constraint_1 },
		0, 0, /* No default value */
		"not-allowed-TACs-ServiceArea"
		},
	{ ATF_POINTER, 1, offsetof(struct ServiceAreaItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ServiceAreaItem_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ServiceAreaItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ServiceAreaItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allowed-TACs-ServiceArea */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* not-allowed-TACs-ServiceArea */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ServiceAreaItem_specs_1 = {
	sizeof(struct ServiceAreaItem),
	offsetof(struct ServiceAreaItem, _asn_ctx),
	asn_MAP_ServiceAreaItem_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ServiceAreaItem_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ServiceAreaItem = {
	"ServiceAreaItem",
	"ServiceAreaItem",
	&asn_OP_SEQUENCE,
	asn_DEF_ServiceAreaItem_tags_1,
	sizeof(asn_DEF_ServiceAreaItem_tags_1)
		/sizeof(asn_DEF_ServiceAreaItem_tags_1[0]), /* 1 */
	asn_DEF_ServiceAreaItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_ServiceAreaItem_tags_1)
		/sizeof(asn_DEF_ServiceAreaItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ServiceAreaItem_1,
	4,	/* Elements count */
	&asn_SPC_ServiceAreaItem_specs_1	/* Additional specs */
};

