#include<iostream>
using namespace std;

int main(void)
{
  // For Output //
  for(int i = 0; i < 11; i++)
  {
    cout << i << "\n";
  }
  // While Output //
  int j=0;
  while(j < 11)
  {
    cout << j << "\n";
    j++;
  }
  // Do While Output //
  int k = 0;
  do
  {
    cout << k << "\n";
    k++;
  } while(k < 11);
  
  return 0;
}