#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
  vector<int> numbers = { 10, 20, 30, 40 };

  // Method One
  // numbers.pop_back();

  // Method Two
  // numbers.erase(numbers.end() - 1 , numbers.end());

  // Method Three
  // numbers.erase(numbers.end() - 1);

  // Method Four
  // numbers.resize(numbers.size() - 1);

  // Method Five
  numbers.clear();
  numbers.push_back(10);
  numbers.push_back(20);
  numbers.push_back(30);

  // Do Not Edit
  for (int i : numbers)
  {
    cout << i << "\n";
  }
  return 0;
}

// Needed Output
// 10
// 20
// 30