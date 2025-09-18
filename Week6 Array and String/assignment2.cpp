#include<iostream>
using namespace std;

int main(void)
{
  int check = 25;
  int nums[]{20 ,35, 30, 70, 100};
  if(nums[0] > check){
    cout << nums[0] << " + " << nums[3] << " = " << nums[0]+nums[3] << "\n";}

  else if(nums[1] > check){
    cout << nums[1] << " + " << nums[3] << " = " << nums[1]+nums[3] << "\n";}

  else if(nums[2] > check){
    cout << nums[2] << " + " << nums[3] << " = " << nums[2]+nums[3] << "\n";}

  return 0;
}