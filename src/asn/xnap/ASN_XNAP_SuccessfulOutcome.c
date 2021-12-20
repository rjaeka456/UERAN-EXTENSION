/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-PDU-Descriptions"
 * 	found in "./xnap-15.5.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D xnap`
 */

#include "ASN_XNAP_SuccessfulOutcome.h"

static const long asn_VAL_1_id_handoverPreparation = 0;
static const long asn_VAL_1_reject = 0;
static const long asn_VAL_2_id_retrieveUEContext = 3;
static const long asn_VAL_2_reject = 0;
static const long asn_VAL_3_id_sNGRANnodeAdditionPreparation = 7;
static const long asn_VAL_3_reject = 0;
static const long asn_VAL_4_id_mNGRANnodeinitiatedSNGRANnodeModificationPreparation = 9;
static const long asn_VAL_4_reject = 0;
static const long asn_VAL_5_id_sNGRANnodeinitiatedSNGRANnodeModificationPreparation = 10;
static const long asn_VAL_5_reject = 0;
static const long asn_VAL_6_id_mNGRANnodeinitiatedSNGRANnodeRelease = 11;
static const long asn_VAL_6_reject = 0;
static const long asn_VAL_7_id_sNGRANnodeinitiatedSNGRANnodeRelease = 12;
static const long asn_VAL_7_reject = 0;
static const long asn_VAL_8_id_sNGRANnodeChange = 14;
static const long asn_VAL_8_reject = 0;
static const long asn_VAL_9_id_xnRemoval = 16;
static const long asn_VAL_9_reject = 0;
static const long asn_VAL_10_id_xnSetup = 17;
static const long asn_VAL_10_reject = 0;
static const long asn_VAL_11_id_nGRANnodeConfigurationUpdate = 18;
static const long asn_VAL_11_reject = 0;
static const long asn_VAL_12_id_e_UTRA_NR_CellResourceCoordination = 25;
static const long asn_VAL_12_reject = 0;
static const long asn_VAL_13_id_cellActivation = 19;
static const long asn_VAL_13_reject = 0;
static const long asn_VAL_14_id_reset = 20;
static const long asn_VAL_14_reject = 0;
static const long asn_VAL_15_id_sNStatusTransfer = 1;
static const long asn_VAL_15_ignore = 1;
static const long asn_VAL_16_id_handoverCancel = 2;
static const long asn_VAL_16_ignore = 1;
static const long asn_VAL_17_id_rANPaging = 4;
static const long asn_VAL_17_reject = 0;
static const long asn_VAL_18_id_xnUAddressIndication = 5;
static const long asn_VAL_18_reject = 0;
static const long asn_VAL_19_id_uEContextRelease = 6;
static const long asn_VAL_19_reject = 0;
static const long asn_VAL_20_id_sNGRANnodeReconfigurationCompletion = 8;
static const long asn_VAL_20_reject = 0;
static const long asn_VAL_21_id_sNGRANnodeCounterCheck = 13;
static const long asn_VAL_21_reject = 0;
static const long asn_VAL_22_id_rRCTransfer = 15;
static const long asn_VAL_22_reject = 0;
static const long asn_VAL_23_id_errorIndication = 21;
static const long asn_VAL_23_ignore = 1;
static const long asn_VAL_24_id_privateMessage = 22;
static const long asn_VAL_24_ignore = 1;
static const long asn_VAL_25_id_notificationControl = 23;
static const long asn_VAL_25_ignore = 1;
static const long asn_VAL_26_id_activityNotification = 24;
static const long asn_VAL_26_ignore = 1;
static const long asn_VAL_27_id_secondaryRATDataUsageReport = 26;
static const long asn_VAL_27_reject = 0;
static const asn_ioc_cell_t asn_IOS_XNAP_ELEMENTARY_PROCEDURES_1_rows[] = {
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_HandoverRequest },
//	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_HandoverRequestAcknowledge },
//	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_HandoverPreparationFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_1_id_handoverPreparation },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_1_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_RetrieveUEContextRequest },
//	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RetrieveUEContextResponse },
//	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RetrieveUEContextFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_2_id_retrieveUEContext },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_2_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_SNodeAdditionRequest },
//	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_SNodeAdditionRequestAcknowledge },
//	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_SNodeAdditionRequestReject },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_3_id_sNGRANnodeAdditionPreparation },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_3_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_SNodeModificationRequest },
//	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_SNodeModificationRequestAcknowledge },
//	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_SNodeModificationRequestReject },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_4_id_mNGRANnodeinitiatedSNGRANnodeModificationPreparation },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_4_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_SNodeModificationRequired },
//	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_SNodeModificationConfirm },
//	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_SNodeModificationRefuse },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_5_id_sNGRANnodeinitiatedSNGRANnodeModificationPreparation },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_5_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_SNodeReleaseRequest },
//	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_SNodeReleaseRequestAcknowledge },
//	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_SNodeReleaseReject },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_6_id_mNGRANnodeinitiatedSNGRANnodeRelease },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_6_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_SNodeReleaseRequired },
//	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_SNodeReleaseConfirm },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_7_id_sNGRANnodeinitiatedSNGRANnodeRelease },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_7_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_SNodeChangeRequired },
//	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_SNodeChangeConfirm },
//	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_SNodeChangeRefuse },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_8_id_sNGRANnodeChange },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_8_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_XnRemovalRequest },
//	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_XnRemovalResponse },
//	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_XnRemovalFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_9_id_xnRemoval },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_9_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_XnSetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_XnSetupResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_XnSetupFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_10_id_xnSetup },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_10_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGRANNodeConfigurationUpdate },
//	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGRANNodeConfigurationUpdateAcknowledge },
//	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_NGRANNodeConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_11_id_nGRANnodeConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_11_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_E_UTRA_NR_CellResourceCoordinationRequest },
//	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_E_UTRA_NR_CellResourceCoordinationResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_12_id_e_UTRA_NR_CellResourceCoordination },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_12_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_CellActivationRequest },
//	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_CellActivationResponse },
//	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_CellActivationFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_13_id_cellActivation },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_13_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_ResetRequest },
//	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_ResetResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_14_id_reset },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_14_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_SNStatusTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_15_id_sNStatusTransfer },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_15_ignore },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_HandoverCancel },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_16_id_handoverCancel },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_16_ignore },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_RANPaging },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_17_id_rANPaging },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_17_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_XnUAddressIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_18_id_xnUAddressIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_18_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_UEContextRelease },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_19_id_uEContextRelease },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_19_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_SNodeReconfigurationComplete },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_20_id_sNGRANnodeReconfigurationCompletion },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_20_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_SNodeCounterCheckRequest },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_21_id_sNGRANnodeCounterCheck },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_21_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_RRCTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_22_id_rRCTransfer },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_22_reject },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_ErrorIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_23_id_errorIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_23_ignore },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_PrivateMessage },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_24_id_privateMessage },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_24_ignore },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_NotificationControlIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_25_id_notificationControl },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_25_ignore },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_ActivityNotification },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_26_id_activityNotification },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_26_ignore },
//	{ "&InitiatingMessage", aioc__type, &asn_DEF_SecondaryRATDataUsageReport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_27_id_secondaryRATDataUsageReport },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_27_reject }
};
static const asn_ioc_set_t asn_IOS_XNAP_ELEMENTARY_PROCEDURES_1[] = {
	27, 5, asn_IOS_XNAP_ELEMENTARY_PROCEDURES_1_rows
};
static int
memb_procedureCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_type_selector_result_t
select_SuccessfulOutcome_criticality_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_XNAP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 4; /* &criticality */
	size_t row;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct SuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = row + 1;
	        break;
	    }
	}
	
	return result;
}

