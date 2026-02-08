#include <iostream>
#include <string>
#include <algorithm>

class Solution{
  public:
    void cleanString(const std::string &input){
      std::string noSpaces = input;
      noSpaces.erase(remove(noSpaces.begin(), noSpaces.end(), ' '), noSpaces.end());

      std::string trimmed = input;
      trimmed.erase(0, trimmed.find_first_not_of(' '));
      trimmed.erase(trimmed.find_last_not_of(' ') + 1);
      std::string singleSpaces = trimmed;

      std::string::iterator new_end = std::unique(singleSpaces.begin(), singleSpaces.end(),
                                                  [](char lhs, char rhs) { return (lhs == ' ' && rhs == ' '); });
      singleSpaces.erase(new_end, singleSpaces.end());

      std::cout << "Remove all: \"" << noSpaces << "\", Trim: \"" << trimmed << "\", Single spaces: \"" << singleSpaces << "\"" << std::endl;
    }
};

int main(){
    Solution *s = new Solution();
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    s->cleanString(input);
    delete s;

    return 0;
}
