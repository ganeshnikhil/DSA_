#include <stdio.h>

int main() 
{
    int arr[100];
    int n;
    int target;
    int count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) 
    {
        printf("Invalid size! Enter between 1 and 100.\n");
        return 1;
    }
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to count: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == target) 
        {
            count++;
        }
    }
    printf("Number %d appears %d time(s).\n", target, count);
    return 0;
}
