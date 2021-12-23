/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_NG-RAN-Cell-Identity-ListinRANPagingArea.h"

#include "ASN_XNAP_NG-RAN-Cell-Identity.h"
asn_per_constraints_t asn_PER_type_NG_RAN_Cell_Identity_ListinRANPagingArea_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NG_RAN_Cell_Identity_ListinRANPagingArea_1[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_NG_RAN_Cell_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NG_RAN_Cell_Identity_ListinRANPagingArea_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_NG_RAN_Cell_Identity_ListinRANPagingArea_specs_1 = {
	sizeof(struct NG_RAN_Cell_Identity_ListinRANPagingArea),
	offsetof(struct NG_RAN_Cell_Identity_ListinRANPagingArea, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_NG_RAN_Cell_Identity_ListinRANPagingArea = {
	"NG-RAN-Cell-Identity-ListinRANPagingArea",
	"NG-RAN-Cell-Identity-ListinRANPagingArea",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NG_RAN_Cell_Identity_ListinRANPagingArea_tags_1,
	sizeof(asn_DEF_NG_RAN_Cell_Identity_ListinRANPagingArea_tags_1)
		/sizeof(asn_DEF_NG_RAN_Cell_Identity_ListinRANPagingArea_tags_1[0]), /* 1 */
	asn_DEF_NG_RAN_Cell_Identity_ListinRANPagingArea_tags_1,	/* Same as above */
	sizeof(asn_DEF_NG_RAN_Cell_Identity_ListinRANPagingArea_tags_1)
		/sizeof(asn_DEF_NG_RAN_Cell_Identity_ListinRANPagingArea_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_NG_RAN_Cell_Identity_ListinRANPagingArea_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_NG_RAN_Cell_Identity_ListinRANPagingArea_1,
	1,	/* Single element */
	&asn_SPC_NG_RAN_Cell_Identity_ListinRANPagingArea_specs_1	/* Additional specs */
};
