#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int nums[n];
    int freq[n+1]; // to store frequency of numbers from 1 to n

    // Initialize frequency array to 0
    for (i = 0; i <= n; i++) {
        freq[i] = 0;
    }

    // Input the array elements
    printf("Enter %d elements (from 1 to %d, one number is repeated and one is missing):\n", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        freq[nums[i]]++;  // Count frequency
    }

    int missing = -1, repeated = -1;

    // Check frequency array for missing and repeated
    for (i = 1; i <= n; i++) {
        if (freq[i] == 0) {
            missing = i;
        }
        else if (freq[i] == 2) {
            repeated = i;
        }
    }

    // Output the result
    printf("Repeated number is: %d\n", repeated);
    printf("Missing number is: %d\n", missing);

    return 0;
}
