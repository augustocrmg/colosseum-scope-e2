/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "PDSCH-ServingCellConfig.h"

#include "PDSCH-CodeBlockGroupTransmission.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_maxMIMO_Layers_constraint_18(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_codeBlockGroupTransmission_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_codeBlockGroupTransmission_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_xOverhead_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_xOverhead_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_nrofHARQ_ProcessesForPDSCH_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_nrofHARQ_ProcessesForPDSCH_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxMIMO_Layers_constr_19 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxMIMO_Layers_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_codeBlockGroupTransmission_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_ServingCellConfig__codeBlockGroupTransmission, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct PDSCH_ServingCellConfig__codeBlockGroupTransmission, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_CodeBlockGroupTransmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_codeBlockGroupTransmission_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_codeBlockGroupTransmission_specs_2 = {
	sizeof(struct PDSCH_ServingCellConfig__codeBlockGroupTransmission),
	offsetof(struct PDSCH_ServingCellConfig__codeBlockGroupTransmission, _asn_ctx),
	offsetof(struct PDSCH_ServingCellConfig__codeBlockGroupTransmission, present),
	sizeof(((struct PDSCH_ServingCellConfig__codeBlockGroupTransmission *)0)->present),
	asn_MAP_codeBlockGroupTransmission_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_codeBlockGroupTransmission_2 = {
	"codeBlockGroupTransmission",
	"codeBlockGroupTransmission",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_codeBlockGroupTransmission_constr_2, &asn_PER_type_codeBlockGroupTransmission_constr_2, CHOICE_constraint },
	asn_MBR_codeBlockGroupTransmission_2,
	2,	/* Elements count */
	&asn_SPC_codeBlockGroupTransmission_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_xOverhead_value2enum_5[] = {
	{ 0,	4,	"xOh6" },
	{ 1,	5,	"xOh12" },
	{ 2,	5,	"xOh18" }
};
static const unsigned int asn_MAP_xOverhead_enum2value_5[] = {
	1,	/* xOh12(1) */
	2,	/* xOh18(2) */
	0	/* xOh6(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_xOverhead_specs_5 = {
	asn_MAP_xOverhead_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_xOverhead_enum2value_5,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_xOverhead_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_xOverhead_5 = {
	"xOverhead",
	"xOverhead",
	&asn_OP_NativeEnumerated,
	asn_DEF_xOverhead_tags_5,
	sizeof(asn_DEF_xOverhead_tags_5)
		/sizeof(asn_DEF_xOverhead_tags_5[0]) - 1, /* 1 */
	asn_DEF_xOverhead_tags_5,	/* Same as above */
	sizeof(asn_DEF_xOverhead_tags_5)
		/sizeof(asn_DEF_xOverhead_tags_5[0]), /* 2 */
	{ &asn_OER_type_xOverhead_constr_5, &asn_PER_type_xOverhead_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_xOverhead_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nrofHARQ_ProcessesForPDSCH_value2enum_9[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n6" },
	{ 3,	3,	"n10" },
	{ 4,	3,	"n12" },
	{ 5,	3,	"n16" }
};
static const unsigned int asn_MAP_nrofHARQ_ProcessesForPDSCH_enum2value_9[] = {
	3,	/* n10(3) */
	4,	/* n12(4) */
	5,	/* n16(5) */
	0,	/* n2(0) */
	1,	/* n4(1) */
	2	/* n6(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_nrofHARQ_ProcessesForPDSCH_specs_9 = {
	asn_MAP_nrofHARQ_ProcessesForPDSCH_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_nrofHARQ_ProcessesForPDSCH_enum2value_9,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nrofHARQ_ProcessesForPDSCH_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nrofHARQ_ProcessesForPDSCH_9 = {
	"nrofHARQ-ProcessesForPDSCH",
	"nrofHARQ-ProcessesForPDSCH",
	&asn_OP_NativeEnumerated,
	asn_DEF_nrofHARQ_ProcessesForPDSCH_tags_9,
	sizeof(asn_DEF_nrofHARQ_ProcessesForPDSCH_tags_9)
		/sizeof(asn_DEF_nrofHARQ_ProcessesForPDSCH_tags_9[0]) - 1, /* 1 */
	asn_DEF_nrofHARQ_ProcessesForPDSCH_tags_9,	/* Same as above */
	sizeof(asn_DEF_nrofHARQ_ProcessesForPDSCH_tags_9)
		/sizeof(asn_DEF_nrofHARQ_ProcessesForPDSCH_tags_9[0]), /* 2 */
	{ &asn_OER_type_nrofHARQ_ProcessesForPDSCH_constr_9, &asn_PER_type_nrofHARQ_ProcessesForPDSCH_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nrofHARQ_ProcessesForPDSCH_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_18[] = {
	{ ATF_POINTER, 2, offsetof(struct PDSCH_ServingCellConfig__ext1, maxMIMO_Layers),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxMIMO_Layers_constr_19, &asn_PER_memb_maxMIMO_Layers_constr_19,  memb_maxMIMO_Layers_constraint_18 },
		0, 0, /* No default value */
		"maxMIMO-Layers"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_ServingCellConfig__ext1, processingType2Enabled),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"processingType2Enabled"
		},
};
static const int asn_MAP_ext1_oms_18[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxMIMO-Layers */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* processingType2Enabled */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_18 = {
	sizeof(struct PDSCH_ServingCellConfig__ext1),
	offsetof(struct PDSCH_ServingCellConfig__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_18,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_18,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_18 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_18,
	sizeof(asn_DEF_ext1_tags_18)
		/sizeof(asn_DEF_ext1_tags_18[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_18,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_18)
		/sizeof(asn_DEF_ext1_tags_18[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_18,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_18	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDSCH_ServingCellConfig_1[] = {
	{ ATF_POINTER, 5, offsetof(struct PDSCH_ServingCellConfig, codeBlockGroupTransmission),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_codeBlockGroupTransmission_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"codeBlockGroupTransmission"
		},
	{ ATF_POINTER, 4, offsetof(struct PDSCH_ServingCellConfig, xOverhead),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_xOverhead_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"xOverhead"
		},
	{ ATF_POINTER, 3, offsetof(struct PDSCH_ServingCellConfig, nrofHARQ_ProcessesForPDSCH),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nrofHARQ_ProcessesForPDSCH_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrofHARQ-ProcessesForPDSCH"
		},
	{ ATF_POINTER, 2, offsetof(struct PDSCH_ServingCellConfig, pucch_Cell),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-Cell"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_ServingCellConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_ext1_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_PDSCH_ServingCellConfig_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_PDSCH_ServingCellConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDSCH_ServingCellConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* codeBlockGroupTransmission */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* xOverhead */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nrofHARQ-ProcessesForPDSCH */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pucch-Cell */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ServingCellConfig_specs_1 = {
	sizeof(struct PDSCH_ServingCellConfig),
	offsetof(struct PDSCH_ServingCellConfig, _asn_ctx),
	asn_MAP_PDSCH_ServingCellConfig_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_PDSCH_ServingCellConfig_oms_1,	/* Optional members */
	4, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDSCH_ServingCellConfig = {
	"PDSCH-ServingCellConfig",
	"PDSCH-ServingCellConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_PDSCH_ServingCellConfig_tags_1,
	sizeof(asn_DEF_PDSCH_ServingCellConfig_tags_1)
		/sizeof(asn_DEF_PDSCH_ServingCellConfig_tags_1[0]), /* 1 */
	asn_DEF_PDSCH_ServingCellConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSCH_ServingCellConfig_tags_1)
		/sizeof(asn_DEF_PDSCH_ServingCellConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDSCH_ServingCellConfig_1,
	5,	/* Elements count */
	&asn_SPC_PDSCH_ServingCellConfig_specs_1	/* Additional specs */
};

