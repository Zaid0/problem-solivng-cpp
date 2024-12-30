#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, cumsum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }

        for(int j = 0; j < nums.size(); j++)
        {
            cumsum+= nums[j];

            if (sum-cumsum == cumsum-nums[j])
            {
                return j;
            }

        }
        return -1;
    }
};