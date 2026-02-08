#include <iostream>
using namespace std;

void removeAllSpaces(char str[], char result[]) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
}

void trimSpaces(char str[], char result[]) {
    int start = 0;
    while (str[start] == ' ') start++;

    int end = 0;
    while (str[end] != '\0') end++;
    end--;

    while (end >= 0 && str[end] == ' ') end--;

    int j = 0;
    for (int i = start; i <= end; i++) {
        result[j++] = str[i];
    }
    result[j] = '\0';
}

void removeExtraSpaces(char str[], char result[]) {
    int i = 0, j = 0;
    bool inSpace = false;

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            result[j++] = str[i];
            inSpace = false;
        } else if (!inSpace) {
            result[j++] = ' ';
            inSpace = true;
        }
        i++;
    }

    int start = 0;
    while (result[start] == ' ') start++;

    int end = j - 1;
    while (end >= 0 && result[end] == ' ') end--;

    int k = 0;
    for (int i = start; i <= end; i++) {
        result[k++] = result[i];
    }
    result[k] = '\0';
}

int main() {
    char input[1000];
    char noSpaces[1000];
    char trimmed[1000];
    char singleSpaced[1000];

    cout << "Enter a string: ";
    cin.getline(input, 1000);

    removeAllSpaces(input, noSpaces);
    trimSpaces(input, trimmed);
    removeExtraSpaces(input, singleSpaced);

    cout << "Original       : [" << input << "]" << endl;
    cout << "No Spaces      : [" << noSpaces << "]" << endl;
    cout << "Trimmed        : [" << trimmed << "]" << endl;
    cout << "Single Spaced  : [" << singleSpaced << "]" << endl;

    return 0;
}
