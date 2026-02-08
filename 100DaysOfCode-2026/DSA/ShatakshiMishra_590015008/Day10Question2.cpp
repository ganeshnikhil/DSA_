#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string removeAllSpaces(string& str) {
    string result;
    for (char c : str) {
        if (c != ' ')
            result += c;
    }
    return result;
}

string trimSpaces(string& str) {
    size_t start = str.find_first_not_of(' ');
    size_t end = str.find_last_not_of(' ');
    
    if (start == string::npos) return "";
    return str.substr(start, end - start + 1);
}

string reduceToSingleSpaces(string& str) {
    string trimmed = trimSpaces(str);
    string result;
    bool inSpace = false;

    for (char c : trimmed) {
        if (c == ' ') {
            if (!inSpace) {
                result += ' ';
                inSpace = true;
            }
        } else {
            result += c;
            inSpace = false;
        }
    }
    return result;
}

int main() {
    string input;
    getline(cin, input);

    string allRemoved = removeAllSpaces(input);
    string trimmed = trimSpaces(input);
    string singleSpaced = reduceToSingleSpaces(input);

    cout << "Remove all: \"" << allRemoved << "\"" << ", ";
    cout << "Trim: \"" << trimmed << "\"" << ", ";
    cout << "Single spaces: \"" << singleSpaced << "\"" << endl;

    return 0;
}
