#include <iostream>
#include <string>
#include <unordered_map>

bool canFormPalindrome(const std::string& str) {
    std::unordered_map<char, int> freq;
    
    for (char c : str) {
        freq[c]++;
    }

    int oddCount = 0;
    for (auto& pair : freq) {
        if (pair.second % 2 != 0) {
            oddCount++;
        }
    }

   
    return oddCount <= 1;
}

int main() {
    std::string input = "aab";
    
    if (canFormPalindrome(input)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}
