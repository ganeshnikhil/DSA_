#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char firstNonRepeatingChar(string& s) {
    unordered_map<char, int> freq;

    for (char ch : s) {
        freq[ch]++;
    }

    for (char ch : s) {
        if (freq[ch] == 1) {
            return ch;
        }
    }

    return -1; 
}

int main() {
    string input;
    getline(cin, input);

    char result = firstNonRepeatingChar(input);
    if (result != -1)
        cout << result << endl;
    else
        cout << -1 << endl;

}
