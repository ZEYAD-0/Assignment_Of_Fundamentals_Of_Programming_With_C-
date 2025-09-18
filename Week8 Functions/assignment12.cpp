#include <iostream>
using namespace std;

/* Overloading Method */
string createurl(string IP, string name, string Domain, string SubDomain = "www")
{
  return IP + "://" + SubDomain + '.' + name + '.' + Domain;
}
string createurl(string IP, string name, string Domain, bool isWWW)
{
  string sub_domain = "";
  if(isWWW == true) // To Suit All cases
  {
    sub_domain = "www.";
  }
  return IP + "://" + sub_domain + name + '.' + Domain;
}
/*Another Good Way*/
// string createurl(string IP, string name, string Domain, bool isWWW = true)
// {
//   string sub_domain;
//   if(isWWW == true)
//   {
//     sub_domain = "www.";
//   }
//   else if(isWWW == false)
//   {
//     sub_domain = "";
//   }
//   return IP + "://" + sub_domain + name + '.' + Domain;
// }
int main()
{
  cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
  return 0;
}