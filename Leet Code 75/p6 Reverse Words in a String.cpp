#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        int c = -1;
        string output = "";
        bool flag = true;
        for (int i = 0; i < s.length() ; i++)
        {
            if (s[i] == ' ')
            {
                flag=true;
                continue;
            }
            else if(s[i] != ' ' && flag == true)
            {
                c+=1;
                if (c >= vec.size()) {
                    vec.push_back(""); // Add an empty string to the vector
                }
            }
            vec[c] += s[i];
            flag=false;

            cout << vec[c] << endl;
        }
        for (int i = vec.size()-1; i>=0; i--)
        {
            output+= vec[i];
            if(i != 0)
            {
                output+= " ";
            }
        }
        return output;
    }
};