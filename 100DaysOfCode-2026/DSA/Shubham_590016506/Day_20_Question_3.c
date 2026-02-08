#include <stdio.h>
#include <stdlib.h>

int compare_desc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int kth_largest(int arr[], int n, int k) {
    qsort(arr, n, sizeof(int), compare_desc);
    return arr[k - 1];
}

int main() {
    int arr[] = {3, 2, 1, 5, 6, 4};
    int k = 2, n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", kth_largest(arr, n, k));  // Output: 5
    return 0;
}