//Log.hpp

#include <memory>
#include <string>
#include <iostream>
class Log {
public:
  static Log &instance();
  void print(const std::string &message); 
  ~Log() {
        std::cout << "destruct log\n";
    }
//private:
  //static std::unique_ptr<Log> p_log;
};
