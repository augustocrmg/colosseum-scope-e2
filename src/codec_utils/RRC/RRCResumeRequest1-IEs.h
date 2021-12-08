/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_RRCResumeRequest1_IEs_H_
#define	_RRCResumeRequest1_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "I-RNTI-Value.h"
#include <BIT_STRING.h>
#include "ResumeCause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRCResumeRequest1-IEs */
typedef struct RRCResumeRequest1_IEs {
	I_RNTI_Value_t	 resumeIdentity;
	BIT_STRING_t	 resumeMAC_I;
	ResumeCause_t	 resumeCause;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCResumeRequest1_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCResumeRequest1_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCResumeRequest1_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCResumeRequest1_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCResumeRequest1_IEs_H_ */
#include <asn_internal.h>
