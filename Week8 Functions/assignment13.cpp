#include <iostream>
using namespace std;

/* Not Necessarily "" Because I don't Return gender */
string greeting(string name, string gender = "")
{
  if(gender == "Male")
  {
    return "Hello Mr " + name; 
  }
  if(gender == "Female")
  {
    return "Hello Miss " + name; 
  }
  return "Hello " + name; // .append gives Error
}
int main()
{
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh
  return 0;
}