#include <stdio.h>

int integerSquareRoot(int n)
{
    int low = 0, high = n, result = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        long long square = (long long)mid * mid;

        if (square == n)
            return mid;
        else if (square < n)
        {
            result = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return result;
}

int main()
{
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input! Please enter a positive number.\n");
        return 1;
    }

    int sqrt = integerSquareRoot(n);
    printf("The integer square root of %d is: %d\n", n, sqrt);

    return 0;
}
