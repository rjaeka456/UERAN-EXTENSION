/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_MobilityRestrictionList_H_
#define	_MobilityRestrictionList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_PLMN-Identity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_RAT_RestrictionsList;
struct ASN_XNAP_ForbiddenAreaList;
struct ASN_XNAP_ServiceAreaList;
struct ASN_XNAP_ProtocolExtensionContainer;

/* MobilityRestrictionList */
typedef struct ASN_XNAP_MobilityRestrictionList {
    ASN_XNAP_PLMN_Identity_t	 serving_PLMN;
	struct ASN_XNAP_MobilityRestrictionList__equivalent_PLMNs {
		A_SEQUENCE_OF(ASN_XNAP_PLMN_Identity_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *equivalent_PLMNs;
	struct ASN_XNAP_RAT_RestrictionsList	*rat_Restrictions	/* OPTIONAL */;
	struct ASN_XNAP_ForbiddenAreaList	*forbiddenAreaInformation	/* OPTIONAL */;
	struct ASN_XNAP_ServiceAreaList	*serviceAreaInformation	/* OPTIONAL */;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_MobilityRestrictionList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityRestrictionList;
extern asn_SEQUENCE_specifics_t asn_SPC_MobilityRestrictionList_specs_1;
extern asn_TYPE_member_t asn_MBR_MobilityRestrictionList_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityRestrictionList_H_ */
#include <asn_internal.h>
