//
// Created by minhhd on 08/01/2024.
//

#include <wc/process.h>

namespace WC {
int execute(int argc, char *argv[]) {
  command command = get_command(argv[1]);
  switch (command) {
    case command::COUNT: {
      countByte(argv[2]);
      break;
    }
    case command::LINE: {
      countLine(argv[2]);
      break;
    }
    default: {
      std::cout << "Invalid command" << std::endl;
      break;
    }
  }
  return 100;
}

command get_command(const std::string &command) {
  if (command == "-c") {
    return command::COUNT;
  } else if (command == "-l") {
    return command::LINE;
  }
  return command::INVALID;
}

void countByte(const std::string &file_name) {
  std::ifstream file(file_name, std::ios::binary | std::ios::ate);
  std::cout << file.tellg() << " " << file_name << std::endl;
  file.close();
}

void countLine(const std::string &file_name) {
  std::ifstream file(file_name);
  std::string line;
  unsigned int count = 0;
  while (std::getline(file, line)) {
    count++;
  }
  std::cout << count << " " << file_name << std::endl;
  file.close();
}

void
}// namespace WC
