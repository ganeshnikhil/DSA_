#include <iostream>
using namespace std;

bool isEqual(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) return false;
        i++;
    }
    return str1[i] == '\0' && str2[i] == '\0';
}

char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}

bool isEqualIgnoreCase(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (toLower(str1[i]) != toLower(str2[i])) return false;
        i++;
    }
    return str1[i] == '\0' && str2[i] == '\0';
}

int lexCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) return -1;
        else if (str1[i] > str2[i]) return 1;
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') return 0;
    else if (str1[i] == '\0') return -1;
    else return 1;
}

int main() {
    char str1[1000], str2[1000];
    cout << "Enter first string: ";
    cin.getline(str1, 1000);
    cout << "Enter second string: ";
    cin.getline(str2, 1000);

    if (isEqual(str1, str2)) {
        cout << "Strings are exactly equal." << endl;
    } else if (isEqualIgnoreCase(str1, str2)) {
        cout << "Strings are equal ." << endl;
    } else {
        cout << "Strings are different." << endl;
    }

    int cmp = lexCompare(str1, str2);
    if (cmp == 0) {
        cout << "Both strings are equal lexicographically." << endl;
    } else if (cmp < 0) {
        cout << "First string comes first lexicographically." << endl;
    } else {
        cout << "Second string comes first lexicographically." << endl;
    }

    return 0;
}
