//
// Created by minhhd on 08/01/2024.
//

#include <wc/process.h>

namespace WC {
int execute(int argc, char *argv[]) {
  command command = get_command(argv[1]);
    std::string file_name;
  if (argc > 2) {
    file_name = argv[2];
  } else {
    file_name = argv[1];
  }
  long value = 0;
  switch (command) {
    case command::COUNT: {
      value = count_byte(file_name);
      std::cout << value << " " << file_name << std::endl;
      break;
    }
    case command::LINE: {
      value = count_line(file_name);
      std::cout << value << " " << file_name << std::endl;
      break;
    }
    case command::WORD: {
      value = count_word(file_name);
      std::cout << value << " " << file_name << std::endl;
      break;
    }
    case command::CHAR: {
      value = count_char(file_name);
      std::cout << value << " " << file_name << std::endl;
      break;
    }
    default: {
      long bytes = count_byte(file_name);
      long lines = count_line(file_name);
      long words = count_word(file_name);
      std::cout << lines << " " << words << " " << bytes << " " << file_name
                << std::endl;
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
  } else if (command == "-w") {
    return command::WORD;
  } else if (command == "-m") {
    return command::CHAR;
  }
  return command::INVALID;
}

long count_byte(const std::string &file_name) {
  std::ifstream file(file_name, std::ios::binary | std::ios::ate);
  return file.tellg();
}

long count_line(const std::string &file_name) {
  std::ifstream file(file_name);
  std::string line;
  unsigned int count = 0;
  while (std::getline(file, line)) {
    count++;
  }
  return count;
}

long count_word(const std::string &file_name) {
  std::ifstream file(file_name);
  unsigned int count = std::distance(std::istream_iterator<std::string>(file),
                                     std::istream_iterator<std::string>());

  return count;
}

long count_char(const std::string &file_name) {
  std::ifstream file(file_name);
  std::string line;
  unsigned int count = 0;
  while (std::getline(file, line)) {
    count += line.length();
  }

  return count;
}
}// namespace WC
