#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int left = 0, right = nums.size()-1, c = 0;
        bool f = true;
        sort(nums.begin(), nums.end());
        while (left < right)
        {
            if (nums[left] + nums[right] == k)
            {
                c++;
                left++;
                right--;
            }
            else if ((nums[left]+nums[right]) > k)
            {
                right--;
            }
            else 
            {
                left++;
            }

        }
        return c;
    }
};