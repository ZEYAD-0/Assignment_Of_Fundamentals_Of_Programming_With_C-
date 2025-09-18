#include <iostream>
// #include <utility>
using namespace std;

int main(void)

{
  // Add Type Alias Here
  typedef long long int lli; // first method
  using lli = long long int; // second method
  
  // معرفهاش لسه            // third method

  // Do Not Edit
  lli num = 150050005; // This Is Long Long Int
  cout << num << "\n"; // 150050005

  return 0;
}