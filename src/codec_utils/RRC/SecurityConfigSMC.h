/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_SecurityConfigSMC_H_
#define	_SecurityConfigSMC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SecurityAlgorithmConfig.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SecurityConfigSMC */
typedef struct SecurityConfigSMC {
	SecurityAlgorithmConfig_t	 securityAlgorithmConfig;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityConfigSMC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityConfigSMC;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityConfigSMC_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityConfigSMC_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityConfigSMC_H_ */
#include <asn_internal.h>
