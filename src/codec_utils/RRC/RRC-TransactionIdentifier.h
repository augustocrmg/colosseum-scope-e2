/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_RRC_TransactionIdentifier_H_
#define	_RRC_TransactionIdentifier_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRC-TransactionIdentifier */
typedef long	 RRC_TransactionIdentifier_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RRC_TransactionIdentifier_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RRC_TransactionIdentifier;
asn_struct_free_f RRC_TransactionIdentifier_free;
asn_struct_print_f RRC_TransactionIdentifier_print;
asn_constr_check_f RRC_TransactionIdentifier_constraint;
ber_type_decoder_f RRC_TransactionIdentifier_decode_ber;
der_type_encoder_f RRC_TransactionIdentifier_encode_der;
xer_type_decoder_f RRC_TransactionIdentifier_decode_xer;
xer_type_encoder_f RRC_TransactionIdentifier_encode_xer;
oer_type_decoder_f RRC_TransactionIdentifier_decode_oer;
oer_type_encoder_f RRC_TransactionIdentifier_encode_oer;
per_type_decoder_f RRC_TransactionIdentifier_decode_uper;
per_type_encoder_f RRC_TransactionIdentifier_encode_uper;
per_type_decoder_f RRC_TransactionIdentifier_decode_aper;
per_type_encoder_f RRC_TransactionIdentifier_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_TransactionIdentifier_H_ */
#include <asn_internal.h>
