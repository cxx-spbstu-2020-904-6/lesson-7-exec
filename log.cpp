#include "log.hpp"
#include <string>
#include <iostream>
static Log *p_log = nullptr;

Log &Log::instance() {
  if (!p_log) {
      std::cout << "construct log\n";
      p_log = new Log();
  }
  return *p_log;
}

void Log::print(const std::string &str){
    std::cout << str <<"\n";
}

