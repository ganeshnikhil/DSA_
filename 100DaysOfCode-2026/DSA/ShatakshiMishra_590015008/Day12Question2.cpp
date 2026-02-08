#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string removeDuplicates(string& input) {
    unordered_set<char> seen;
    string result;

    for (char ch : input) {
        if (seen.find(ch) == seen.end()) 
        {
            seen.insert(ch);
            result += ch;
        }
    }

    return result;
}

int main() {
    string input;
    cin >> input;
    string output = removeDuplicates(input);

    cout << output << endl;
}
