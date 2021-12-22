/*
* Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
* From ASN.1 module "XnAP-Containers"
* 	found in "./xnap-15.5.0.asn1"
* 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
*/

#ifndef	_ProtocolIE_Field_H_
#define	_ProtocolIE_Field_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_ProtocolIE-ID.h"
#include "ASN_XNAP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include "ASN_XNAP_GlobalNG-RANNode-ID.h"
#include "ASN_XNAP_TAISupport-List.h"
#include "ASN_XNAP_AMF-Region-Information.h"
#include "ASN_XNAP_ServedCells-NR.h"
#include "ASN_XNAP_ServedCells-E-UTRA.h"
#include "ASN_XNAP_InterfaceInstanceIndication.h"

#ifdef __cplusplus
extern "C" {
#endif

   /* Dependencies */
   typedef enum ASN_XNAP_ProtocolIE_Field_5957P0__value_PR {
       ProtocolIE_Field_5957P0__value_PR_NOTHING,	/* No components present */

   } ASN_XNAP_ProtocolIE_Field_5957P0__value_PR;
   typedef enum ASN_XNAP_XnSetupRequestIEs__value_PR {
       ASN_XNAP_XnSetupRequestIEs__value_PR_NOTHING,	/* No components present */
       ASN_XNAP_XnSetupRequestIEs__value_PR_GlobalRANNodeID,
       ASN_XNAP_XnSetupRequestIEs__value_PR_RANNodeName,
       ASN_XNAP_XnSetupRequestIEs__value_PR_SupportedTAList,
       ASN_XNAP_XnSetupRequestIEs__value_PR_PagingDRX,
       ASN_NGAP_NGSetupRequestIEs__value_PR_UERetentionInformation
   } ASN_XNAP_XnSetupRequestIEs__value_PR;

   /* ASN_XNAP_ProtocolIE-Field */
   typedef struct ProtocolIE_Field_5957P0 {
       ASN_XNAP_ProtocolIE_ID_t	 id;
       ASN_XNAP_Criticality_t	 criticality;
       struct ProtocolIE_Field_5957P0__value {
           ASN_XNAP_ProtocolIE_Field_5957P0__value_PR present;
           union ProtocolIE_Field_5957P0__value_u {
           } choice;

           /* Context for parsing across buffer boundaries */
           asn_struct_ctx_t _asn_ctx;
       } value;

       /* Context for parsing across buffer boundaries */
       asn_struct_ctx_t _asn_ctx;
   } ASN_XNAP_ProtocolIE_Field_5957P0_t;
   typedef struct ASN_XNAP_XnSetupRequestIEs {
       ASN_XNAP_ProtocolIE_ID_t	 id;
       ASN_XNAP_Criticality_t	 criticality;
       struct ASN_XNAP_XnSetupRequestIEs__value {
           ASN_XNAP_XnSetupRequestIEs__value_PR present;
           union ASN_XNAP_XnSetupRequestIEs__ASN_XNAP_value_u {
               ASN_XNAP_GlobalNG_RANNode_ID_t	 GlobalNGRANNodeID;
               ASN_XNAP_TAISupport_List_t 	 TAISupportList;
               ASN_XNAP_AMF_Region_Information_t 	 SupportedTAList;
               ASN_XNAP_ServedCells_NR_t	 ServedCellsNR;
               ASN_XNAP_ServedCells_E_UTRA_t	 ServedCellsEUTRA;
               ASN_XNAP_InterfaceInstanceIndication_t InterfaceInstanceIndication;
           } choice;

           /* Context for parsing across buffer boundaries */
           asn_struct_ctx_t _asn_ctx;
       } value;

       /* Context for parsing across buffer boundaries */
       asn_struct_ctx_t _asn_ctx;
   } ASN_XNAP_XnSetupRequestIEs_t;

   /* Implementation */
   extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Field_5957P0;
   extern asn_SEQUENCE_specifics_t asn_SPC_ProtocolIE_Field_5957P0_specs_1;
   extern asn_TYPE_member_t asn_MBR_ProtocolIE_Field_5957P0_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolIE_Field_H_ */
#include <asn_internal.h>