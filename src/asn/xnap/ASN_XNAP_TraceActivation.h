/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_TraceActivation_H_
#define	_TraceActivation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <BIT_STRING.h>
#include "ASN_XNAP_Trace-Depth.h"
#include "ASN_XNAP_TransportLayerAddress.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_TraceActivation__interfaces_to_trace {
    ASN_XNAP_TraceActivation__interfaces_to_trace_ng_c	= 0,
    ASN_XNAP_TraceActivation__interfaces_to_trace_x_nc	= 1,
    ASN_XNAP_TraceActivation__interfaces_to_trace_uu	= 2,
    ASN_XNAP_TraceActivation__interfaces_to_trace_f1_c	= 3,
    ASN_XNAP_TraceActivation__interfaces_to_trace_e1	= 4
} e_ASN_XNAP_TraceActivation__interfaces_to_trace;

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* TraceActivation */
typedef struct ASN_XNAP_TraceActivation {
	OCTET_STRING_t	 ng_ran_TraceID;
	BIT_STRING_t	 interfaces_to_trace;
    ASN_XNAP_Trace_Depth_t	 trace_depth;
    ASN_XNAP_TransportLayerAddress_t	 trace_coll_address;
	struct ASN_XNAP_ProtocolExtensionContainer	*ie_Extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_TraceActivation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TraceActivation;

#ifdef __cplusplus
}
#endif

#endif	/* _TraceActivation_H_ */
#include <asn_internal.h>
