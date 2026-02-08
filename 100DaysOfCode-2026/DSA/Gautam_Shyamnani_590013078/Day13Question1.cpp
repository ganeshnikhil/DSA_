#include <iostream>
#include <string>

int main() {
    std::string input = "a bb ccc dddd";
    std::string word = "", longest = "";
    int count = 0;

    for (size_t i = 0; i <= input.length(); ++i) {
        if (i < input.length() && input[i] != ' ') {
            word += input[i]; 
        } else if (!word.empty()) {
            count++; 
            if (word.length() > longest.length()) {
                longest = word;
            }
            word = ""; 
        }
    }

    std::cout << "Word count: " << count << ", Longest word: \"" << longest << "\"" << std::endl;
    return 0;
}
