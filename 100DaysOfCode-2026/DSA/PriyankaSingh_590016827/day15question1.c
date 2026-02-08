#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) 
{
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Creating an array of given size
    int arr[n];

    // Reading elements from the user
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Sorting the array using qsort
    qsort(arr, n, sizeof(int), compare);

    // Printing the sorted array
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
