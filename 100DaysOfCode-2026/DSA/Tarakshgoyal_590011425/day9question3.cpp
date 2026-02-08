#include <iostream>
using namespace std;

int getLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int charToIndex(char ch) {
    if (ch >= 'A' && ch <= 'Z') return ch - 'A';
    if (ch >= 'a' && ch <= 'z') return ch - 'a' + 26;
    return -1;
}

char findFirstNonRepeating(char str[]) {
    int freq[52] = {0};
    int len = getLength(str);

    for (int i = 0; i < len; i++) {
        int index = charToIndex(str[i]);
        if (index != -1) {
            freq[index]++;
        }
    }

    for (int i = 0; i < len; i++) {
        int index = charToIndex(str[i]);
        if (index != -1 && freq[index] == 1) {
            return str[i];
        }
    }

    return -1;
}

int main() {
    char input[1000];
    cout << "Enter a string: ";
    cin.getline(input, 1000);

    char result = findFirstNonRepeating(input);
    if (result == -1) {
        cout << "No " << endl;
    } else {
        cout << "First non repeating  " << result << endl;
    }

    return 0;
}
