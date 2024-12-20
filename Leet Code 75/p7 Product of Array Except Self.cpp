#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        vector<int> output;

        int c1 = 1;
        int c2 = 1;
        for(int i = 0; i< nums.size(); i++)
        {
            c1*=nums[i];
            v1.push_back(c1);
        }

         for(int i = nums.size()-1; i>=0; i--)
        {
            c2*=nums[i];
            v2.push_back(c2);
        }

        reverse(v2.begin(), v2.end());
        int res = 0;
        for(int i = 0 ; i<nums.size(); i++)
        {
            cout << i << endl;
            if (i == nums.size()-1)
            {
                res = v1[i-1];
            }
            else if (i == 0)
            {
                res = v2[i+1];
            }
            else
            {
                res = v1[i-1]*v2[i+1];
            }
            output.push_back(res);

        }        
        
        return output;
    
    }

};