/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_PDUSessionResourceSetupInfo_MNterminated_H_
#define	_PDUSessionResourceSetupInfo_MNterminated_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_PDUSessionType.h"
#include "ASN_XNAP_DRBsToBeSetupList-Setup-MNterminated.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* PDUSessionResourceSetupInfo-MNterminated */
typedef struct ASN_XNAP_PDUSessionResourceSetupInfo_MNterminated {
    ASN_XNAP_PDUSessionType_t	 pduSessionType;
    ASN_XNAP_DRBsToBeSetupList_Setup_MNterminated_t	 dRBsToBeSetup;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_PDUSessionResourceSetupInfo_MNterminated_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceSetupInfo_MNterminated;
extern asn_SEQUENCE_specifics_t asn_SPC_PDUSessionResourceSetupInfo_MNterminated_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionResourceSetupInfo_MNterminated_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourceSetupInfo_MNterminated_H_ */
#include <asn_internal.h>
