#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a); // Descending order
}

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter value of K: ");
    scanf("%d", &k);

    qsort(arr, n, sizeof(int), compare);
    printf("%dth largest element is: %d\n", k, arr[k-1]);
    return 0;
}
