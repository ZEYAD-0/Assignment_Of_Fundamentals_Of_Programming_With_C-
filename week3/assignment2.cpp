#include <iostream>

int main (void)
{
  double salary = 5000.98;
  std::cout << sizeof(salary) << std::endl;
  std::cout << sizeof(salary)*8 << "\n";

  return 0;
}