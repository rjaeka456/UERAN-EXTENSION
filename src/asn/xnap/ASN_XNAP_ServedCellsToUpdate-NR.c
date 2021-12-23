/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_ServedCellsToUpdate-NR.h"

#include "ASN_XNAP_ServedCells-NR.h"
#include "ASN_XNAP_ServedCells-ToModify-NR.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
#include "ASN_XNAP_NR-CGI.h"
static int
memb_served_Cells_ToDelete_NR_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_served_Cells_ToDelete_NR_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_served_Cells_ToDelete_NR_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_served_Cells_ToDelete_NR_4[] = {
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
static const ber_tlv_tag_t asn_DEF_served_Cells_ToDelete_NR_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_served_Cells_ToDelete_NR_specs_4 = {
	sizeof(struct ServedCellsToUpdate_NR__served_Cells_ToDelete_NR),
	offsetof(struct ServedCellsToUpdate_NR__served_Cells_ToDelete_NR, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_served_Cells_ToDelete_NR_4 = {
	"served-Cells-ToDelete-NR",
	"served-Cells-ToDelete-NR",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_served_Cells_ToDelete_NR_tags_4,
	sizeof(asn_DEF_served_Cells_ToDelete_NR_tags_4)
		/sizeof(asn_DEF_served_Cells_ToDelete_NR_tags_4[0]) - 1, /* 1 */
	asn_DEF_served_Cells_ToDelete_NR_tags_4,	/* Same as above */
	sizeof(asn_DEF_served_Cells_ToDelete_NR_tags_4)
		/sizeof(asn_DEF_served_Cells_ToDelete_NR_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_served_Cells_ToDelete_NR_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_served_Cells_ToDelete_NR_4,
	1,	/* Single element */
	&asn_SPC_served_Cells_ToDelete_NR_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ServedCellsToUpdate_NR_1[] = {
	{ ATF_POINTER, 4, offsetof(struct ServedCellsToUpdate_NR, served_Cells_ToAdd_NR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServedCells_NR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"served-Cells-ToAdd-NR"
		},
	{ ATF_POINTER, 3, offsetof(struct ServedCellsToUpdate_NR, served_Cells_ToModify_NR),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServedCells_ToModify_NR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"served-Cells-ToModify-NR"
		},
	{ ATF_POINTER, 2, offsetof(struct ServedCellsToUpdate_NR, served_Cells_ToDelete_NR),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_served_Cells_ToDelete_NR_4,
		0,
		{ 0, &asn_PER_memb_served_Cells_ToDelete_NR_constr_4,  memb_served_Cells_ToDelete_NR_constraint_1 },
		0, 0, /* No default value */
		"served-Cells-ToDelete-NR"
		},
	{ ATF_POINTER, 1, offsetof(struct ServedCellsToUpdate_NR, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ServedCellsToUpdate_NR_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ServedCellsToUpdate_NR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ServedCellsToUpdate_NR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* served-Cells-ToAdd-NR */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* served-Cells-ToModify-NR */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* served-Cells-ToDelete-NR */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_ServedCellsToUpdate_NR_specs_1 = {
	sizeof(struct ServedCellsToUpdate_NR),
	offsetof(struct ServedCellsToUpdate_NR, _asn_ctx),
	asn_MAP_ServedCellsToUpdate_NR_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ServedCellsToUpdate_NR_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ServedCellsToUpdate_NR = {
	"ServedCellsToUpdate-NR",
	"ServedCellsToUpdate-NR",
	&asn_OP_SEQUENCE,
	asn_DEF_ServedCellsToUpdate_NR_tags_1,
	sizeof(asn_DEF_ServedCellsToUpdate_NR_tags_1)
		/sizeof(asn_DEF_ServedCellsToUpdate_NR_tags_1[0]), /* 1 */
	asn_DEF_ServedCellsToUpdate_NR_tags_1,	/* Same as above */
	sizeof(asn_DEF_ServedCellsToUpdate_NR_tags_1)
		/sizeof(asn_DEF_ServedCellsToUpdate_NR_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ServedCellsToUpdate_NR_1,
	4,	/* Elements count */
	&asn_SPC_ServedCellsToUpdate_NR_specs_1	/* Additional specs */
};
