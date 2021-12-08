/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_RF_ParametersMRDC_H_
#define	_RF_ParametersMRDC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandCombinationList;
struct FreqBandList;

/* RF-ParametersMRDC */
typedef struct RF_ParametersMRDC {
	struct BandCombinationList	*supportedBandCombinationList;	/* OPTIONAL */
	struct FreqBandList	*appliedFreqBandListFilter;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_ParametersMRDC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_ParametersMRDC;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_ParametersMRDC_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_ParametersMRDC_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RF_ParametersMRDC_H_ */
#include <asn_internal.h>
