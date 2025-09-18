#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums = { 5, 4, 3, 2, 1 };

  /* Method One */
  // sort(nums.begin() , nums.end());

  /* Method Two */
  // reverse(nums.begin() , nums.end());

  /* Method Three -> Use Swap + Loop For Challenge */
  vector<int>::iterator begin = nums.begin();  
  vector<int>::iterator end = nums.end();
  
  swap(*begin , *(end - 1));  
  swap(*(begin + 1) , *(end - 2));  

  for (int i : nums)
  {
    cout << i << "\n";
  }

  return 0;
}

// Needed Output
// 1
// 2
// 3
// 4
// 5