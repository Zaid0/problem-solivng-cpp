#include <vector>    
#include <algorithm> 

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> boolArray(candies.size());
        int m1 = *max_element(candies.begin(), candies.end());
        int x = 0;
         for (int i : candies) {
            boolArray[x++] = (i + extraCandies) >= m1 ? true : false;
        }
        return boolArray;
    }
};