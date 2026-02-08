#include <stdio.h>

int main() 
{
    int num;
    int result = 0;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (num < 0) 
    {
        printf("Invalid input! Enter a positive number.\n");
        return 1;
    }
    int left = 0;
    int right = num;
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        long square = (long)mid * mid;
        if (square == num) 
        {
            result = mid;
            break;
        }
        else if (square < num) 
        {
            result = mid;
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }
    printf("Integer square root of %d is %d.\n", num, result);
    return 0;
}
