#ifndef _COMMON_H
#define _COMMON_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
#   ifndef EXTERN_C
#       define EXTERN_C extern "C"
#   endif
#   ifndef EXTERN_C_BEGIN
#       define EXTERN_C_BEGIN extern "C" {
#   endif
#   ifndef EXTERN_C_END
#       define EXTERN_C_END }
#   endif
#else
#   ifndef EXTERN_C
#       define EXTERN_C
#   endif
#   ifndef EXTERN_C_BEGIN
#       define EXTERN_C_BEGIN
#   endif
#   ifndef EXTERN_C_END
#       define EXTERN_C_END
#   endif
#endif

EXTERN_C_BEGIN

#define LIST_MAX 0xFF

bool SubValueList16(uint16_t *list, uint16_t item, int32_t size);
bool SubValueList32(uint32_t *list, uint32_t item, int32_t size);
bool SubValueList64(uint64_t *list, uint64_t item, int32_t size);

int16_t GetListSize16(uint16_t *list, uint16_t delim);
int32_t GetListSize32(uint32_t *list, uint32_t delim);
int64_t GetListSize64(uint64_t *list, uint64_t delim);

// TODO: GENERIC FUNCTIONS

EXTERN_C_END

#endif