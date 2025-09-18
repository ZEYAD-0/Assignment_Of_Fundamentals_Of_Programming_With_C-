#include<iostream>
using namespace std;

int main(void)
{
  int num;
  cout << "Please Type A Number Between 0 And 150\n";
  cin >> num;
  if(num < 10)
  {
    cout << "00" << num;
  }
  else if(num > 10 && num < 100)
  {
    cout << "0" << num;
  }
  else
  {
    cout << num;
  }
  return 0;
}