#include <stdio.h>

int squareRoot(int n) {
    if (n == 0 || n == 1)
        return n;
        
    int left = 1, right = n, ans = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (mid <= n / mid) {
            ans = mid;
            left = mid + 1;
        } else
            right = mid - 1;
    }
    return ans;
}

int main() {
    int n = 27;
    int result = squareRoot(n);
    printf("%d\n", result);  
    return 0;
}
