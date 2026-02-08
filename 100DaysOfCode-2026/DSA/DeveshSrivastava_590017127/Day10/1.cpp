
#include <iostream>
#include <string>
#include <algorithm>

class Solution{
public:
    void compareStrings(const std::string& str1, const std::string& str2) {
        if (str1 == str2) {
            std::cout << "Equal, ";
        } else {
            std::cout << "Not equal, ";
        }
        std::string lowerStr1 = str1;
        std::string lowerStr2 = str2;
        std::transform(lowerStr1.begin(), lowerStr1.end(), lowerStr1.begin(), ::tolower);
        std::transform(lowerStr2.begin(), lowerStr2.end(), lowerStr2.begin(), ::tolower);

        if (lowerStr1 == lowerStr2) {
            std::cout << "Equal ignoring case, ";
        } else {
            std::cout << "Not equal ignoring case, ";
        }
        if (str1 < str2) {
            std::cout << "\"" << str1 << "\" comes before \"" << str2 << "\"" << std::endl;
        } else if (str1 > str2) {
            std::cout << "\"" << str2 << "\" comes before \"" << str1 << "\"" << std::endl;
        } else {
            std::cout << "Strings are identical" << std::endl;
        }
    }
};

int main(){

    Solution *s = new Solution();
    std::string str1, str2;
    std::cout << "Enter first string: ";
    std::getline(std::cin, str1);
    std::cout << "Enter second string: ";
    std::getline(std::cin, str2);

    s->compareStrings(str1, str2);
    delete s;
}
