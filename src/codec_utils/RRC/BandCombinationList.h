/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_BandCombinationList_H_
#define	_BandCombinationList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandCombination;

/* BandCombinationList */
typedef struct BandCombinationList {
	A_SEQUENCE_OF(struct BandCombination) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationList;
extern asn_SET_OF_specifics_t asn_SPC_BandCombinationList_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombinationList_1[1];
extern asn_per_constraints_t asn_PER_type_BandCombinationList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _BandCombinationList_H_ */
#include <asn_internal.h>
