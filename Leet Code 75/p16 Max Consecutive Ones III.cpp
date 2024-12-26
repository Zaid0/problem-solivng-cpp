#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int m = 0;
        int zeros = 0;
        int left = 0, right = 0;
        while (right < nums.size())
        {
            if(nums[right] == 0)
            {
                zeros++;
            }

            if(zeros > k)
            {
                if(nums[left] == 0)
                {
                zeros--;
                } 
                left++;
            }
            else
            {
                m = max(right-left+1, m);
            }
            right++;
        }
        return m;
    }
};