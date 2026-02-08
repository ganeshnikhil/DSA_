#include<stdio.h>
int integerSquareRoot(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return n;
    int left = 1, right = n, result = 0;
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
    int input1 = 16;
    int output1 = integerSquareRoot(input1);
    printf("%d\n", output1);
    int input2 = 27;
    int output2 = integerSquareRoot(input2);
    printf("%d\n", output2);
    return 0;
}