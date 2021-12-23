/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_ResourceCoordResponse_ng_eNB_initiated_H_
#define	_ResourceCoordResponse_ng_eNB_initiated_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_DataTrafficResourceIndication.h"
#include "ASN_XNAP_SpectrumSharingGroupID.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;
struct ASN_XNAP_E_UTRA_CGI;

/* ResourceCoordResponse-ng-eNB-initiated */
typedef struct ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated {
    ASN_XNAP_DataTrafficResourceIndication_t	 dataTrafficResourceIndication;
    ASN_XNAP_SpectrumSharingGroupID_t	 spectrumSharingGroupID;
	struct ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated__listofE_UTRACells {
		A_SEQUENCE_OF(struct ASN_XNAP_E_UTRA_CGI) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *listofE_UTRACells;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_ResourceCoordResponse_ng_eNB_initiated_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResourceCoordResponse_ng_eNB_initiated;
extern asn_SEQUENCE_specifics_t asn_SPC_ResourceCoordResponse_ng_eNB_initiated_specs_1;
extern asn_TYPE_member_t asn_MBR_ResourceCoordResponse_ng_eNB_initiated_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ResourceCoordResponse_ng_eNB_initiated_H_ */
#include <asn_internal.h>
