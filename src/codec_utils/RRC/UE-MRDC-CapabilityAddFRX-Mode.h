/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_UE_MRDC_CapabilityAddFRX_Mode_H_
#define	_UE_MRDC_CapabilityAddFRX_Mode_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasAndMobParametersMRDC-FRX-Diff.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-MRDC-CapabilityAddFRX-Mode */
typedef struct UE_MRDC_CapabilityAddFRX_Mode {
	MeasAndMobParametersMRDC_FRX_Diff_t	 measAndMobParametersMRDC_FRX_Diff;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_MRDC_CapabilityAddFRX_Mode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_MRDC_CapabilityAddFRX_Mode;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_MRDC_CapabilityAddFRX_Mode_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_MRDC_CapabilityAddFRX_Mode_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_MRDC_CapabilityAddFRX_Mode_H_ */
#include <asn_internal.h>
