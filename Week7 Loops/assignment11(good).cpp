#include<iostream>
using namespace std;

int main(void) // Good
{
  string friends[] = {"Ahmed", "Osama", "Ameer"};
  int f_size = size(friends);
  for(int i = 0; i < f_size; ++i)
  {
    cout << "=========\n";
    cout << "= " << friends[i] << " =\n";
    cout << "==================\n";
    cout << "== ";
    for(int j = 0, e_size = size(friends[i]); j < e_size; ++j)
    {
      cout << friends[i][j] << ", ";
      if(j == e_size - 1) // Or cout << (j == 0 ? "" : ", ") << friends[i][j];
      {
        cout << "\b";
      }
    }
    cout << " =\n" << "==================\n\n";
    // if(i == f_size - 1)
    // {
    //   cout << "\b\b";
    // }
  } 
  return 0;
}