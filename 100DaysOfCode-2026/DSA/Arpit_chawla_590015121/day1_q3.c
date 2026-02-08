#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Ask user for array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // declare the array

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // add each element to sum
    }

    // Print the result
    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}
