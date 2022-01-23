#include "socket.h"

EXTERN_C_BEGIN

socket_t CreateSecSocket(int domain, int type, int proto) {
    socket_t sock;
    sock = socket(domain, type, proto);
    
    if (sock < 0) { 
        // TODO: ERROR
        return (sock); 
    }

    int returnValue;
    returnValue = setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &(int) {1}, sizeof(int));

    if (returnValue < 0) { 
        // TODO: ERROR
        return (returnValue); 
    }
    
    return (sock);
}

port_t GetRandomPort(int seedterm) {
    srand(time(NULL) + seedterm);
    return ((port_t) (rand() % PORT_MAX) + 1);
}

port_t GetRandomRangePort(port_t *exclude, port_t begin, port_t end, int seedterm) {

    port_t returnPort = 0;
    int32_t size = GetListSize16(exclude, 0);

    do {
        srand(time(NULL) + seedterm);
        returnPort = (port_t) ((rand() % (end - begin)) + begin + 1);
    } while(!(SubValueList16(exclude, returnPort, size)));

    return (returnPort);
}

void CloseSocket(socket_t socket) {
    close(socket);
    // TODO: ERROR
}

EXTERN_C_END