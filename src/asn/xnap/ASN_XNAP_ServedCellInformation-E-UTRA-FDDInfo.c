/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_ServedCellInformation-E-UTRA-FDDInfo.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo, ul_earfcn),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_E_UTRAARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-earfcn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo, dl_earfcn),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_E_UTRAARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-earfcn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo, ul_e_utraTxBW),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_E_UTRATransmissionBandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-e-utraTxBW"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo, dl_e_utraTxBW),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_E_UTRATransmissionBandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-e-utraTxBW"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-earfcn */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-earfcn */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ul-e-utraTxBW */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dl-e-utraTxBW */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_specs_1 = {
	sizeof(struct ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo),
	offsetof(struct ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo, _asn_ctx),
	asn_MAP_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo = {
	"ServedCellInformation-E-UTRA-FDDInfo",
	"ServedCellInformation-E-UTRA-FDDInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_tags_1,
	sizeof(asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_1,
	5,	/* Elements count */
	&asn_SPC_ASN_XNAP_ServedCellInformation_E_UTRA_FDDInfo_specs_1	/* Additional specs */
};
