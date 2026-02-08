#include <stdio.h>

int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            count++;
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 2, 4};
    int size = 6;
    int target = 2;

    int count = countOccurrences(arr, size, target);
    printf("%d appears %d times\n", target, count);  // Output: 3
    return 0;
}