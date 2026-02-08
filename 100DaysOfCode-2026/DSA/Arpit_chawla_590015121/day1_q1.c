#include <stdio.h>

int main() {
    int n, i;

    // Asking user for the size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int nums[n]; // declaring the array

    // Input elements in array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Replace negative numbers with 0
    for (i = 0; i < n; i++) {
        if (nums[i] < 0) {
            nums[i] = 0;
        }
    }

    // Print modified array
    printf("Modified array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
 
