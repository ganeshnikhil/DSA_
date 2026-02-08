#include <stdio.h>
#include <string.h>

int countPalindromes(char str[]) {
    int n = strlen(str), count = 0;

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
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Total palindromic substrings: %d\n", countPalindromes(str));
    return 0;
}
