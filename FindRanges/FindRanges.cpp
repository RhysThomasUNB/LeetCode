#include <vector>
#include <stdio.h>
#include <string>

using namespace std;

vector<string> summaryRanges(vector<int>& nums)
{
  int nextNum, startNum;
  vector<string> ranges;
  bool newRange = true;
  for(int i = 0; i < nums.size(); i++)
  {
      if(newRange)
      {
          newRange = false;
          startNum = nums[i];
          nextNum = startNum + 1;
      }
      if((i + 1) < nums.size() && nums[i + 1] == nextNum)
          nextNum++;
      else
      {
          newRange = true;

          string rangeStr = "";
          if(nums[i] == startNum)
            rangeStr += to_string(startNum);
          else
            rangeStr += to_string(startNum) + "->" + to_string(nextNum - 1);

          ranges.push_back(rangeStr);
      }
  }
  return ranges;
}

int main()
{
//  int myints[] = {0, 1,2, 4, 5, 7};
  vector<int> nums;
  nums.push_back(-1);//(myints, myints + sizeof(myints) / sizeof(int) );
  vector<string> results = summaryRanges(nums);
  for(int i = 0; i < results.size(); i++)
  {
    printf("%s", results[i].c_str() );
    printf(" ");
  }
  printf("\n");
  return 0;
}
