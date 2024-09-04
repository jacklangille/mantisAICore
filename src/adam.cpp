#include <iostream>
#include "../include/socket_utils.h"
#include "../include/command_utils.h"

int main() {
    int port = 9090;
    int tcpServerSock = createServerSocket(port); // Create socket once and bind to port
    if (tcpServerSock < 0) {
        return -1;
    }

    std::cout << "Receiver listening on port " << port << std::endl;

    while (true) {
        int new_socket = acceptConnection(tcpServerSock); // Create a new socket specifically for this connection 
        if (new_socket < 0) {
            std::cerr << "Failed to accept connection" << std::endl;
            continue;  
        }

        char buffer[50] = {0};
        int bytes_read = read(new_socket, buffer, 50);

        if(bytes_read > 0){
            std::string serialized_data(buffer, bytes_read);
            cmdHandler(serialized_data);
        }
        
        close(new_socket);
    }

    close(tcpServerSock);

    return 0;
}

