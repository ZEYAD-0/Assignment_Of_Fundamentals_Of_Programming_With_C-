#include<iostream>
#include<string.h>
using namespace std;

int main(void)
{
  string fName = "Elzero ";
  string mName = "Web ";
  string lName = "School";
  cout << fName + mName + lName << "\n";

  cout << fName << mName << lName << "\n";
  
  cout << fName.append(mName).append(lName); // from git hub
  return 0;
}