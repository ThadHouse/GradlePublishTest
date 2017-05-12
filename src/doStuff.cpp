#include "doStuff.h"
#include <iostream>

extern "C" {
  int DoSometing(void) {
    std::cout << "hello" << std::endl;
    return 5;
  }
}