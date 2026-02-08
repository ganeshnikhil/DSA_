#include <stdio.h>

int squareRoot(int num) {
    if (num < 0) {
        return -1;  // Invalid input for negative numbers
    }
    if (num == 0 || num == 1) {
        return num;  // Special cases
    }
    
    int left = 1;
    int right = num;
    int result = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Check if mid * mid equals num
        if (mid == num / mid) {  // Using division to avoid overflow
            return mid;
        }
        // If mid * mid < num, store mid as potential result and search right
        else if (mid < num / mid) {
            result = mid;
            left = mid + 1;
        }
        // If mid * mid > num, search left
        else {
            right = mid - 1;
        }
    }
    
    return result;
}

int main() {
    // Test case 1
    int num1 = 16;
    printf("Input: %d\n", num1);
    printf("Output: %d\n\n", squareRoot(num1));
    
    // Test case 2
    int num2 = 27;
    printf("Input: %d\n", num2);
    printf("Output: %d\n\n", squareRoot(num2));
    
    // Test case 3
    int num3 = 49;
    printf("Input: %d\n", num3);
    printf("Output: %d\n", squareRoot(num3));
    
    return 0;
}