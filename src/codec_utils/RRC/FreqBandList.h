/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_FreqBandList_H_
#define	_FreqBandList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FreqBandInformation;

/* FreqBandList */
typedef struct FreqBandList {
	A_SEQUENCE_OF(struct FreqBandInformation) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqBandList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqBandList;
extern asn_SET_OF_specifics_t asn_SPC_FreqBandList_specs_1;
extern asn_TYPE_member_t asn_MBR_FreqBandList_1[1];
extern asn_per_constraints_t asn_PER_type_FreqBandList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _FreqBandList_H_ */
#include <asn_internal.h>
