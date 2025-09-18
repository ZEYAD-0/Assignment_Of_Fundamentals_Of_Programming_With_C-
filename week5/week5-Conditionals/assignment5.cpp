#include<iostream>

int main(void) 
{
  int birth_year = 82;
  int salary = 500;
  std::cout << (birth_year > 80 ? (salary < 600? "Ok\n" : "High\n") : "Not Ok\n") ;
  // (salary < 600)? "Ok\n" : "High\n" 
  return 0;
}