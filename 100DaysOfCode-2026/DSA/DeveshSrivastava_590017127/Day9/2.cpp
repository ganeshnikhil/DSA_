#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
/*A problem that teaches character classification and frequency analysis in text
 * processing.*/
/**/
/*Write a program that takes a string as input and counts the number of vowels
 * (a, e, i, o, u) and consonants separately. Consider both uppercase and
 * lowercase letters. Ignore any non-alphabetic characters like numbers, spaces,
 * or special symbols.*/
/**/
/*This helps in text analysis and understanding the composition of words.*/
/**/
/*Your task: Count vowels and consonants separately, ignoring non-alphabetic
 * characters.*/

class Solution {

    std::unordered_map<char, int> vowels = {
        {'a', 0}, {'e', 0}, {'i', 0}, {'o', 0}, {'u', 0},
    };

  public:
    std::pair<int, int> countVowelsAndConsonants(const std::string &input) {
      int vowelCount = 0, consonantCount = 0;

      for (char c : input) {
        if (std::isalpha(c)) {
          char lower = std::tolower(c);
          if (vowels.find(lower) != vowels.end()) {
            vowelCount++;
          } else {
            consonantCount++;
          }
        }
      }
      return {vowelCount, consonantCount};
    }
};

int main() {
  Solution *s = new Solution();

  std::string input;
  std::cout << "Enter a string: ";
  std::getline(std::cin, input);

  std::pair<int, int> result = s->countVowelsAndConsonants(input);
  std::cout << "Vowels" << ": " << result.first
            << ", Consonants: " << result.second << std::endl;
}
