#include <iostream>
using namespace std;

int main(void)
{
  int num = 3;
  cout << num + num << "\n";                 // 6
  cout << num * num - num << "\n";           // 6
  cout << (num % sizeof(num)) + num << "\n"; // 6 // from yt. 
  cout << (num + num + num) - num << "\n";   // 6
  cout << (num + num) + (num - num) << "\n"; // 6
  cout << (num + num) + (num % num) << "\n"; // 6
  cout << (num + num) / (num / num) << "\n"; // 6
  return 0;
}