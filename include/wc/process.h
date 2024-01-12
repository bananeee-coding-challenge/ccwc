//
// Created by minhhd on 08/01/2024.
//

#ifndef DEMOWCPROJECT_SRC_PROCESS_H_
#define DEMOWCPROJECT_SRC_PROCESS_H_

#include <iostream>
#include <string>
#include <fstream>

namespace WC {
enum class command {
  COUNT,
  LINE,
  INVALID
};
int execute(int argc, char *argv[]);
command get_command(const std::string &command);
void countByte(const std::string &file_name);
void countLine(const std::string &file_name);
}// namespace WC

#endif//DEMOWCPROJECT_SRC_PROCESS_H_
