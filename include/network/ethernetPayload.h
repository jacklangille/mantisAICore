#ifndef ETHERNETPAYLOAD_H
#define ETHERNETPAYLOAD_H

#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int setupEthernetSocket();

void handleEthernetConnections();

#endif 
