#include <stdio.h>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
        if(nums.size() == 1 || nums.size() == 0)
          return false;

        std::sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i + 1])
              return true;
        }
        return false;
    }

    int main()
    {
      vector<int> userNums;
      int userIn;
      printf("Please enter your list of numbers followed by any char:\n>");
      while(scanf("%d", &userIn))
        userNums.push_back(userIn);

      bool doesHaveDup = containsDuplicate(userNums);
      if(doesHaveDup)
        printf("Indeed it does contain a duplicate!\n");
      else
        printf("No it does not contain a duplicate\n");
    }
