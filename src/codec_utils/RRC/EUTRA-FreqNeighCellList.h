/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_EUTRA_FreqNeighCellList_H_
#define	_EUTRA_FreqNeighCellList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EUTRA_FreqNeighCellInfo;

/* EUTRA-FreqNeighCellList */
typedef struct EUTRA_FreqNeighCellList {
	A_SEQUENCE_OF(struct EUTRA_FreqNeighCellInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_FreqNeighCellList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_FreqNeighCellList;
extern asn_SET_OF_specifics_t asn_SPC_EUTRA_FreqNeighCellList_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_FreqNeighCellList_1[1];
extern asn_per_constraints_t asn_PER_type_EUTRA_FreqNeighCellList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_FreqNeighCellList_H_ */
#include <asn_internal.h>
