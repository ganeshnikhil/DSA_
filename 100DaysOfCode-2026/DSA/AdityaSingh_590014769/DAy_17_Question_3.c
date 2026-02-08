#include <stdio.h>

int integerSquareRoot(int n) {
    int left = 0, right = n, ans = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long square = 1LL * mid * mid;
        if (square == n)
            return mid;
        else if (square < n) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}

int main() {
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Square root is not defined for negative numbers.\n");
    } else {
        int result = integerSquareRoot(number);
        printf("Integer square root of %d is: %d\n", number, result);
    }

    return 0;
}
