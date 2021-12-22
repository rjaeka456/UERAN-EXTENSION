/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_PDUSessionResourceModRqdInfo_SNterminated_H_
#define	_PDUSessionResourceModRqdInfo_SNterminated_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UPTransportLayerInformation;
struct QoSFlows_List_withCause;
struct DataforwardingandOffloadingInfofromSource;
struct DRBsToBeSetup_List_ModRqd_SNterminated;
struct DRBsToBeModified_List_ModRqd_SNterminated;
struct DRB_List_withCause;
struct ProtocolExtensionContainer;

/* PDUSessionResourceModRqdInfo-SNterminated */
typedef struct PDUSessionResourceModRqdInfo_SNterminated {
	struct UPTransportLayerInformation	*dL_NG_U_TNLatNG_RAN	/* OPTIONAL */;
	struct QoSFlows_List_withCause	*qoSFlowsToBeReleased_List	/* OPTIONAL */;
	struct DataforwardingandOffloadingInfofromSource	*dataforwardinginfofromSource	/* OPTIONAL */;
	struct DRBsToBeSetup_List_ModRqd_SNterminated	*drbsToBeSetupList	/* OPTIONAL */;
	struct DRBsToBeModified_List_ModRqd_SNterminated	*drbsToBeModifiedList	/* OPTIONAL */;
	struct DRB_List_withCause	*dRBsToBeReleased	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceModRqdInfo_SNterminated_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceModRqdInfo_SNterminated;
extern asn_SEQUENCE_specifics_t asn_SPC_PDUSessionResourceModRqdInfo_SNterminated_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionResourceModRqdInfo_SNterminated_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourceModRqdInfo_SNterminated_H_ */
#include <asn_internal.h>
