/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Contents"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#ifndef	_ConfigurationUpdateInitiatingNodeChoice_H_
#define	_ConfigurationUpdateInitiatingNodeChoice_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ConfigurationUpdateInitiatingNodeChoice_PR {
	ConfigurationUpdateInitiatingNodeChoice_PR_NOTHING,	/* No components present */
	ConfigurationUpdateInitiatingNodeChoice_PR_gNB,
	ConfigurationUpdateInitiatingNodeChoice_PR_ng_eNB,
	ConfigurationUpdateInitiatingNodeChoice_PR_choice_extension
} ConfigurationUpdateInitiatingNodeChoice_PR;

/* Forward declarations */
struct ProtocolIE_Container;
struct ProtocolIE_Single_Container;

/* ConfigurationUpdateInitiatingNodeChoice */
typedef struct ConfigurationUpdateInitiatingNodeChoice {
	ConfigurationUpdateInitiatingNodeChoice_PR present;
	union ConfigurationUpdateInitiatingNodeChoice_u {
		struct ProtocolIE_Container	*gNB;
		struct ProtocolIE_Container	*ng_eNB;
		struct ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConfigurationUpdateInitiatingNodeChoice_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConfigurationUpdateInitiatingNodeChoice;

#ifdef __cplusplus
}
#endif

#endif	/* _ConfigurationUpdateInitiatingNodeChoice_H_ */
#include <asn_internal.h>
