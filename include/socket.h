#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/socket.h>

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

EXTERN_C typedef int32_t socket_t;
EXTERN_C typedef uint16_t port_t;
EXTERN_C typedef struct sockaddr_in sockaddr_in;
EXTERN_C typedef struct sockaddr sockaddr;

EXTERN_C_BEGIN

extern socket_t CreateSecSocket(int domain, int type, int proto);
extern port_t GetRandomPort(void);
extern port_t GetRandomRangePort(port_t *exclude, port_t begin, port_t end);

EXTERN_C_END