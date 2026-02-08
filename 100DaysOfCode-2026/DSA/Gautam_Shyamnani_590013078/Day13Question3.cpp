#include <iostream>
#include <string>

int main() {
    std::string input = "Java Python C++";
    std::string words[100]; 
    int wordCount = 0;

    std::string word = "";
    for (char ch : input) {
        if (ch != ' ') {
            word += ch;
        } else if (!word.empty()) {
            words[wordCount++] = word;
            word = "";
        }
    }

    
    if (!word.empty()) {
        words[wordCount++] = word;
    }

    
    for (int i = wordCount - 1; i >= 0; --i) {
        std::cout << words[i];
        if (i > 0) std::cout << " ";
    }

    std::cout << std::endl;
    return 0;
}
