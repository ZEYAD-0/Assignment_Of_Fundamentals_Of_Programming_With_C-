#include <iostream>
using namespace std;

int num = 100;

int read()
{
  cout << num;
  int num = 50;
  //int num = 50;
  //cout << num;
  return 0;
}

int play()
{
  int num = 200;
  read();
  return 0;
}

int main()
{
  play();
  return 0;
} 