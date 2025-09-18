#include<iostream>

int main(void) // From github //
{
  int num = 2;
  while (num < 520) {
    std::cout << num - 1 << "\n";
    num = num * 2 + 1;    
  }
  return 0;
};