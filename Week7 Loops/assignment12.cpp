#include<iostream>

int main(void)
{
  int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};
  int s_nums = sizeof(nums)/sizeof(nums[0]);
  for(int i = 0; i < s_nums; ++i)
  {
    if(nums[i] + nums[i] == nums[i+1])// Or 2*nums[i] //
    {
      std::cout << nums[i] << "\n";
    }
  }
  
  return 0;
}