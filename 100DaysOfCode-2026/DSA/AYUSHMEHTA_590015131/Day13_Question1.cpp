#include <iostream>
#include <string>
using namespace std;

void wordCount(string &sentence, int n) {
    int wordCount = 0;
    string longestWord = "";
    string currentWord = "";

    for (int i = 0; i <= n; i++) {
        if (i == n || sentence[i] == ' ') {
            if (!currentWord.empty()) {
                wordCount++;
                if (currentWord.length() > longestWord.length()) {
                    longestWord = currentWord;
                }
                currentWord = "";
            }
        } else {
            currentWord += sentence[i];
        }
    }

    cout << "Total words: " << wordCount << endl;
    cout << "Longest word: " << longestWord << endl;
}

int main() {
    string sentence;
    cout<<"Enter the word :"<< " ";
    getline(cin, sentence);
    int n = sentence.size();
    wordCount(sentence, n);
    return 0;
}
