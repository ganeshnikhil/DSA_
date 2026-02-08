#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char firstNonRepeatingChar(const string& str) {
    unordered_map<char, int> freq;

   
    for (char c : str) {
        freq[c]++;
    }

    
    for (char c : str) {
        if (freq[c] == 1) {
            return c;
        }
    }

    return -1; 
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    char result = firstNonRepeatingChar(input);
    if (result == -1)
        cout << "-1" << endl;
    else
        cout << "First non-repeating character: " << result << endl;

    return 0;
}
