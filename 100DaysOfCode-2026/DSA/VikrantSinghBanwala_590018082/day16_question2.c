#include <stdio.h>
int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}
int main() {
    int arr1[] = {1, 2, 3, 2, 2, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 2;
    int result1 = countOccurrences(arr1, size1, target1);
    printf("%d\n", result1);  // Output: 3
    int arr2[] = {5, 1, 5, 5, 3, 5, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 5;
    int result2 = countOccurrences(arr2, size2, target2);
    printf("%d\n", result2);  // Output: 4
    return 0;
}