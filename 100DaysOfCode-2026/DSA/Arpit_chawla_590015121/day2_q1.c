#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Ask the user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Create the array

    // Input the elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check if the number is even
        if (arr[i] % 2 == 0) {
            sum += arr[i];  // Add to sum if even
        }
    }

    // Display the result
    printf("The sum of all even numbers is: %d\n", sum);

    return 0;
}
