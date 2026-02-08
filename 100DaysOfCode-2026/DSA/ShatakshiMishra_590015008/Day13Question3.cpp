#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    vector<string> words;
    string word = "";

    for (char c : input) {
        if (c != ' ') 
        {
            word += c;
        } 
        else if (!word.empty()) 
        {
            words.push_back(word);
            word = "";
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    reverse(words.begin(), words.end());

    string result = "";
    for (int i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i != words.size() - 1) {
            result += ' ';
        }
    }

    cout << result << endl;
}
