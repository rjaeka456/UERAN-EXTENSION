/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_AS-SecurityInformation.h"

#include "ASN_XNAP_ProtocolExtensionContainer.h"
static int
memb_key_NG_RAN_Star_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 256)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ncc_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_key_NG_RAN_Star_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  256,  256 }	/* (SIZE(256..256)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ncc_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_AS_SecurityInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_AS_SecurityInformation, key_NG_RAN_Star),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_key_NG_RAN_Star_constr_2,  memb_key_NG_RAN_Star_constraint_1 },
		0, 0, /* No default value */
		"key-NG-RAN-Star"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_AS_SecurityInformation, ncc),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ncc_constr_3,  memb_ncc_constraint_1 },
		0, 0, /* No default value */
		"ncc"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_AS_SecurityInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_AS_SecurityInformation_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_AS_SecurityInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AS_SecurityInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* key-NG-RAN-Star */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ncc */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_AS_SecurityInformation_specs_1 = {
	sizeof(struct ASN_XNAP_AS_SecurityInformation),
	offsetof(struct ASN_XNAP_AS_SecurityInformation, _asn_ctx),
	asn_MAP_AS_SecurityInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_AS_SecurityInformation_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AS_SecurityInformation = {
	"AS-SecurityInformation",
	"AS-SecurityInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_AS_SecurityInformation_tags_1,
	sizeof(asn_DEF_AS_SecurityInformation_tags_1)
		/sizeof(asn_DEF_AS_SecurityInformation_tags_1[0]), /* 1 */
	asn_DEF_AS_SecurityInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_AS_SecurityInformation_tags_1)
		/sizeof(asn_DEF_AS_SecurityInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AS_SecurityInformation_1,
	3,	/* Elements count */
	&asn_SPC_AS_SecurityInformation_specs_1	/* Additional specs */
};
