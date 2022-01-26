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

sockaddr_in_t CreateSockAddrInput(const char * restrict ip, int ip_define, int domain, port_t port) {
    if ((ip_define == 0 && ip == NULL) || port == 0) {
        // TODO: ERROR
    }

    sockaddr_in_t sockaddr;
    memset(&sockaddr, '\0', sizeof(sockaddr_in_t));

    sockaddr.sin_port = htons(port);
    sockaddr.sin_family = domain;

    if (ip == NULL && ip_define != 0) {
        sockaddr.sin_addr.s_addr = ip_define;
        return (sockaddr);
    }

    else if (inet_pton(domain, ip, &sockaddr.sin_addr) <= 0) {
        // TODO: ERROR
    }

    return (sockaddr);
}

int BindSockWithAddr(socket_t socket, sockaddr_in_t *addr) {
    if (socket <= 0 || addr == NULL) {
        // TODO: ERROR
    }

    else {
        if (bind(socket, (sockaddr_t *) addr, sizeof(addr)) < 0) {
            // TODO: ERROR
        }
    }

    return (1);
}

EXTERN_C_END