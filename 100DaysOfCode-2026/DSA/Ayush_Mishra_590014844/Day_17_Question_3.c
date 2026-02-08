#include <stdio.h>

int integerSqrt(int n) {
    if (n < 2) return n;
    int left = 1, right = n, ans = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mid <= n / mid) {
            ans = mid;
            left = mid + 1;
        } else right = mid - 1;
    }
    return ans;
}

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("Integer square root: %d\n", integerSqrt(n));
    return 0;
}
