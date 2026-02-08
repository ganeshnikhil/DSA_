#include <stdio.h>

int integerSquareRoot(int n) {
    int left = 0, right = n, result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mid * mid == n) {
            return mid;
        } else if (mid * mid < n) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Square root is not defined for negative numbers.\n");
        return 0;
    }

    int sqrtValue = integerSquareRoot(n);

    printf("Integer square root of %d is %d\n", n, sqrtValue);

    return 0;
}
