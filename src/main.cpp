#include <cstring>
#include <fcntl.h>
#include <iostream>
#include <termios.h>
#include <thread>
#include <unistd.h>

int uartInit(const char *port) {
  int uart_fd = open(port, O_RDWR | O_NOCTTY | O_NDELAY);
  if (uart_fd == -1) {
    return -1;
  }

  // fetch current attributes
  struct termios options;
  tcgetattr(uart_fd, &options);

  // set baud rate
  cfsetispeed(&options, B9600);
  cfsetospeed(&options, B9600);
  // control flags (8 data bits, no parity, 1 stop bit)
  options.c_cflag &= ~PARENB;
  options.c_cflag &= ~CSTOPB;
  options.c_cflag &= ~CSIZE;
  options.c_cflag |= CS8;
  // raw input/output mode
  options.c_lflag = 0;
  options.c_oflag = 0;
  tcsetattr(uart_fd, TCSANOW, &options);

  return uart_fd;
}

void cmdFunc(const std::string &command) { return; }

void parseCommand(const std::string &input) {
  // need something here that can parse a JSON file and extract command
  char *command;
  std::thread commonThread(cmdFunc, command);
  commonThread.detach();
}

int main(void) {
  const char *port = "/dev/ttyS1";

  int uart_fd = uartInit(port);
  if (uart_fd == -1) {
    std::cerr << "Failed to initialize UART" << std::endl;
    return -1;
  }

  std::cout << "UART Initialized." << std::endl;

  char buffer[256];
  while (true) {
    int bytes_read = read(uart_fd, buffer, sizeof(buffer) - 1);
    if (bytes_read > 0) {
      buffer[bytes_read] = '\0';
      std::string input(buffer);
      parseCommand(input);
    } else if (bytes_read == -1) {
      std::cerr << strerror(errno) << std::endl;
    }
  }
  close(uart_fd);
  return 0;
}
