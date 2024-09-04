#ifndef COMMAND_UTILS_H
#define COMMAND_UTILS_H

#include <iostream>
#include "../proto/protocol.pb.h"
#include "services.h"

command::Command cmdCreate(uint32_t cmd_val, command::Device src, command::Device dst, uint32_t dtt, uint32_t sig, const std::string& data_str) {
    command::Command cmd;

    cmd.set_cmd(cmd_val);
    cmd.set_src(src);
    cmd.set_dst(dst);
    cmd.set_dtt(dtt);
    cmd.set_sig(sig);
    cmd.set_string_d(data_str);

    return cmd;
}

void cmdHandler(const std::string& serialized_data){
    command::Command cmd;
    std::cout << "Command size: " << serialized_data.size() << " bytes" << std::endl;

    // Deserialize into cmd
    if (cmd.ParseFromString(serialized_data)) {
        std::cout << "Received Command:" << std::endl;
        std::cout << "Command: " << cmd.cmd() << std::endl;
        std::cout << "Source: " << cmd.src() << std::endl;
        std::cout << "Destination: " << cmd.dst() << std::endl;
        std::cout << "Datetime: " << cmd.dtt() << std::endl;
        std::cout << "Signature: " << cmd.sig() << std::endl;
        if (cmd.has_string_d()) {
            std::cout << "String Data: " << cmd.string_d() << std::endl;
        } else if (cmd.has_bytes_d()) {
            std::cout << "Bytes Data: " << cmd.bytes_d() << std::endl;
        } else if (cmd.has_int_d()) {
            std::cout << "Int Data: " << cmd.int_d() << std::endl;
        } else if (cmd.has_double_d()) {
            std::cout << "Double Data: " << cmd.double_d() << std::endl;
        }
        switch (cmd.cmd()) {
            case 1:
                stopFlag.store(false);  
                startThread(handleCommand1);  
                break;

            case 2:
                stopFlag.store(false);
                startThread(handleCommand2);
                break;
            case 3:
                std::cout << "Stop command received. Stopping all threads." << std::endl;
                stopFlag.store(true);  
                break;
            default:
                std::cerr << "Unknown command ID: " << cmd.cmd() << std::endl;
                break;
        }        

    } else {
        std::cerr << "Failed to parse command." << std::endl;
    }
}

#endif // COMMAND_UTILS_H