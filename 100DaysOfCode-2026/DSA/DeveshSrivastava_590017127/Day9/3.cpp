#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
  public:
    int findFirstNonRepeatingCharacter(std::string &input) {

      std::unordered_map<char, int> charCount;
      for (char c : input) {
        charCount[c]++;
      }
      for (char c : input) {
        if (charCount[c] == 1) {
          return c;
        }
      }
      return -1;
    }
};

int main() {
  Solution *s = new Solution();

  std::string input;
  std::cout << "Enter a string: ";
  std::getline(std::cin, input);

  int result = s->findFirstNonRepeatingCharacter(input);
  if (result == -1) {
    std::cout << result << std::endl;
  } else {
    std::cout << static_cast<char>(result) << std::endl;
  }
  return 0;
}
