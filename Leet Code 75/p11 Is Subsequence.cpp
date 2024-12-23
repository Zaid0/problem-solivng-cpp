#include <iostream>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        if(j == s.length()) return true;
        for(int i = 0; i < t.length(); i++)
        {
            if (s[j] == t[i])
            {
                j+=1;
            }
            if (j == s.length()) return true;

        }
        return false;
    }
};