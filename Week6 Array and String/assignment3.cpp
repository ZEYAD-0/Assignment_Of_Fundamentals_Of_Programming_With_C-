#include<iostream>
#include<array>

int main(void)
{
  int filling = 10;
  int vals[]{100, 200, 300, 400};
  vals[0]=vals[1]=vals[2]=vals[3]=filling;
  
  std::cout << vals[0] << "\n";
  std::cout << vals[1] << "\n";
  std::cout << vals[2] << "\n";
  std::cout << vals[3] << "\n";

  return 0;
}