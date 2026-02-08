#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int start = 0, maxLength = 1;

    for (int i = 0; i < len; i++) {
        int left = i, right = i;
        while (left >= 0 && right < len && str[left] == str[right]) {
            if ((right - left + 1) > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }

        left = i;
        right = i + 1;
        while (left >= 0 && right < len && str[left] == str[right]) {
            if ((right - left + 1) > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }
    }

    printf("Longest Palindromic Substring: ");
    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

