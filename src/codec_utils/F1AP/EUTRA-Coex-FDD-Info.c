/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1.asn1"
 * 	`asn1c -D ./out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "EUTRA-Coex-FDD-Info.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_EUTRA_Coex_FDD_Info_1[] = {
	{ ATF_POINTER, 1, offsetof(struct EUTRA_Coex_FDD_Info, uL_EARFCN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtendedEARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uL-EARFCN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRA_Coex_FDD_Info, dL_EARFCN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtendedEARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dL-EARFCN"
		},
	{ ATF_POINTER, 1, offsetof(struct EUTRA_Coex_FDD_Info, uL_Transmission_Bandwidth),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_Transmission_Bandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uL-Transmission-Bandwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRA_Coex_FDD_Info, dL_Transmission_Bandwidth),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_Transmission_Bandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dL-Transmission-Bandwidth"
		},
	{ ATF_POINTER, 1, offsetof(struct EUTRA_Coex_FDD_Info, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_4624P42,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_EUTRA_Coex_FDD_Info_oms_1[] = { 0, 2, 4 };
static const ber_tlv_tag_t asn_DEF_EUTRA_Coex_FDD_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EUTRA_Coex_FDD_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uL-EARFCN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dL-EARFCN */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uL-Transmission-Bandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dL-Transmission-Bandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_EUTRA_Coex_FDD_Info_specs_1 = {
	sizeof(struct EUTRA_Coex_FDD_Info),
	offsetof(struct EUTRA_Coex_FDD_Info, _asn_ctx),
	asn_MAP_EUTRA_Coex_FDD_Info_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_EUTRA_Coex_FDD_Info_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EUTRA_Coex_FDD_Info = {
	"EUTRA-Coex-FDD-Info",
	"EUTRA-Coex-FDD-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_EUTRA_Coex_FDD_Info_tags_1,
	sizeof(asn_DEF_EUTRA_Coex_FDD_Info_tags_1)
		/sizeof(asn_DEF_EUTRA_Coex_FDD_Info_tags_1[0]), /* 1 */
	asn_DEF_EUTRA_Coex_FDD_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_EUTRA_Coex_FDD_Info_tags_1)
		/sizeof(asn_DEF_EUTRA_Coex_FDD_Info_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EUTRA_Coex_FDD_Info_1,
	5,	/* Elements count */
	&asn_SPC_EUTRA_Coex_FDD_Info_specs_1	/* Additional specs */
};

