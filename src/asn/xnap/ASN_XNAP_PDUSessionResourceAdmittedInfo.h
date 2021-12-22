/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_PDUSessionResourceAdmittedInfo_H_
#define	_PDUSessionResourceAdmittedInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "QoSFlowsAdmitted-List.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDUSessionResourceAdmittedInfo__dL_NG_U_TNL_Information_Unchanged {
	PDUSessionResourceAdmittedInfo__dL_NG_U_TNL_Information_Unchanged_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_PDUSessionResourceAdmittedInfo__dL_NG_U_TNL_Information_Unchanged;

/* Forward declarations */
struct QoSFlows_List_withCause;
struct DataForwardingInfoFromTargetNGRANnode;
struct ProtocolExtensionContainer;

/* PDUSessionResourceAdmittedInfo */
typedef struct PDUSessionResourceAdmittedInfo {
	long	*dL_NG_U_TNL_Information_Unchanged	/* OPTIONAL */;
	QoSFlowsAdmitted_List_t	 qosFlowsAdmitted_List;
	struct QoSFlows_List_withCause	*qosFlowsNotAdmitted_List	/* OPTIONAL */;
	struct DataForwardingInfoFromTargetNGRANnode	*dataForwardingInfoFromTarget	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceAdmittedInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dL_NG_U_TNL_Information_Unchanged_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceAdmittedInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_PDUSessionResourceAdmittedInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionResourceAdmittedInfo_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourceAdmittedInfo_H_ */
#include <asn_internal.h>
