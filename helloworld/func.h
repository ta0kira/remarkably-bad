#ifndef GUARD
#define GUARD

// stores the name of a function and prints it
class FuncName {
public:
  FuncName();
  FuncName(char* name);

  void ShowName();

protected:
  virtual char* GetName();
  char* function_name;
};

#endif
