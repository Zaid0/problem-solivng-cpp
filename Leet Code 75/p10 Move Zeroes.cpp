#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 0;
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                c+=1;
            }
            else
            {
                nums[j] = nums[i];
                j+=1;
            }
        }

          for (int i = 0; i < c; i++)
          {
             nums[j] = 0;
             j+=1;
          }
    }
};