#include <iostream>  
#include <string>    

using namespace std;

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string s = "";
        int i = 0;
        while (i < word1.length() || i < word2.length()) {
            if (i < word1.length()) {
                s += word1[i];
            }
            if (i < word2.length()) {
                s += word2[i];
            }
            i += 1;
        }
        return s;
    }
};

int main() {
    Solution solution;

    // Test cases
    std::string word1 = "abc", word2 = "def";
    std::cout << "Test Case 1: " << solution.mergeAlternately(word1, word2) << std::endl;

    word1 = "abcd", word2 = "ef";
    std::cout << "Test Case 2: " << solution.mergeAlternately(word1, word2) << std::endl;

    word1 = "ab", word2 = "xyz";
    std::cout << "Test Case 3: " << solution.mergeAlternately(word1, word2) << std::endl;

    word1 = "", word2 = "hello";
    std::cout << "Test Case 4: " << solution.mergeAlternately(word1, word2) << std::endl;

    word1 = "hello", word2 = "";
    std::cout << "Test Case 5: " << solution.mergeAlternately(word1, word2) << std::endl;

    return 0;
}
