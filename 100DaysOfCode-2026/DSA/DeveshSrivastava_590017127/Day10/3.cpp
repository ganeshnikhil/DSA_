// A problem that teaches character frequency analysis and comparison techniques for anagram detection.

// Two strings are anagrams if they contain the same characters with the same frequency, but possibly in different order. Write a program to check if two given strings are anagrams of each other. Ignore case and spaces for this comparison.

// This problem helps understand character frequency analysis and comparison techniques.

// Your task: Check if two strings are anagrams (ignore case and spaces).

// Examples
// Input:

// String1: "listen", String2: "silent"
// Output:

// true
// Input:

// String1: "hello", String2: "world"
// Output:

// false
// Input:

// String1: "The Eyes", String2: "They See"
// Output:

// true

#include <iostream>
#include <string>
#include <algorithm>

class Solution{
public:
    bool areAnagrams(const std::string& str1, const std::string& str2) {
        std::string cleanedStr1 = str1;
        std::string cleanedStr2 = str2;
        cleanedStr1.erase(remove_if(cleanedStr1.begin(), cleanedStr1.end(), ::isspace), cleanedStr1.end());
        cleanedStr2.erase(remove_if(cleanedStr2.begin(), cleanedStr2.end(), ::isspace), cleanedStr2.end());
        std::transform(cleanedStr1.begin(), cleanedStr1.end(), cleanedStr1.begin(), ::tolower);
        std::transform(cleanedStr2.begin(), cleanedStr2.end(), cleanedStr2.begin(), ::tolower);

        std::sort(cleanedStr1.begin(), cleanedStr1.end());
        std::sort(cleanedStr2.begin(), cleanedStr2.end());

        // Compare the sorted strings
        return cleanedStr1 == cleanedStr2;
    }

};

int main() {
    Solution *s = new Solution();
    std::string str1, str2;
    std::cout << "Enter first string: ";
    std::getline(std::cin, str1);
    std::cout << "Enter second string: ";
    std::getline(std::cin, str2);

    s->areAnagrams(str1, str2) ? std::cout << "true" : std::cout << "false";
    std::cout << std::endl;

    delete s;
    return 0;
}