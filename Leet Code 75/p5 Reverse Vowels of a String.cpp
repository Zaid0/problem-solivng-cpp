#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        vector<char> vec;
        int f = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (vowels.contains(s[i]))
            {
                vec.push_back(s[i]);
                f+=1;
            }
        }

        string output = "";
        int v = 0;
        int c = vec.size() - 1;

        for (int i = 0; i < s.length(); i++)
        {
            cout << c << endl;

            if (c != -1 && s[i] == vec[v])
            {
                output += vec[c];
                v+=1;
                c+=-1;
            }
            else{
                output += s[i];
            }
        }
        return output;
    }
};