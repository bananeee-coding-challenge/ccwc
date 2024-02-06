//
// Created by minhhd on 08/01/2024.
//

#ifndef DEMOWCPROJECT_SRC_PROCESS_H_
#define DEMOWCPROJECT_SRC_PROCESS_H_

#include <iostream>
#include <string>
#include <fstream>
#include <iterator>

namespace WC {
enum class command {
  COUNT,
  LINE,
  WORD,
  CHAR,
  INVALID
};
int execute(int argc, char *argv[]);
command get_command(const std::string &command);
long count_byte(const std::string &file_name);
long count_line(const std::string &file_name);
long count_word(const std::string &file_name);
long count_char(const std::string &file_name);
}// namespace WC

#endif//DEMOWCPROJECT_SRC_PROCESS_H_
