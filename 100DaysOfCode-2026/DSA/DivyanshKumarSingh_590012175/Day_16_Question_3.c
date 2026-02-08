#include <stdio.h>

int findMax(int arr[], int size) 
{
    if (size == 0) 
    {
        return -1; 
    }

    int max = arr[0]; 

    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

    return max;
}

int main() 
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array is empty.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, n);
    printf("Maximum element: %d\n", max);

    return 0;
}
