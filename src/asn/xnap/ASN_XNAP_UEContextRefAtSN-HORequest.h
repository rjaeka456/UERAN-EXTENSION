/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_UEContextRefAtSN_HORequest_H_
#define	_UEContextRefAtSN_HORequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GlobalNG-RANNode-ID.h"
#include "NG-RANnodeUEXnAPID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UEContextRefAtSN-HORequest */
typedef struct UEContextRefAtSN_HORequest {
	GlobalNG_RANNode_ID_t	 globalNG_RANNode_ID;
	NG_RANnodeUEXnAPID_t	 sN_NG_RANnodeUEXnAPID;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEContextRefAtSN_HORequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEContextRefAtSN_HORequest;

#ifdef __cplusplus
}
#endif

#endif	/* _UEContextRefAtSN_HORequest_H_ */
#include <asn_internal.h>
