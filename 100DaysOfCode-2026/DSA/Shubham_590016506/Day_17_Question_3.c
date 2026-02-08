#include <stdio.h>

int integerSqrt(int n) {
    int left = 0, right = n, ans = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        if ((long long)mid * mid <= n) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}

int main() {
    int num = 27;
    int root = integerSqrt(num);
    printf("Output: %d\n", root); 
    return 0;
}