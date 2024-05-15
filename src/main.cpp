#include <thread>
#include <iostream>



int main(void){

	std::thread payloadPrimaryThread(); 	// Ethernet 
	std::thread payloadSecondary1Thread(); 	// UART
	std::thread payloadSecondary2Thread(); 	// UART 
	std::thread microThread(); 				// UART

    payloadPrimaryThread.join();
    payloadSecondary1Thread.join();
    payloadSecondary2Thread.join();
    microThread.join();

	return 0;
}
