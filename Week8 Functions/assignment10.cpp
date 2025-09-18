#include <iostream>
#include <limits.h>
using namespace std; 

int minpositive(int nums[], int size)
{
  int check_num;
  // Assign Check_num to First Positive Number in Array
  for(int i = 0; i < size; i++)
  { // Make Sure Number is in Range Of int AND Positive
    if(nums[i] > 0 && nums[i] < INT_MAX)
    {
      check_num = nums[i];
      break;
    }
  }
  // Compare check_num to Every Positive Number
  for(int i = 0; i < size; i++)
  {
    if(nums[i] > 0)
    {
      // Assign check_num to Smallest Number
      if(nums[i] < check_num)
      {
        check_num = nums[i];
      }
    }
  }
  return check_num;
}
/* Another Way */
// int minpositive(int numbers[], int numsSize)
// {
// 	int minPosNum = INT_MAX;

// 	for (int i = 0; i < numsSize; i++)
// 	{
// 		if (numbers[i] > 0 && numbers[i] < minPosNum)
// 			minPosNum = numbers[i];
// 	}

// 	return minPosNum;
// }
int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";
  return 0;
}