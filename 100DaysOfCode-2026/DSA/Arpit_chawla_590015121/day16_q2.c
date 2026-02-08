#include <stdio.h>

int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {4, 2, 7, 4, 9, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int frequency = countOccurrences(arr, size, target);
    printf("Element %d appears %d times\n", target, frequency);
    return 0;
}
