/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_UCI_OnPUSCH_H_
#define	_UCI_OnPUSCH_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UCI_OnPUSCH__betaOffsets_PR {
	UCI_OnPUSCH__betaOffsets_PR_NOTHING,	/* No components present */
	UCI_OnPUSCH__betaOffsets_PR_dynamic,
	UCI_OnPUSCH__betaOffsets_PR_semiStatic
} UCI_OnPUSCH__betaOffsets_PR;
typedef enum UCI_OnPUSCH__scaling {
	UCI_OnPUSCH__scaling_f0p5	= 0,
	UCI_OnPUSCH__scaling_f0p65	= 1,
	UCI_OnPUSCH__scaling_f0p8	= 2,
	UCI_OnPUSCH__scaling_f1	= 3
} e_UCI_OnPUSCH__scaling;

/* Forward declarations */
struct BetaOffsets;

/* UCI-OnPUSCH */
typedef struct UCI_OnPUSCH {
	struct UCI_OnPUSCH__betaOffsets {
		UCI_OnPUSCH__betaOffsets_PR present;
		union UCI_OnPUSCH__betaOffsets_u {
			struct UCI_OnPUSCH__betaOffsets__dynamic {
				A_SEQUENCE_OF(struct BetaOffsets) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *dynamic;
			struct BetaOffsets	*semiStatic;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *betaOffsets;
	long	 scaling;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UCI_OnPUSCH_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_scaling_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UCI_OnPUSCH;
extern asn_SEQUENCE_specifics_t asn_SPC_UCI_OnPUSCH_specs_1;
extern asn_TYPE_member_t asn_MBR_UCI_OnPUSCH_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UCI_OnPUSCH_H_ */
#include <asn_internal.h>