static int
memb_criticality_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_type_selector_result_t
select_SuccessfulOutcome_value_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_XNAP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 1; /* &SuccessfulOutcome */
	size_t row;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct SuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = row + 1;
	        break;
	    }
	}
	
	return result;
}

static int
memb_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_procedureCode_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_criticality_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_value_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_value_4[] = {
//	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.HandoverRequestAcknowledge),
//		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
//		0,
//		&asn_DEF_HandoverRequestAcknowledge,
//		0,
//		{ 0, 0, 0 },
//		0, 0, /* No default value */
//		"HandoverRequestAcknowledge"
//		},
//	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RetrieveUEContextResponse),
//		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
//		0,
//		&asn_DEF_RetrieveUEContextResponse,
//		0,
//		{ 0, 0, 0 },
//		0, 0, /* No default value */
//		"RetrieveUEContextResponse"
//		},
//	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.SNodeAdditionRequestAcknowledge),
//		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
//		0,
//		&asn_DEF_SNodeAdditionRequestAcknowledge,
//		0,
//		{ 0, 0, 0 },
//		0, 0, /* No default value */
//		"SNodeAdditionRequestAcknowledge"
//		},
//	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.SNodeModificationRequestAcknowledge),
//		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
//		0,
//		&asn_DEF_SNodeModificationRequestAcknowledge,
//		0,
//		{ 0, 0, 0 },
//		0, 0, /* No default value */
//		"SNodeModificationRequestAcknowledge"
//		},
//	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.SNodeModificationConfirm),
//		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
//		0,
//		&asn_DEF_SNodeModificationConfirm,
//		0,
//		{ 0, 0, 0 },
//		0, 0, /* No default value */
//		"SNodeModificationConfirm"
//		},
//	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.SNodeReleaseRequestAcknowledge),
//		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
//		0,
//		&asn_DEF_SNodeReleaseRequestAcknowledge,
//		0,
//		{ 0, 0, 0 },
//		0, 0, /* No default value */
//		"SNodeReleaseRequestAcknowledge"
//		},
//	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.SNodeReleaseConfirm),
//		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
//		0,
//		&asn_DEF_SNodeReleaseConfirm,
//		0,
//		{ 0, 0, 0 },
//		0, 0, /* No default value */
//		"SNodeReleaseConfirm"
//		},
//	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.SNodeChangeConfirm),
//		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
//		0,
//		&asn_DEF_SNodeChangeConfirm,
//		0,
//		{ 0, 0, 0 },
//		0, 0, /* No default value */
//		"SNodeChangeConfirm"
//		},
//	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.XnRemovalResponse),
//		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
//		0,
//		&asn_DEF_XnRemovalResponse,
//		0,
//		{ 0, 0, 0 },
//		0, 0, /* No default value */
//		"XnRemovalResponse"
//		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.XnSetupResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_XnSetupResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"XnSetupResponse"
		},
