#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> unordered_dict;
        for(const auto& i: arr)
        {
            unordered_dict[i]+=1;
        }
        std::vector<int> values;
        for (const auto& pair : unordered_dict) {
            if(find(values.begin(), values.end(), pair.second) != values.end())
            {
                return false;
            }
        values.push_back(pair.second); 
    }
    return true;
    }
};