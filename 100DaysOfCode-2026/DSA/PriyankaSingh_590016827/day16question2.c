#include <stdio.h>

int main() 
{
    int n, target, count = 0;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Input the target value to count
    printf("Enter the target value to count: ");
    scanf("%d", &target);

    // Counting the frequency of the target value
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == target) 
        {
            count++;
        }
    }

    printf("The target value %d appears %d time(s) in the array.\n", target, count);

    return 0;
}
