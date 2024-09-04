#ifndef SOCKET_UTILS_H
#define SOCKET_UTILS_H

#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

/*
=========================================================================================
This file contains functions for creating both client and server sockets as well as 
accepting incoming connections. 
=========================================================================================
*/

int createClientSocket(const std::string& ip, int port, int socketType = SOCK_STREAM, int protocol = 0) {
    int sock = socket(AF_INET, socketType, protocol); // Create socket
    struct sockaddr_in server_address; // Struct to hold server info
    server_address.sin_family = AF_INET; // Set address family to IPv4
    server_address.sin_port = htons(port); // Convert port number to big endian (network byte order)

    // Convert IP from text to binary
    if (inet_pton(AF_INET, ip.c_str(), &server_address.sin_addr) <= 0) { 
        close(sock);
        return -1;
    }

    // Attempt to connect to server 
    // If TCP, call connect and perform SYN, SYN-ACK, ACK handshake
    // If UDP, no handshake needed, can use send directly
    if (socketType == SOCK_STREAM) { 
        if (connect(sock, (struct sockaddr*)&server_address, sizeof(server_address)) < 0) {
            close(sock);
            return -1;
        }
    }
    else if (socketType == SOCK_DGRAM) {}
    return sock;
}

int createServerSocket(int port, int socketType = SOCK_STREAM, int protocol = 0, int backlog = 1) {
    int server_fd = socket(AF_INET, socketType, protocol); // Create IPv4 socket with specified protocol
    struct sockaddr_in address; // Struct to hold server info
    address.sin_family = AF_INET; // Set address family to IPv4
    address.sin_addr.s_addr = INADDR_ANY; // Accepts connections on an IP address 
    address.sin_port = htons(port); // Convert port number to big endian (network byte order)

    // Bind socket to specified port and address
    if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) < 0) {
        close(server_fd);
        return -1;
    }

    // If TCP, enter listening state 
    if (socketType == SOCK_STREAM) {
        if (listen(server_fd, backlog) < 0) {
            close(server_fd);
            return -1;
        }
    }
    return server_fd;
}

int acceptConnection(int server_fd) {
    struct sockaddr_in address; // Struct to hold client information 
    int addrlen = sizeof(address); // Initalizes the length of the address struct
    int new_socket = accept(server_fd, (struct sockaddr*)&address, (socklen_t*)&addrlen); // Accept incoming connection. Fill in address with client address
    if (new_socket < 0) {
        return -1;
    }
    return new_socket; 
}

#endif // SOCKET_UTILS_H
