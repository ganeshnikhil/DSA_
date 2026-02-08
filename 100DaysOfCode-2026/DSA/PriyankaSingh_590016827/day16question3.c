#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Checking if the array has at least one element
    if (n <= 0) 
    {
        printf("Array must contain at least one element.\n");
        return 1;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Initializing max with the first element
    int max = arr[0];

    // Traversing array to find the maximum
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

    printf("The maximum element in the array is: %d\n", max);

    return 0;
}
