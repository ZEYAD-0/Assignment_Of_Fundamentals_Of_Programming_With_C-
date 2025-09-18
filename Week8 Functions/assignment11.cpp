#include <iostream>
#include <limits.h>
using namespace std;

int firstnegative(int nums[], int size)
{
  int check_num;
  // Assign Check_num to First Negative Number in Array
  for(int i = 0; i < size; i++)
  { // Make Sure Number is in Range Of int AND Negative
    if(nums[i] < 0 && nums[i] > INT_MIN)
    {
      check_num = nums[i];
      break;
    }
  }
  // Compare check_num to Every Negative Number
  for(int i = 0; i < size; i++)
  {
    if(nums[i] < 0)
    {
      // Assign check_num to Biggest Number
      if(nums[i] > check_num)
      {
        check_num = nums[i];
      }
    }
  }
  return check_num;
}
int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
  int numssize = size(numbers);
  cout << firstnegative(numbers, numssize) << "\n";
  return 0;
}