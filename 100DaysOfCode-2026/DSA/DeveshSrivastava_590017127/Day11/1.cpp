#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

class Solution{
  public: 
    bool isPalindrome(const std::string &s){
      std::string filtered = _formatString(s);
      std::string reversed = filtered;
      std::reverse(reversed.begin(), reversed.end());
      return filtered == reversed;
    }
  private:
    std::string _formatString(const std::string &s){
      std::string formatted = s;
   
      formatted.erase(std::remove_if(formatted.begin(), formatted.end(), [](char c) {
        return !std::isalnum(c);
      }), formatted.end());
      std::transform(formatted.begin(), formatted.end(), formatted.begin(), ::tolower);
      return formatted;}
};

int main(){

  Solution *s = new Solution();
  std::string input;
  std::cout << "Enter a string: ";
  std::getline(std::cin, input);
  s->isPalindrome(input) ? std::cout << "true\n" : std::cout << "false\n";
  delete s;
}