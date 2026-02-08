#include <iostream>
#include <unordered_map>
using namespace std;

void removeDuplicates(string &s1) {
    unordered_map<char, bool> seen;
    string result = "";

    for (char c : s1) {
        if (!seen[c]) {
            result += c;     
            seen[c] = true;
        }
    }

    s1 = result;
 }

int main() {
    string s1;
    cout << "Enter the input string: ";
    getline(cin, s1);

    removeDuplicates(s1);
    cout << "String after removing duplicates: " << s1 << endl;

    return 0;
}
