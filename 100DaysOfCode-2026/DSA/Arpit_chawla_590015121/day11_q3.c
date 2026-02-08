#include <stdio.h>
#include <string.h>

#define MAX 1000

int countPalindromicSubstrings(char str[]) {
    int count = 0;
    int len = strlen(str);

    for (int center = 0; center < len; center++) {
        int left = center, right = center;
        while (left >= 0 && right < len && str[left] == str[right]) {
            count++;
            left--;
            right++;
        }

        left = center;
        right = center + 1;
        while (left >= 0 && right < len && str[left] == str[right]) {
            count++;
            left--;
            right++;
        }
    }

    return count;
}

int main() {
    char input[MAX];

    printf("Enter a string: ");
    fgets(input, MAX, stdin);

    size_t len = strlen(input);
    if (input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    int result = countPalindromicSubstrings(input);
    printf("Total palindromic substrings: %d\n", result);

    return 0;
}
