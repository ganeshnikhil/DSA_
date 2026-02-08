#include <iostream>
#include <unordered_set>
using namespace std;

string removeDuplicates(const string& input) {
    unordered_set<char> seen;
    string result = "";

    for (char ch : input) {
        if (seen.find(ch) == seen.end()) {
            seen.insert(ch);
            result += ch;
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string output = removeDuplicates(input);
    cout << "Output: " << output << endl;

    return 0;
}
