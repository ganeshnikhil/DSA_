#include <stdio.h>

int linearSearch(int arr[], int size, int target) 
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target)
            return i;  
    }
    return -1;  
}

int main() 
{
    int n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element to search for: ");
    scanf("%d", &target);

    int index = linearSearch(arr, n, target);

    if (index != -1)
        printf("Target found at index: %d\n", index);
    else
        printf("Target not found. Returned -1.\n");

    return 0;
}
