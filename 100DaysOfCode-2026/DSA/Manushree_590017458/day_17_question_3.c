#include <stdio.h>

int integerSqrt(int n) {
    int low = 0, high = n, result = 0;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        long long sq = (long long)mid * mid;
        if(sq <= n) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n = 16;
    printf("%d\n", integerSqrt(n));
    return 0;
}
