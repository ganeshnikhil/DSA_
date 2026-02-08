#include <stdio.h>

int intSquareRoot(int n) {
    int low = 0, high = n, ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        long long sq = (long long)mid * mid;

        if (sq == n)
            return mid;
        else if (sq < n) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int num = 17;
    int result = intSquareRoot(num);

    printf("Integer square root of %d is %d\n", num, result);

    return 0;
}
