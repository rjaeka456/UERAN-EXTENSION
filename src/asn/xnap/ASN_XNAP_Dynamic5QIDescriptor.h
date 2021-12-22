/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_Dynamic5QIDescriptor_H_
#define	_Dynamic5QIDescriptor_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_PriorityLevelQoS.h"
#include "ASN_XNAP_PacketDelayBudget.h"
#include "ASN_XNAP_PacketErrorRate.h"
#include "ASN_XNAP_FiveQI.h"
#include <NativeEnumerated.h>
#include "ASN_XNAP_AveragingWindow.h"
#include "ASN_XNAP_MaximumDataBurstVolume.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Dynamic5QIDescriptor__delayCritical {
	Dynamic5QIDescriptor__delayCritical_delay_critical	= 0,
	Dynamic5QIDescriptor__delayCritical_non_delay_critical	= 1
	/*
	 * Enumeration is extensible
	 */
} e_Dynamic5QIDescriptor__delayCritical;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* Dynamic5QIDescriptor */
typedef struct Dynamic5QIDescriptor {
	PriorityLevelQoS_t	 priorityLevelQoS;
	PacketDelayBudget_t	 packetDelayBudget;
	PacketErrorRate_t	 packetErrorRate;
	FiveQI_t	*fiveQI	/* OPTIONAL */;
	long	*delayCritical	/* OPTIONAL */;
	AveragingWindow_t	*averagingWindow	/* OPTIONAL */;
	MaximumDataBurstVolume_t	*maximumDataBurstVolume	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Dynamic5QIDescriptor_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_delayCritical_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Dynamic5QIDescriptor;
extern asn_SEQUENCE_specifics_t asn_SPC_Dynamic5QIDescriptor_specs_1;
extern asn_TYPE_member_t asn_MBR_Dynamic5QIDescriptor_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _Dynamic5QIDescriptor_H_ */
#include <asn_internal.h>