//	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.NGRANNodeConfigurationUpdateAcknowledge),
//		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
//		0,
//		&asn_DEF_NGRANNodeConfigurationUpdateAcknowledge,
//		0,
//		{ 0, 0, 0 },
//		0, 0, /* No default value */
//		"NGRANNodeConfigurationUpdateAcknowledge"
//		},
//	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.E_UTRA_NR_CellResourceCoordinationResponse),
//		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
//		0,
//		&asn_DEF_E_UTRA_NR_CellResourceCoordinationResponse,
//		0,
//		{ 0, 0, 0 },
//		0, 0, /* No default value */
//		"E-UTRA-NR-CellResourceCoordinationResponse"
//		},
//	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.CellActivationResponse),
//		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
//		0,
//		&asn_DEF_CellActivationResponse,
//		0,
//		{ 0, 0, 0 },
//		0, 0, /* No default value */
//		"CellActivationResponse"
//		},
//	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.ResetResponse),
//		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
//		0,
//		&asn_DEF_ResetResponse,
//		0,
//		{ 0, 0, 0 },
//		0, 0, /* No default value */
//		"ResetResponse"
//		},
};
static const asn_TYPE_tag2member_t asn_MAP_value_tag2el_4[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 13 }, /* HandoverRequestAcknowledge */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 12 }, /* RetrieveUEContextResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 11 }, /* SNodeAdditionRequestAcknowledge */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 10 }, /* SNodeModificationRequestAcknowledge */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4, 9 }, /* SNodeModificationConfirm */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -5, 8 }, /* SNodeReleaseRequestAcknowledge */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 6, -6, 7 }, /* SNodeReleaseConfirm */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 7, -7, 6 }, /* SNodeChangeConfirm */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 8, -8, 5 }, /* XnRemovalResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 9, -9, 4 }, /* XnSetupResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 10, -10, 3 }, /* NGRANNodeConfigurationUpdateAcknowledge */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 11, -11, 2 }, /* E-UTRA-NR-CellResourceCoordinationResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 12, -12, 1 }, /* CellActivationResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 13, -13, 0 } /* ResetResponse */
};
static asn_CHOICE_specifics_t asn_SPC_value_specs_4 = {
	sizeof(struct SuccessfulOutcome__value),
	offsetof(struct SuccessfulOutcome__value, _asn_ctx),
	offsetof(struct SuccessfulOutcome__value, present),
	sizeof(((struct SuccessfulOutcome__value *)0)->present),
	asn_MAP_value_tag2el_4,
	14,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_value_4 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, OPEN_TYPE_constraint },
	asn_MBR_value_4,
	14,	/* Elements count */
	&asn_SPC_value_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SuccessfulOutcome_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProcedureCode,
		0,
		{ 0, &asn_PER_memb_procedureCode_constr_2,  memb_procedureCode_constraint_1 },
		0, 0, /* No default value */
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Criticality,
		select_SuccessfulOutcome_criticality_type,
		{ 0, &asn_PER_memb_criticality_constr_3,  memb_criticality_constraint_1 },
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_value_4,
		select_SuccessfulOutcome_value_type,
		{ 0, &asn_PER_memb_value_constr_4,  memb_value_constraint_1 },
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_SuccessfulOutcome_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SuccessfulOutcome_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_SuccessfulOutcome_specs_1 = {
	sizeof(struct SuccessfulOutcome),
	offsetof(struct SuccessfulOutcome, _asn_ctx),
	asn_MAP_SuccessfulOutcome_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SuccessfulOutcome = {
	"SuccessfulOutcome",
	"SuccessfulOutcome",
	&asn_OP_SEQUENCE,
	asn_DEF_SuccessfulOutcome_tags_1,
	sizeof(asn_DEF_SuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_SuccessfulOutcome_tags_1[0]), /* 1 */
	asn_DEF_SuccessfulOutcome_tags_1,	/* Same as above */
	sizeof(asn_DEF_SuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_SuccessfulOutcome_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SuccessfulOutcome_1,
	3,	/* Elements count */
	&asn_SPC_SuccessfulOutcome_specs_1	/* Additional specs */
};

