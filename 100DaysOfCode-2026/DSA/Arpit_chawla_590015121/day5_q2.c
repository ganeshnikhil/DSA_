#include <stdio.h>

int main() {
    int arr[100];
    int n, totalSum = 0, actualSum = 0;

    printf("Enter the value of n (the array should have n numbers from 0 to n with one missing): ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    totalSum = n * (n + 1) / 2;

    int missing = totalSum - actualSum;
    printf("The missing number is: %d\n", missing);

    return 0;
}

