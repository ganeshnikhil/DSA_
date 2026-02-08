#include <iostream>
using namespace std;

void countWordsAndFindLongest(char str[], int &wordCount, char longestWord[]) {
    int i = 0, len = 0, maxLen = 0;
    wordCount = 0;
    char currentWord[100];

    while (str[i] != '\0') {
        while (str[i] == ' ') i++; // skip spaces

        len = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            currentWord[len++] = str[i++];
        }

        if (len > 0) {
            wordCount++;
            currentWord[len] = '\0';
            if (len > maxLen) {
                maxLen = len;
                for (int j = 0; j <= len; j++) {
                    longestWord[j] = currentWord[j];
                }
            }
        }
    }

    longestWord[maxLen] = '\0';
}

int main() {
    char input[1000];
    char longest[100];
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(input, 1000);

    countWordsAndFindLongest(input, count, longest);

    cout << "Word count: " << count << endl;
    cout << "Longest word: " << longest << endl;

    return 0;
}
