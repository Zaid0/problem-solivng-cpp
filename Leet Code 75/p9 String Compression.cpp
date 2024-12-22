#include <vector>
#include <iostream>
#include <string> 

using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
     string s = "";
     int c = 1;
     s+=chars[0];
     for(int i = 1; i < chars.size(); i++)
     {
        if(chars[i-1] != chars[i])
        {
            if (c != 1)
            {
                s+=to_string(c);    
            }
            c = 1;
            s+=chars[i];
        }
        else 
        {
            c+=1;
        }
     }
     if (chars.size() > 1 && c > 1)
     {
     s+=to_string(c);
     }
    for(int i = 0; i < s.length(); i++)
    {
        chars[i] = s[i];
    }
     
     return s.length();   
    }
};