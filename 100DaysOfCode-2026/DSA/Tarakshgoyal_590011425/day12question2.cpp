#include <iostream>
using namespace std;

int charIndex(char ch) {
    if (ch >= 'a' && ch <= 'z') return ch - 'a';           // 0–25
    if (ch >= 'A' && ch <= 'Z') return ch - 'A' + 26;      // 26–51
    if (ch >= '0' && ch <= '9') return ch - '0' + 52;      // 52–61
    return -1;
}

void removeDuplicates(char str[], char result[]) {
    bool seen[62] = {false};  // For a–z, A–Z, 0–9
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        int idx = charIndex(str[i]);
        if (idx == -1 || !seen[idx]) {
            result[j++] = str[i];
            if (idx != -1) seen[idx] = true;
        }
    }
    result[j] = '\0';
}

int main() {
    char input[1000], output[1000];
    cout << "Enter a string: ";
    cin.getline(input, 1000);

    removeDuplicates(input, output);

    cout << "String after removing duplicates: " << output << endl;
    return 0;
}
