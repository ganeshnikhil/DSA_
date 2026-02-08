#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the first and last element
    printf("First element: %d\n", arr[0]);
    printf("Last element: %d\n", arr[n - 1]);

    return 0;
}
