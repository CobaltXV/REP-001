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

#define DEBUG

#ifdef DEBUG
#   ifndef DEBUG_LOG
#       define DEBUG_LOG(...) printf("\033[1;36mDebug \033[0m[\033[1;34m%d\033[0m]: ", __COUNTER__); printf(__VA_ARGS__)
#   endif
#else
#   ifndef DEBUG_LOG
#       define DEBUG_LOG(...)
#   endif
#endif

EXTERN_C_BEGIN

extern int main(int argc, char **argv) {

    (void) argc;
    (void) argv;

    DEBUG_LOG("Starting Networking Processes..\n");

    // TODO: AF_INET6 SUPPORT
    socket_t socket = CreateSecSocket(AF_INET, SOCK_STREAM, 0);
    if (socket < 0) { return (1); }

    DEBUG_LOG("Cleaning Up..\n");
    CloseSocket(socket);

    DEBUG_LOG("Finished Succesfully\n");
    return (0);
}

EXTERN_C_END