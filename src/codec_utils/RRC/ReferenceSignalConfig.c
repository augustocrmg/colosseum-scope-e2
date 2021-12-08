/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "ReferenceSignalConfig.h"

#include "SSB-ConfigMobility.h"
#include "CSI-RS-ResourceConfigMobility.h"
static asn_oer_constraints_t asn_OER_type_csi_rs_ResourceConfigMobility_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_csi_rs_ResourceConfigMobility_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_csi_rs_ResourceConfigMobility_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceSignalConfig__csi_rs_ResourceConfigMobility, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct ReferenceSignalConfig__csi_rs_ResourceConfigMobility, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ResourceConfigMobility,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_csi_rs_ResourceConfigMobility_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_csi_rs_ResourceConfigMobility_specs_3 = {
	sizeof(struct ReferenceSignalConfig__csi_rs_ResourceConfigMobility),
	offsetof(struct ReferenceSignalConfig__csi_rs_ResourceConfigMobility, _asn_ctx),
	offsetof(struct ReferenceSignalConfig__csi_rs_ResourceConfigMobility, present),
	sizeof(((struct ReferenceSignalConfig__csi_rs_ResourceConfigMobility *)0)->present),
	asn_MAP_csi_rs_ResourceConfigMobility_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_rs_ResourceConfigMobility_3 = {
	"csi-rs-ResourceConfigMobility",
	"csi-rs-ResourceConfigMobility",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_csi_rs_ResourceConfigMobility_constr_3, &asn_PER_type_csi_rs_ResourceConfigMobility_constr_3, CHOICE_constraint },
	asn_MBR_csi_rs_ResourceConfigMobility_3,
	2,	/* Elements count */
	&asn_SPC_csi_rs_ResourceConfigMobility_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ReferenceSignalConfig_1[] = {
	{ ATF_POINTER, 2, offsetof(struct ReferenceSignalConfig, ssb_ConfigMobility),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_ConfigMobility,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-ConfigMobility"
		},
	{ ATF_POINTER, 1, offsetof(struct ReferenceSignalConfig, csi_rs_ResourceConfigMobility),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_csi_rs_ResourceConfigMobility_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-rs-ResourceConfigMobility"
		},
};
static const int asn_MAP_ReferenceSignalConfig_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ReferenceSignalConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReferenceSignalConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-ConfigMobility */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* csi-rs-ResourceConfigMobility */
};
asn_SEQUENCE_specifics_t asn_SPC_ReferenceSignalConfig_specs_1 = {
	sizeof(struct ReferenceSignalConfig),
	offsetof(struct ReferenceSignalConfig, _asn_ctx),
	asn_MAP_ReferenceSignalConfig_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ReferenceSignalConfig_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReferenceSignalConfig = {
	"ReferenceSignalConfig",
	"ReferenceSignalConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_ReferenceSignalConfig_tags_1,
	sizeof(asn_DEF_ReferenceSignalConfig_tags_1)
		/sizeof(asn_DEF_ReferenceSignalConfig_tags_1[0]), /* 1 */
	asn_DEF_ReferenceSignalConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReferenceSignalConfig_tags_1)
		/sizeof(asn_DEF_ReferenceSignalConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReferenceSignalConfig_1,
	2,	/* Elements count */
	&asn_SPC_ReferenceSignalConfig_specs_1	/* Additional specs */
};

