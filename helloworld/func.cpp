#include "func.h"
#include <iostream>
#include <string.h>

FuncName::FuncName() {}

FuncName::FuncName(char* name) {
  function_name = strdup(name);
}

void FuncName::ShowName() {
  std::cout << GetName() << "\n";
}

char* FuncName::GetName() {
  return function_name;
}
