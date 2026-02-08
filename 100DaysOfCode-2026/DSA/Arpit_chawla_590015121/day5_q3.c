#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[100];
    int n;
    bool isPalindrome = true;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
