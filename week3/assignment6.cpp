#include<iostream>

int main(void)
{
  int a = 69;
  int b = 108;
  int c = 122;
  int d = 101;
  int e = 114;
  int f = 111;

  std::cout << "Character of this ASCII Value 69 Is " << char(a) << "\n";
  std::cout << "Character of this ASCII Value 108 Is " << char(b) << "\n";
  std::cout << "Character of this ASCII Value 122 Is " << char(c) << "\n";
  std::cout << "Character of this ASCII Value 101 Is " << char(d) << "\n";
  std::cout << "Character of this ASCII Value 114 Is " << char(e) << "\n";
  std::cout << "Character of this ASCII Value 111 Is " <<char(f) << "\n";
  std::cout << char(a) << char(b) << char(c) << char(d) << char(e) << char(f);

  return 0;
}