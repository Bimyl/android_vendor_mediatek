/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _LteCellTiming_H_
#define _LteCellTiming_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SystemFrameNumber.h"
#include "SubFrameNumber.h"
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TimingAdjust;

/* LteCellTiming */
typedef struct LteCellTiming {
    SystemFrameNumber_t  startingSysFrameNum;
    SubFrameNumber_t     startingSubFrameNum;
    long     startingDlFrameTimingOffset;
    long     startingUlFrameTimingOffset;
    long     startingUlTimingAdvance;
    struct timingAdjusts {
        A_SEQUENCE_OF(struct TimingAdjust) list;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } timingAdjusts;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} LteCellTiming_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LteCellTiming;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TimingAdjust.h"

#endif  /* _LteCellTiming_H_ */
#include <asn_internal.h>