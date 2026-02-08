#include <stdio.h>

int integerSquareRoot(int n) {
    if (n < 2) return n;

    int left = 0, right = n, result = 0;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        
        if ((long long)mid * mid <= n) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

int main() {
    printf("%d\n", integerSquareRoot(16));
    printf("%d\n", integerSquareRoot(27));
    printf("%d\n", integerSquareRoot(49));

    return 0;
}
