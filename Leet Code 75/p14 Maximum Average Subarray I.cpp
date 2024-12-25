#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int ind=0, j=k, sum=0, maxSum=INT_MIN;
        for (int i=0; i<k; i++) {
            sum += nums[i];
        }
        maxSum = max(sum, maxSum);
        while (j<nums.size()) {
            sum -= nums[ind++];
            sum += nums[j++];
            maxSum = max(sum, maxSum);
        }
        double ans = double(maxSum)/k;
        return ans;
    }
};