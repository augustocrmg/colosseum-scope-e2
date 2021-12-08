/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_PLMN_RAN_AreaCell_H_
#define	_PLMN_RAN_AreaCell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellIdentity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_IdentitY;

/* PLMN-RAN-AreaCell */
typedef struct PLMN_RAN_AreaCell {
	struct PLMN_IdentitY	*plmn_Identity;	/* OPTIONAL */
	struct PLMN_RAN_AreaCell__ran_AreaCells {
		A_SEQUENCE_OF(CellIdentity_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ran_AreaCells;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_RAN_AreaCell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_RAN_AreaCell;
extern asn_SEQUENCE_specifics_t asn_SPC_PLMN_RAN_AreaCell_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMN_RAN_AreaCell_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PLMN_RAN_AreaCell_H_ */
#include <asn_internal.h>
