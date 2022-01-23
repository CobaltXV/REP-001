#include "socket.h"

EXTERN_C_BEGIN

extern socket_t CreateSecSocket(int domain, int type, int proto) {
    socket_t sock;
    sock = socket(domain, type, proto);
    
    if (sock < 0) { return (sock); }

    int returnValue;
    returnValue = setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &(int) {1}, sizeof(int));

    if (returnValue < 0) { return (returnValue); }

    

}

extern port_t GetRandomPort(void) {

}

extern port_t GetRandomRangePort(port_t *exclude, port_t begin, port_t end) {

}

EXTERN_C_END