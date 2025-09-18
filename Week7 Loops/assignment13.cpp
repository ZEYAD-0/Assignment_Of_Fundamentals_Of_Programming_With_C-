#include<iostream>

int main(void)
{
  for(int i = 30; i >= 3; i -= 3) // i = i - 3
  {
    std::cout << i << "\n";
  }
  std::cout << "===========\n";
  for(int i = 30; i >= 3; i -= 3)
  {
    if(!(i % 2 == 0)) // Or i % 2 != 0
    {
      std::cout << i << "\n";
    }
  }
  return 0;
}