#include <iostream>
using namespace std;

void reverseWords(char input[], char output[]) {
    char words[100][100];  // max 100 words, each up to 100 characters
    int wordCount = 0, i = 0, j = 0;

    while (input[i] != '\0') {
        while (input[i] == ' ') i++;  // Skip spaces

        j = 0;
        while (input[i] != ' ' && input[i] != '\0') {
            words[wordCount][j++] = input[i++];
        }

        if (j > 0) {
            words[wordCount][j] = '\0';
            wordCount++;
        }
    }

    int k = 0;
    for (int w = wordCount - 1; w >= 0; w--) {
        int l = 0;
        while (words[w][l] != '\0') {
            output[k++] = words[w][l++];
        }
        if (w > 0) output[k++] = ' ';
    }
    output[k] = '\0';
}

int main() {
    char input[1000], output[1000];

    cout << "Enter a string: ";
    cin.getline(input, 1000);

    reverseWords(input, output);

    cout << "Reversed word order: " << output << endl;

    return 0;
}
