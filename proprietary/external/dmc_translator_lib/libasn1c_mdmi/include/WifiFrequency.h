/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _WifiFrequency_H_
#define _WifiFrequency_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WifiFrequency {
    WifiFrequency_freq_2_4_GHz  = 1,
    WifiFrequency_freq_3_6_GHz  = 2,
    WifiFrequency_freq_4_9_GHz  = 3,
    WifiFrequency_freq_5_GHz    = 4,
    WifiFrequency_freq_5_9_GHz  = 5
} e_WifiFrequency;

/* WifiFrequency */
typedef long     WifiFrequency_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WifiFrequency;
asn_struct_free_f WifiFrequency_free;
asn_struct_print_f WifiFrequency_print;
asn_constr_check_f WifiFrequency_constraint;
ber_type_decoder_f WifiFrequency_decode_ber;
der_type_encoder_f WifiFrequency_encode_der;
xer_type_decoder_f WifiFrequency_decode_xer;
xer_type_encoder_f WifiFrequency_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _WifiFrequency_H_ */
#include <asn_internal.h>