#include <stdio.h>

int countOccurrences(int arr[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            count++;
    }
    return count;
}

int main() {
    int arr[] = {3, 5, 2, 3, 7, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int result = countOccurrences(arr, n, target);

    printf("Target %d appears %d times\n", target, result);

    return 0;
}
