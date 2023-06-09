#include <iostream>
#include <string.h>
// temporarily disallow GetName() overrides by making it not virtual
#define virtual
#include "func.h"

// extracts the function name automatically so that we don't need to write it as a string
struct TestFunc : public FuncName {
  TestFunc(char* name) {
    // FuncName(name) copies garbage ??? so we just copy the stirng hard way
    // maybe it doesn't end with \0 when not quoted by "
    function_name = (char*)malloc(sizeof(name));
    memcpy(function_name, &name, sizeof(name));
  }

  virtual char* GetName() {
    return (char*) "name override";
  }
};

void HelloWorld() {
  std::cout << "HelloWorld\n";
  exit(true);
}

int main() {
  // (char*) will convert the name to a string
  TestFunc func((char*)HelloWorld);
  func.ShowName();
}
