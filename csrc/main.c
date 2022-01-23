#include <stdio.h>
#include <stdlib.h>
#include "socket.h"
#include "transmit.h"
#include "encrypt.h"
#include "error.h"

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
#endif

#ifndef STD_PORT
#   define STD_PORT 502
#endif

#ifdef DEBUG
#   ifndef DEBUG_LOG
#       define DEBUG_LOG(m, ...) printf("Debug [ %s ]\n", m, __VA_ARGS__);
#   endif
#else
#   ifndef DEBUG_LOG
#       define DEBUG_LOG(m, ...)
#   endif
#endif

EXTERN_C_BEGIN

extern int main(void) {

    DEBUG_LOG("Starting Networking Processes..\n");

    return (0);
}

EXTERN_C_END