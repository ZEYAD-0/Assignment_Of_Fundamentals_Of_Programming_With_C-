#include <iostream>

int main(void)
{
  // Do Not Edit Here
  short a = 1000;
  int b = 10000;
  long double c = 5.560000505012;

  // Change ??? To Something Else To Get The Output
  std::cout << sizeof(c) -sizeof(b) << "\n";  // 12
  std::cout << sizeof(b) + sizeof(c) << "\n";  // 20
  std::cout << sizeof(a) * sizeof(c) << "\n";  // 32
  std::cout << a * int(c) << "\n";  // 5000
  std::cout << char( int(c) * sizeof(c) ) << "\n"; // P

return 0;
}