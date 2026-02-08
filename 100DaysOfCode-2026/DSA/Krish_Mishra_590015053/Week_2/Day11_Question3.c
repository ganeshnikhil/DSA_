#include <stdio.h>
#include <string.h>

int countPalindromicSubstrings(char* str) {
    int n = strlen(str);
    int count = 0;

    for (int center = 0; center < 2 * n - 1; center++) {
        int left = center / 2;
        int right = left + center % 2;

        while (left >= 0 && right < n && str[left] == str[right]) {
            count++;
            left--;
            right++;
        }
    }
    return count;
}
int main() {
    char input[1000];
    printf("Enter the string: ");
    scanf("%s", input);

    int result = countPalindromicSubstrings(input);
    printf("Total Palindromic Substrings: %d\n", result);

    return 0;
}
