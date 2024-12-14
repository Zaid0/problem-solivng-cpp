#include <iostream>  
#include <string>    

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1)
        {return "";}

        string output = "";
        if (str1.length()%str2.length() == 0)
        {
            return str1.substr(0, str2.length());
        }
        else 
        {
            int s1 = str1.length();
            int s2 = str2.length();
            while (s2 != 0)
            {
                int temp = s2;
                s2 = s1 % s2;
                s1 = temp;
            }
            return str1.substr(0, s1);
        }
        return "";
    }
    
};


int main() {
    Solution sol;

    string str1 = "ABCABC";
    string str2 = "ABC";
    string result = sol.gcdOfStrings(str1, str2);
    cout << result << endl;

    str1 = "ABABAB";
    str2 = "AB";
    result = sol.gcdOfStrings(str1, str2);
    cout << result << endl;

    str1 = "ABAB";
    str2 = "ABAB";
    result = sol.gcdOfStrings(str1, str2);
    cout << result << endl;



    return 0;
}