/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _PrecedenceClass_H_
#define _PrecedenceClass_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PrecedenceClass {
    PrecedenceClass_subscribedprecedence    = 0,
    PrecedenceClass_highpriority    = 1,
    PrecedenceClass_normalpriority  = 2,
    PrecedenceClass_lowpriority = 3
} e_PrecedenceClass;

/* PrecedenceClass */
typedef long     PrecedenceClass_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrecedenceClass;
asn_struct_free_f PrecedenceClass_free;
asn_struct_print_f PrecedenceClass_print;
asn_constr_check_f PrecedenceClass_constraint;
ber_type_decoder_f PrecedenceClass_decode_ber;
der_type_encoder_f PrecedenceClass_encode_der;
xer_type_decoder_f PrecedenceClass_decode_xer;
xer_type_encoder_f PrecedenceClass_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _PrecedenceClass_H_ */
#include <asn_internal.h>