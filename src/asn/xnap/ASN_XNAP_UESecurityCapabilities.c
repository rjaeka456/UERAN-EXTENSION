/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "UESecurityCapabilities.h"

#include "ProtocolExtensionContainer.h"
static int
memb_nr_EncyptionAlgorithms_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
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
memb_nr_IntegrityProtectionAlgorithms_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
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
memb_e_utra_EncyptionAlgorithms_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
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
memb_e_utra_IntegrityProtectionAlgorithms_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_nr_EncyptionAlgorithms_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  16,  16 }	/* (SIZE(16..16,...)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_nr_IntegrityProtectionAlgorithms_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  16,  16 }	/* (SIZE(16..16,...)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_e_utra_EncyptionAlgorithms_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  16,  16 }	/* (SIZE(16..16,...)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_e_utra_IntegrityProtectionAlgorithms_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  16,  16 }	/* (SIZE(16..16,...)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UESecurityCapabilities_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UESecurityCapabilities, nr_EncyptionAlgorithms),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_nr_EncyptionAlgorithms_constr_2,  memb_nr_EncyptionAlgorithms_constraint_1 },
		0, 0, /* No default value */
		"nr-EncyptionAlgorithms"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UESecurityCapabilities, nr_IntegrityProtectionAlgorithms),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_nr_IntegrityProtectionAlgorithms_constr_6,  memb_nr_IntegrityProtectionAlgorithms_constraint_1 },
		0, 0, /* No default value */
		"nr-IntegrityProtectionAlgorithms"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UESecurityCapabilities, e_utra_EncyptionAlgorithms),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_e_utra_EncyptionAlgorithms_constr_10,  memb_e_utra_EncyptionAlgorithms_constraint_1 },
		0, 0, /* No default value */
		"e-utra-EncyptionAlgorithms"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UESecurityCapabilities, e_utra_IntegrityProtectionAlgorithms),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_e_utra_IntegrityProtectionAlgorithms_constr_14,  memb_e_utra_IntegrityProtectionAlgorithms_constraint_1 },
		0, 0, /* No default value */
		"e-utra-IntegrityProtectionAlgorithms"
		},
	{ ATF_POINTER, 1, offsetof(struct UESecurityCapabilities, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_6001P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_UESecurityCapabilities_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_UESecurityCapabilities_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UESecurityCapabilities_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-EncyptionAlgorithms */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-IntegrityProtectionAlgorithms */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* e-utra-EncyptionAlgorithms */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e-utra-IntegrityProtectionAlgorithms */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_UESecurityCapabilities_specs_1 = {
	sizeof(struct UESecurityCapabilities),
	offsetof(struct UESecurityCapabilities, _asn_ctx),
	asn_MAP_UESecurityCapabilities_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_UESecurityCapabilities_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UESecurityCapabilities = {
	"UESecurityCapabilities",
	"UESecurityCapabilities",
	&asn_OP_SEQUENCE,
	asn_DEF_UESecurityCapabilities_tags_1,
	sizeof(asn_DEF_UESecurityCapabilities_tags_1)
		/sizeof(asn_DEF_UESecurityCapabilities_tags_1[0]), /* 1 */
	asn_DEF_UESecurityCapabilities_tags_1,	/* Same as above */
	sizeof(asn_DEF_UESecurityCapabilities_tags_1)
		/sizeof(asn_DEF_UESecurityCapabilities_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UESecurityCapabilities_1,
	5,	/* Elements count */
	&asn_SPC_UESecurityCapabilities_specs_1	/* Additional specs */
};

