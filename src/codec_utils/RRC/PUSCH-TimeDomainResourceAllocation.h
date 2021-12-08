/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_PUSCH_TimeDomainResourceAllocation_H_
#define	_PUSCH_TimeDomainResourceAllocation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_TimeDomainResourceAllocation__mappingType {
	PUSCH_TimeDomainResourceAllocation__mappingType_typeA	= 0,
	PUSCH_TimeDomainResourceAllocation__mappingType_typeB	= 1
} e_PUSCH_TimeDomainResourceAllocation__mappingType;

/* PUSCH-TimeDomainResourceAllocation */
typedef struct PUSCH_TimeDomainResourceAllocation {
	long	*k2;	/* OPTIONAL */
	long	 mappingType;
	long	 startSymbolAndLength;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_TimeDomainResourceAllocation_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mappingType_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_TimeDomainResourceAllocation;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_TimeDomainResourceAllocation_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_TimeDomainResourceAllocation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_TimeDomainResourceAllocation_H_ */
#include <asn_internal.h>
