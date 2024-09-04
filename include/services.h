#ifndef SERVICE_1_H 
#define SERVICE_1_H 

#include <iostream>
#include <thread>
#include <cmath>
#include <atomic>

// Global stop flag
std::atomic<bool> stopFlag(false);

void handleCommand1() {
    std::cout << "Executing command 1" << std::endl;
    
    double result = 0.0;
    for (int i = 0; i < 10; ++i) {
        if (stopFlag.load()) {
            std::cout << "Command 1 interrupted!" << std::endl;
            return;  
        }
        
        result += std::sin(i) * std::cos(i);
        std::cout << result << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    
    std::cout << "Command 1 complete. Result: " << result << std::endl;
}

void handleCommand2() {
    std::cout << "Executing command 2" << std::endl;
    
    double result = 0.0;
    for (int i = 0; i < 20; ++i) {
        if (stopFlag.load()) {
            std::cout << "Command 2 interrupted!" << std::endl;
            return;  
        }
        std::cout << "Iteration " << i + 1 << std::endl;        
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    
    std::cout << "Command 2 complete." << std::endl;
}

void startThread(void (*commandFunc)()) {
    std::thread t(commandFunc);
    t.detach();
}

#endif // SERVICE_1_H