#include <iostream>
using namespace std;

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

int intToString(int num, char result[], int pos) {
    int temp = num;
    int count = 0;
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    int divisor = 1;
    for (int i = 1; i < count; i++) divisor *= 10;

    while (divisor > 0) {
        result[pos++] = (num / divisor) + '0';
        num %= divisor;
        divisor /= 10;
    }

    return pos;
}

void compressString(char str[], char compressed[]) {
    int i = 0, j = 0;
    int len = stringLength(str);

    while (i < len) {
        char current = str[i];
        int count = 1;
        i++;

        while (i < len && str[i] == current) {
            count++;
            i++;
        }

        compressed[j++] = current;
        j = intToString(count, compressed, j);
    }
    compressed[j] = '\0';

    int compressedLen = stringLength(compressed);
    if (compressedLen >= len) {
        for (int k = 0; k <= len; k++) {
            compressed[k] = str[k];
        }
    }
}

int main() {
    char input[1000], output[1000];
    cout << "Enter a string: ";
    cin.getline(input, 1000);

    compressString(input, output);
    cout << "Compressed string: " << output << endl;

    return 0;
}
