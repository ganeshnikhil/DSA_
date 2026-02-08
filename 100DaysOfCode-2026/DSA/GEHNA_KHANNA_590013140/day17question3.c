#include <stdio.h>
int integerSquareRoot(int n) {
    if (n < 0) 
    return -1;            
    if (n == 0 || n == 1) 
    return n;  
    int low = 1, high = n, result = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        int square = mid * mid;

        if (square == n)
            return mid;  
        else if (square < n) {
            result = mid;   
            low = mid + 1;  
        } else {
            high = mid - 1; 
        }
    }

    return result;
}

int main() {
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Square root of negative number is not defined in integers.\n");
    } else {
        int sqrtResult = integerSquareRoot(num);
        printf("Integer square root of %d is: %d\n", num, sqrtResult);
    }

    return 0;
}
