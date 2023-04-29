#include <cstring>
#include <iostream>

union MyUnion {
  int i;
  float f;
  char s[10];
};

int main() {
  MyUnion myUnion;

  myUnion.i = 42;
  std::cout << "El valor de i es: " << myUnion.i << std::endl;

  myUnion.f = 3.1416;
  std::cout << "El valor de f es: " << myUnion.f << std::endl;

  strcpy(myUnion.s, "Hola");
  std::cout << "El valor de s es: " << myUnion.s << std::endl;

  return 0;
}
