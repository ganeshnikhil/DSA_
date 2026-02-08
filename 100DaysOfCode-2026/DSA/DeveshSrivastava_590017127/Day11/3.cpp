// A problem that teaches systematic substring enumeration and palindrome detection techniques.

// Write a program that counts all palindromic substrings in a given string. A palindromic substring reads the same forward and backward. Count both odd-length and even-length palindromes. Single characters are also considered palindromes.

// This problem helps understand how to systematically check all possible substrings and introduces concepts used in string pattern matching algorithms.

// Your task: Count the total number of palindromic substrings in a string.

// Examples
// Input:

// "abc"
// Output:

// 3
// Input:

// "aaa"
// Output:

// 6
// Input:

// "aba"
// Output:

// 4

#include <iostream>
#include <string>
#include <vector>

class Solution{
  public:
  int countPalindromicSubstrings(const std::string &s) {
      int n = s.size();
      if (n == 0) return 0;

      std::vector<std::vector<bool>> dp(n, std::vector<bool>(n, false));
      int count = 0;

      // Check for odd-length palindromes
      for (int center = 0; center < n; ++center) {
          int left = center, right = center;
          while (left >= 0 && right < n && s[left] == s[right]) {
              dp[left][right] = true;
              count++;
              left--;
              right++;
          }
      }

      // Check for even-length palindromes
      for (int center = 0; center < n - 1; ++center) {
          int left = center, right = center + 1;
          while (left >= 0 && right < n && s[left] == s[right]) {
              dp[left][right] = true;
              count++;
              left--;
              right++;
          }
      }

      return count;
  }
};

int main() {
    Solution sol;
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    int result = sol.countPalindromicSubstrings(input);
    std::cout << result << std::endl;

    return 0;
}