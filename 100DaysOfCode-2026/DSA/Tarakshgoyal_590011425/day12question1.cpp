#include <iostream>
using namespace std;

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

bool isSubstring(char str[], char pattern[]) {
    int n = stringLength(str);
    int m = stringLength(pattern);

    for (int i = 0; i <= n - m; i++) {
        bool match = true;
        for (int j = 0; j < m; j++) {
            if (str[i + j] != pattern[j]) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}

void concatenate(char s1[], char s2[], char result[]) {
    int i = 0;
    while (s1[i] != '\0') {
        result[i] = s1[i];
        i++;
    }

    int j = 0;
    while (s2[j] != '\0') {
        result[i] = s2[j];
        i++;
        j++;
    }
    result[i] = '\0';
}

bool isRotation(char s1[], char s2[]) {
    if (stringLength(s1) != stringLength(s2)) return false;

    char combined[2000];
    concatenate(s1, s1, combined);

    return isSubstring(combined, s2);
}

int main() {
    char str1[1000], str2[1000];
    cout << "Enter first string: ";
    cin.getline(str1, 1000);
    cout << "Enter second string: ";
    cin.getline(str2, 1000);

    if (isRotation(str1, str2)) {
        cout << "Second string is a rotation of the first." << endl;
    } else {
        cout << "Second string is NOT a rotation of the first." << endl;
    }

    return 0;
}
