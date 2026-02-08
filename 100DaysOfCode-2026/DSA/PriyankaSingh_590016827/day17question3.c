#include <stdio.h>

// Function to calculate the integer square root using binary search
int integerSquareRoot(int n) 
{
    if (n == 0 || n == 1)
        return n;

    int left = 1, right = n, ans = 0;

    while (left <= right) 
    {
        int mid = left + (right - left) / 2;

        // To avoid overflow, use long long for mid*mid
        long long square = (long long)mid * mid;

        if (square == n)
            return mid;
        else if (square < n) 
        {
            ans = mid;         // mid is a candidate, but try for larger
            left = mid + 1;
        } 
        else 
        {
            right = mid - 1;    // Too big, try smaller
        }
    }

    return ans;
}

int main() {
    int number, result;

    // Input the number
    printf("Enter a positive number to find its integer square root: ");
    scanf("%d", &number);

    // Checking for valid input
    if (number < 0) 
    {
        printf("Invalid input! Enter a non-negative number.\n");
        return 1;
    }

    // Calculating integer square root
    result = integerSquareRoot(number);

    printf("The integer square root of %d is %d.\n", number, result);

    return 0;
}
