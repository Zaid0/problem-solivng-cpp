class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = INT_MAX;
        int n2 = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]<=n ){
                n = nums[i];
            } else if (nums[i] <= n2){
                n2 = nums[i];
            } else{
                return true;
            }    
        }
        return false;
    }
};