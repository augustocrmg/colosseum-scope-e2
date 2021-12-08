/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_SchedulingRequestConfig_H_
#define	_SchedulingRequestConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "SchedulingRequestId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SchedulingRequestToAddMod;

/* SchedulingRequestConfig */
typedef struct SchedulingRequestConfig {
	struct SchedulingRequestConfig__schedulingRequestToAddModList {
		A_SEQUENCE_OF(struct SchedulingRequestToAddMod) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *schedulingRequestToAddModList;
	struct SchedulingRequestConfig__schedulingRequestToReleaseList {
		A_SEQUENCE_OF(SchedulingRequestId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *schedulingRequestToReleaseList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingRequestConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingRequestConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_SchedulingRequestConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_SchedulingRequestConfig_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingRequestConfig_H_ */
#include <asn_internal.h>
