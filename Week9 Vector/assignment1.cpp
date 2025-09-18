#include<iostream>
#include<vector>

int main(void)
{
  std::vector <int> nums {100, 200, 300 , 400};
  for(int i = 0; i < nums.size(); ++i)
  {
    std::cout << nums.at(i) << "\n";
  }
  nums.push_back(500);
  std::cout << "First Element Is : " << nums.front() << "\n";
  std::cout << "Last Element Is : " << nums.back();
  
  return 0;
}