/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_ServedCellsToActivate.h"

#include "ASN_XNAP_ProtocolIE-Single-Container.h"
#include "ASN_XNAP_NR-CGI.h"
#include "ASN_XNAP_E-UTRA-CGI.h"
static int
memb_nr_cells_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_e_utra_cells_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_nr_cells_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_e_utra_cells_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_nr_cells_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_e_utra_cells_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ServedCellsToActivate_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_nr_cells_2[] = {
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
static const ber_tlv_tag_t asn_DEF_nr_cells_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nr_cells_specs_2 = {
	sizeof(struct ServedCellsToActivate__nr_cells),
	offsetof(struct ServedCellsToActivate__nr_cells, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_cells_2 = {
	"nr-cells",
	"nr-cells",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_nr_cells_tags_2,
	sizeof(asn_DEF_nr_cells_tags_2)
		/sizeof(asn_DEF_nr_cells_tags_2[0]) - 1, /* 1 */
	asn_DEF_nr_cells_tags_2,	/* Same as above */
	sizeof(asn_DEF_nr_cells_tags_2)
		/sizeof(asn_DEF_nr_cells_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_nr_cells_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_nr_cells_2,
	1,	/* Single element */
	&asn_SPC_nr_cells_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_e_utra_cells_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E_UTRA_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_e_utra_cells_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_e_utra_cells_specs_4 = {
	sizeof(struct ServedCellsToActivate__e_utra_cells),
	offsetof(struct ServedCellsToActivate__e_utra_cells, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_e_utra_cells_4 = {
	"e-utra-cells",
	"e-utra-cells",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_e_utra_cells_tags_4,
	sizeof(asn_DEF_e_utra_cells_tags_4)
		/sizeof(asn_DEF_e_utra_cells_tags_4[0]) - 1, /* 1 */
	asn_DEF_e_utra_cells_tags_4,	/* Same as above */
	sizeof(asn_DEF_e_utra_cells_tags_4)
		/sizeof(asn_DEF_e_utra_cells_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_e_utra_cells_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_e_utra_cells_4,
	1,	/* Single element */
	&asn_SPC_e_utra_cells_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ServedCellsToActivate_1[] = {
	{ ATF_POINTER, 0, offsetof(struct ServedCellsToActivate, choice.nr_cells),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_nr_cells_2,
		0,
		{ 0, &asn_PER_memb_nr_cells_constr_2,  memb_nr_cells_constraint_1 },
		0, 0, /* No default value */
		"nr-cells"
		},
	{ ATF_POINTER, 0, offsetof(struct ServedCellsToActivate, choice.e_utra_cells),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_e_utra_cells_4,
		0,
		{ 0, &asn_PER_memb_e_utra_cells_constr_4,  memb_e_utra_cells_constraint_1 },
		0, 0, /* No default value */
		"e-utra-cells"
		},
	{ ATF_POINTER, 0, offsetof(struct ServedCellsToActivate, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Single_Container_5954P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ServedCellsToActivate_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-cells */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e-utra-cells */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-extension */
};
static asn_CHOICE_specifics_t asn_SPC_ServedCellsToActivate_specs_1 = {
	sizeof(struct ServedCellsToActivate),
	offsetof(struct ServedCellsToActivate, _asn_ctx),
	offsetof(struct ServedCellsToActivate, present),
	sizeof(((struct ServedCellsToActivate *)0)->present),
	asn_MAP_ServedCellsToActivate_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ServedCellsToActivate = {
	"ServedCellsToActivate",
	"ServedCellsToActivate",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_ServedCellsToActivate_constr_1, CHOICE_constraint },
	asn_MBR_ServedCellsToActivate_1,
	3,	/* Elements count */
	&asn_SPC_ServedCellsToActivate_specs_1	/* Additional specs */
};

