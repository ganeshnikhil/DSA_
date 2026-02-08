#include <stdio.h>

int squareRoot(int n) {
    int low = 0, high = n, mid, ans = 0;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (mid * mid <= n) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int num;
    
    printf("Enter a positive number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Please enter a positive number!\n");
        return 1;
    }
    
    int result = squareRoot(num);
    printf("Square root of %d is %d\n", num, result);
    
    return 0;
}