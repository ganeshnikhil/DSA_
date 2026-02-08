#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
/*A problem that teaches palindrome detection using string comparison and
 * case-insensitive analysis.*/
/**/
/*A palindrome is a word, phrase, or sequence that reads the same forward and
 * backward. Write a program that checks whether a given string is a palindrome
 * or not. For this basic version, consider only alphabetic characters and
 * ignore case sensitivity. Return true if the string is a palindrome, false
 * otherwise.*/
/**/
/*Your task: Check if a string is a palindrome (case-insensitive, alphabetic
 * characters only).*/
class Solution {

  public:
    bool isPalindrome(const std::string &input) {
      std::stack<char> charStack;
      std::string filteredInput;
      for (char c : input) {
        if (std::isalpha(c)) {
          filteredInput += std::tolower(c);
        }
      }
      for (char c : filteredInput) {
        charStack.push(c);
      }
      for (char c : filteredInput) {
        if (c != charStack.top()) {
          return false;
        }
        charStack.pop();
      }
      return true;
    }
};

int main() {
  Solution *solution = new Solution();
  std::string input;
  std::cout << "Enter a string: ";
  std::getline(std::cin, input);
  bool result = solution->isPalindrome(input);
  if (result) {
    std::cout << "True" << std::endl;
  } else {
    std::cout << "False" << std::endl;
  }
  delete solution;
}
