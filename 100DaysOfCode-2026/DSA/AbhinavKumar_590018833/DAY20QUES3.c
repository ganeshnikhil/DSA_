#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b) - (*(int *)a);
}

int findKthLargest(int arr[], int n, int k) {
    qsort(arr, n, sizeof(int), compare);
    return arr[k - 1];
}

int main() {
    int arr1[] = {3, 2, 1, 5, 6, 4};
    int arr2[] = {7, 10, 4, 3, 20, 15};
    int arr3[] = {1, 23, 12, 9, 30, 2, 50};

    printf("Kth largest element in arr1 (K=2): %d\n", findKthLargest(arr1, 6, 2));
    printf("Kth largest element in arr2 (K=3): %d\n", findKthLargest(arr2, 6, 3));
    printf("Kth largest element in arr3 (K=4): %d\n", findKthLargest(arr3, 7, 4));

    return 0;
}
