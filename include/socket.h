#ifndef SOCKET_H
#define _SOCKET_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include "common.h"

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

EXTERN_C typedef int32_t socket_t;
EXTERN_C typedef uint16_t port_t;
EXTERN_C typedef struct sockaddr_in sockaddr_in_t;
EXTERN_C typedef struct sockaddr sockaddr_t;

EXTERN_C_BEGIN

#define PORT_MAX 0xFFFF
#define DFL_PORT 0x49

socket_t CreateSecSocket(int domain, int type, int proto);
void CloseSocket(socket_t socket);

sockaddr_in_t CreateSockAddrInput(const char * restrict ip, int ip_define, int domain, port_t port);
int BindSockWithAddr(socket_t socket, sockaddr_in_t *addr);

port_t GetRandomPort(int seedterm);
port_t GetRandomRangePort(port_t *exclude, port_t begin, port_t end, int seedterm);

EXTERN_C_END

#endif