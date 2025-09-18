#include<iostream>
using namespace std;

int main(void)
{
  string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
  int f_size = size(friends);
  for(int i = 0; i < f_size; ++i)
  {
    if(friends[i][0] == 'A') // Or == 65
    {
      cout << friends[i] << "\n";
    }
  }
  cout << "==============\n";
  int i = 0;
  while(i < f_size)
  {
    if(friends[i][0] == 'A') // Or == 65
    {
      cout << friends[i] << "\n";
    }
    i++;
  }
  
  return 0;
}