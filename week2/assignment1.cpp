#include <iostream>
using namespace std;

int main()
{
  // Write Your Code Here
  int age, period;
  cout << "age: ";
  cin >> age;
  cout << "period: ";
  cin >> period;
  cout << "\n";


  // Do Not Edit The Next 2 Lines
  cout << "My Age Is: " << age << "\n";
  cout << period << " Years Ago My Age Was: " << age - period << "\n";

  // Add The Third Line Below
  cout << "After " << period << " Years My Age Will Be: " 
  << age + period;
  return 0;
}