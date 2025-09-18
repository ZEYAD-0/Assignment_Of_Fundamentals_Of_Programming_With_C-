#include <iostream>

int main(void) // check code
{
  // Do Not Edit Here
  short int a = 100;
  float b = 98.5f;
  double c = 1.7;

  // Edit This Line And Use Type Casting To Get The Output
  std::cout << (int) (a + b + c) << "\n"; // 200
  // or a + (int) (b+c) //
  return 0;
}