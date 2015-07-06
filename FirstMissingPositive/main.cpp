#include <vector>
#include <stdio.h>

using namespace std;

int firstMissingPositive(vector<int>& nums) {
  if(nums.size() == 0)
    return 1;
  bool numArr[10000] {false};

  int positiveCount = 0;
  for(int i = 0; i < nums.size(); i++)
  {
      if(nums[i] < 0)
          continue;
      numArr[nums[i]] = true;
  }
  for(int i = 1; i < 10000; i++)
  {
      if(!numArr[i])
        return i;
  }
  return 1;
}

int main()
{
  vector<int> userNums;
  int userIn;
  printf("Please enter your list of numbers followed by any char:\n>");
  while(scanf("%d", &userIn))
    userNums.push_back(userIn);

  int result = firstMissingPositive(userNums);
  printf("first missing positive is: %d\n", result);
  return 0;
}
