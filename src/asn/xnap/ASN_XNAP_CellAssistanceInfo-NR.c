/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_CellAssistanceInfo-NR.h"

#include "ASN_XNAP_ProtocolIE-Single-Container.h"
#include "ASN_XNAP_NR-CGI.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_limitedNR_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16384)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_limitedNR_List_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_full_List_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_limitedNR_List_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_CellAssistanceInfo_NR_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_limitedNR_List_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_limitedNR_List_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_limitedNR_List_specs_2 = {
	sizeof(struct CellAssistanceInfo_NR__limitedNR_List),
	offsetof(struct CellAssistanceInfo_NR__limitedNR_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_limitedNR_List_2 = {
	"limitedNR-List",
	"limitedNR-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_limitedNR_List_tags_2,
	sizeof(asn_DEF_limitedNR_List_tags_2)
		/sizeof(asn_DEF_limitedNR_List_tags_2[0]) - 1, /* 1 */
	asn_DEF_limitedNR_List_tags_2,	/* Same as above */
	sizeof(asn_DEF_limitedNR_List_tags_2)
		/sizeof(asn_DEF_limitedNR_List_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_limitedNR_List_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_limitedNR_List_2,
	1,	/* Single element */
	&asn_SPC_limitedNR_List_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_full_List_value2enum_4[] = {
	{ 0,	19,	"all-served-cells-NR" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_full_List_enum2value_4[] = {
	0	/* all-served-cells-NR(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_full_List_specs_4 = {
	asn_MAP_full_List_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_full_List_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_full_List_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_full_List_4 = {
	"full-List",
	"full-List",
	&asn_OP_NativeEnumerated,
	asn_DEF_full_List_tags_4,
	sizeof(asn_DEF_full_List_tags_4)
		/sizeof(asn_DEF_full_List_tags_4[0]) - 1, /* 1 */
	asn_DEF_full_List_tags_4,	/* Same as above */
	sizeof(asn_DEF_full_List_tags_4)
		/sizeof(asn_DEF_full_List_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_full_List_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_full_List_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CellAssistanceInfo_NR_1[] = {
	{ ATF_POINTER, 0, offsetof(struct CellAssistanceInfo_NR, choice.limitedNR_List),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_limitedNR_List_2,
		0,
		{ 0, &asn_PER_memb_limitedNR_List_constr_2,  memb_limitedNR_List_constraint_1 },
		0, 0, /* No default value */
		"limitedNR-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellAssistanceInfo_NR, choice.full_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_full_List_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"full-List"
		},
	{ ATF_POINTER, 0, offsetof(struct CellAssistanceInfo_NR, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Single_Container_5954P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_CellAssistanceInfo_NR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* limitedNR-List */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* full-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-extension */
};
static asn_CHOICE_specifics_t asn_SPC_CellAssistanceInfo_NR_specs_1 = {
	sizeof(struct CellAssistanceInfo_NR),
	offsetof(struct CellAssistanceInfo_NR, _asn_ctx),
	offsetof(struct CellAssistanceInfo_NR, present),
	sizeof(((struct CellAssistanceInfo_NR *)0)->present),
	asn_MAP_CellAssistanceInfo_NR_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CellAssistanceInfo_NR = {
	"CellAssistanceInfo-NR",
	"CellAssistanceInfo-NR",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_CellAssistanceInfo_NR_constr_1, CHOICE_constraint },
	asn_MBR_CellAssistanceInfo_NR_1,
	3,	/* Elements count */
	&asn_SPC_CellAssistanceInfo_NR_specs_1	/* Additional specs */
};
