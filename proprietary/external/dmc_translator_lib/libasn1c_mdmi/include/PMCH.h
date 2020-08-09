/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _PMCH_H_
#define _PMCH_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MTCH;

/* PMCH */
typedef struct PMCH {
    long     bler;
    struct mtchs {
        A_SEQUENCE_OF(struct MTCH) list;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } mtchs;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} PMCH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PMCH;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MTCH.h"

#endif  /* _PMCH_H_ */
#include <asn_internal.h>