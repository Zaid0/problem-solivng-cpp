#include <istream>
#include <vector>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums){
        int m = 0;
        int k = 1;
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
        return m-1;
    }
};