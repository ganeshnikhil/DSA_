
// 2. Longest Palindromic Substring
// A problem that combines palindrome detection with substring analysis and demonstrates dynamic programming concepts.

// Given a string, find the longest substring that is a palindrome. If there are multiple palindromic substrings of the same maximum length, return any one of them. A substring is a contiguous sequence of characters within a string.

// This problem combines palindrome detection with substring analysis and is a classic dynamic programming problem that teaches optimal substructure concepts.

// Your task: Find the longest palindromic substring in a given string.

// Examples
// Input:

// "babad"
// Output:

// "bab" (or "aba")
// Input:

// "cbbd"
// Output:

// "bb"
// Input:

// "racecar"
// Output:

// "racecar". Longest Palindromic Substring
// A problem that combines palindrome detection with substring analysis and demonstrates dynamic programming concepts.

// Given a string, find the longest substring that is a palindrome. If there are multiple palindromic substrings of the same maximum length, return any one of them. A substring is a contiguous sequence of characters within a string.

// This problem combines palindrome detection with substring analysis and is a classic dynamic programming problem that teaches optimal substructure concepts.

// Your task: Find the longest palindromic substring in a given string.

// Examples
// Input:

// "babad"
// Output:

// "bab" (or "aba")
// Input:

// "cbbd"
// Output:

// "bb"
// Input:

// "racecar"
// Output:

// "racecar"

#include <iostream>
#include <string>
#include <vector>

class Solution{

  public: 
    std::string longestPalindrome(const std::string &s) {
        int n = s.size();
        if (n == 0) return "";

        std::vector<std::vector<bool>> dp(n, std::vector<bool>(n, false));
        int start = 0, maxLength = 1;

        for (int i = 0; i < n; ++i) {
            dp[i][i] = true;
        }

        for (int len = 2; len <= n; ++len) {
            for (int i = 0; i < n - len + 1; ++i) {
                int j = i + len - 1;
                if (s[i] == s[j]) {
                    if (len == 2 || dp[i + 1][j - 1]) {
                        dp[i][j] = true;
                        if (len > maxLength) {
                            maxLength = len;
                            start = i;
                        }
                    }
                }
            }
        }

        return s.substr(start, maxLength);
    }
};

int main() {
    Solution sol;
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    std::string result = sol.longestPalindrome(input);
    std::cout <<  result << std::endl;

    return 0;
} 