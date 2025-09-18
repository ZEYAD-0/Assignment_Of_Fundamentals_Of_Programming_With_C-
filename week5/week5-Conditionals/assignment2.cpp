#include<iostream>

int main(void)
{
  int age, points;
  std::cout << "Enter Your Age: ";
  std::cin >> age;
  std::cout << "Enter Your Points: ";
  std::cin >> points;
  if(age > 18)
  {
    std::cout << "Your Age Is Ok\n";
  }
  else if(age <= 18)
  {
    std::cout << "Your Age Is Not Ok\n";
  }
  if(points > 500)
  {
    std::cout << "Your points Is Ok\n";
  }
  else if(points <= 500)
  {
    std::cout << "Your points Is Not Ok\n";
  }
  /* Other Solution - Very Bad One :( - */
//   if(age > 18 && points > 500)
//   {
//     std::cout << "Your Age Is Ok\n";
//     std::cout << "Your points Is Ok\n";
//   }
//   else if(age <= 18 && points <= 500)
//   {
//     std::cout << "Your Age Is Not Ok\n";
//     std::cout << "Your points Is Not Ok\n";  
//   }
//   else if(age > 18 && points <= 500)
//   {
//     std::cout << "Your Age Is Ok\n";
//     std::cout << "Your points Is Not Ok\n";    
//   }
//   else
//   {
//     std::cout << "Your Age Is Not Ok\n";
//     std::cout << "Your points Is Ok\n";
//   }
  
  return 0;
}