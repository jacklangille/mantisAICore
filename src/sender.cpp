#include <iostream>
#include <ctime>
#include <cstdlib>  
#include "../include/command_utils.h"
#include "../include/socket_utils.h"

void sendCommand(const command::Command& cmd, const std::string& ip, int port) {
    // Serialize cmd
    std::string serialized_cmd;
    cmd.SerializeToString(&serialized_cmd);
    int tcpClientSock = createClientSocket(ip, port);
    if (tcpClientSock < 0) {
        return;
    }

    send(tcpClientSock, serialized_cmd.c_str(), serialized_cmd.size(), 0);

    close(tcpClientSock);
}

int main(int argc, char* argv[]) {
    std::time_t current_time = std::time(nullptr);
    int cmd_id = std::atoi(argv[1]);
    command::Command cmd = cmdCreate(cmd_id, command::Device::OBM, command::Device::OBA, static_cast<uint32_t>(current_time), 42, "Test");

    sendCommand(cmd, "127.0.0.1", 9090);

    return 0;
}
