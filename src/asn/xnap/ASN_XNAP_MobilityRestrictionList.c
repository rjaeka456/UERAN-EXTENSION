/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_MobilityRestrictionList.h"

#include "ASN_XNAP_RAT-RestrictionsList.h"
#include "ASN_XNAP_ForbiddenAreaList.h"
#include "ASN_XNAP_ServiceAreaList.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
static int
memb_equivalent_PLMNs_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 15)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_equivalent_PLMNs_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (SIZE(1..15)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_equivalent_PLMNs_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (SIZE(1..15)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_equivalent_PLMNs_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_equivalent_PLMNs_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_equivalent_PLMNs_specs_3 = {
	sizeof(struct ASN_XNAP_MobilityRestrictionList__equivalent_PLMNs),
	offsetof(struct ASN_XNAP_MobilityRestrictionList__equivalent_PLMNs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_equivalent_PLMNs_3 = {
	"equivalent-PLMNs",
	"equivalent-PLMNs",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_equivalent_PLMNs_tags_3,
	sizeof(asn_DEF_equivalent_PLMNs_tags_3)
		/sizeof(asn_DEF_equivalent_PLMNs_tags_3[0]) - 1, /* 1 */
	asn_DEF_equivalent_PLMNs_tags_3,	/* Same as above */
	sizeof(asn_DEF_equivalent_PLMNs_tags_3)
		/sizeof(asn_DEF_equivalent_PLMNs_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_equivalent_PLMNs_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_equivalent_PLMNs_3,
	1,	/* Single element */
	&asn_SPC_equivalent_PLMNs_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MobilityRestrictionList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_MobilityRestrictionList, serving_PLMN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"serving-PLMN"
		},
	{ ATF_POINTER, 5, offsetof(struct ASN_XNAP_MobilityRestrictionList, equivalent_PLMNs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_equivalent_PLMNs_3,
		0,
		{ 0, &asn_PER_memb_equivalent_PLMNs_constr_3,  memb_equivalent_PLMNs_constraint_1 },
		0, 0, /* No default value */
		"equivalent-PLMNs"
		},
	{ ATF_POINTER, 4, offsetof(struct ASN_XNAP_MobilityRestrictionList, rat_Restrictions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAT_RestrictionsList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rat-Restrictions"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_MobilityRestrictionList, forbiddenAreaInformation),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ForbiddenAreaList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"forbiddenAreaInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_MobilityRestrictionList, serviceAreaInformation),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServiceAreaList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"serviceAreaInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_MobilityRestrictionList, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_MobilityRestrictionList_oms_1[] = { 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_MobilityRestrictionList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MobilityRestrictionList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* serving-PLMN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* equivalent-PLMNs */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rat-Restrictions */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* forbiddenAreaInformation */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* serviceAreaInformation */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_MobilityRestrictionList_specs_1 = {
	sizeof(struct ASN_XNAP_MobilityRestrictionList),
	offsetof(struct ASN_XNAP_MobilityRestrictionList, _asn_ctx),
	asn_MAP_MobilityRestrictionList_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_MobilityRestrictionList_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MobilityRestrictionList = {
	"MobilityRestrictionList",
	"MobilityRestrictionList",
	&asn_OP_SEQUENCE,
	asn_DEF_MobilityRestrictionList_tags_1,
	sizeof(asn_DEF_MobilityRestrictionList_tags_1)
		/sizeof(asn_DEF_MobilityRestrictionList_tags_1[0]), /* 1 */
	asn_DEF_MobilityRestrictionList_tags_1,	/* Same as above */
	sizeof(asn_DEF_MobilityRestrictionList_tags_1)
		/sizeof(asn_DEF_MobilityRestrictionList_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MobilityRestrictionList_1,
	6,	/* Elements count */
	&asn_SPC_MobilityRestrictionList_specs_1	/* Additional specs */
};

