#include <stdio.h>

int integerSquareRoot(int n) {
    int low = 0;
    int high = n;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        long long square = (long long)mid * mid;

        if (square == n) {
            return mid;
        } else if (square < n) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Square root not defined for negative numbers.\n");
    } else {
        int result = integerSquareRoot(number);
        printf("Integer square root of %d is %d.\n", number, result);
    }

    return 0;
}
