#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int maxVowels(string s, int k) {
        int max = 0;
        int sum = 0;
        char c;
        for(int i = 0; i < k; i++)
        {
            c = s[i];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                sum++;
            }
        }
        for(int i = 0; i < s.length()+1-k; i++)
        {

            if (sum > max)
            {
                max = sum;
            }
            
            c = s[i];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                sum--;
            }
            c = s[i+k];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                sum++;
            }

        }
        return max;
    }
};