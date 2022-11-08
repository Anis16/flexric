/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm-kpmv2.02.asn1"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D asn`
 */

#include "E2SM-KPM-IndicationMessage.h"

#include "E2SM-KPM-IndicationMessage-Format1.h"
#include "E2SM-KPM-IndicationMessage-Format2.h"
#include "E2SM-KPM-IndicationMessage-Format3.h"
static asn_per_constraints_t asn_PER_type_indicationMessage_formats_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_indicationMessage_formats_2[] = {
	{ ATF_POINTER, 0, offsetof(struct E2SM_KPM_IndicationMessage__indicationMessage_formats, choice.indicationMessage_Format1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_KPM_IndicationMessage_Format1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"indicationMessage-Format1"
		},
	{ ATF_POINTER, 0, offsetof(struct E2SM_KPM_IndicationMessage__indicationMessage_formats, choice.indicationMessage_Format2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_KPM_IndicationMessage_Format2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"indicationMessage-Format2"
		},
	{ ATF_POINTER, 0, offsetof(struct E2SM_KPM_IndicationMessage__indicationMessage_formats, choice.indicationMessage_Format3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_KPM_IndicationMessage_Format3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"indicationMessage-Format3"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_indicationMessage_formats_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* indicationMessage-Format1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* indicationMessage-Format2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* indicationMessage-Format3 */
};
static asn_CHOICE_specifics_t asn_SPC_indicationMessage_formats_specs_2 = {
	sizeof(struct E2SM_KPM_IndicationMessage__indicationMessage_formats),
	offsetof(struct E2SM_KPM_IndicationMessage__indicationMessage_formats, _asn_ctx),
	offsetof(struct E2SM_KPM_IndicationMessage__indicationMessage_formats, present),
	sizeof(((struct E2SM_KPM_IndicationMessage__indicationMessage_formats *)0)->present),
	asn_MAP_indicationMessage_formats_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_indicationMessage_formats_2 = {
	"indicationMessage-formats",
	"indicationMessage-formats",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_indicationMessage_formats_constr_2, CHOICE_constraint },
	asn_MBR_indicationMessage_formats_2,
	3,	/* Elements count */
	&asn_SPC_indicationMessage_formats_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_E2SM_KPM_IndicationMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_IndicationMessage, indicationMessage_formats),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_indicationMessage_formats_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"indicationMessage-formats"
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_KPM_IndicationMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_KPM_IndicationMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* indicationMessage-formats */
};
static asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_IndicationMessage_specs_1 = {
	sizeof(struct E2SM_KPM_IndicationMessage),
	offsetof(struct E2SM_KPM_IndicationMessage, _asn_ctx),
	asn_MAP_E2SM_KPM_IndicationMessage_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_IndicationMessage = {
	"E2SM-KPM-IndicationMessage",
	"E2SM-KPM-IndicationMessage",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_KPM_IndicationMessage_tags_1,
	sizeof(asn_DEF_E2SM_KPM_IndicationMessage_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_IndicationMessage_tags_1[0]), /* 1 */
	asn_DEF_E2SM_KPM_IndicationMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_KPM_IndicationMessage_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_IndicationMessage_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_KPM_IndicationMessage_1,
	1,	/* Elements count */
	&asn_SPC_E2SM_KPM_IndicationMessage_specs_1	/* Additional specs */
};
