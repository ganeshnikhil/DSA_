#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int count = 0;

    for (int center = 0; center < len; center++) {
        int left, right;

        left = center;
        right = center;
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

    printf("Total Palindromic Substrings: %d\n", count);

    return 0;
}
