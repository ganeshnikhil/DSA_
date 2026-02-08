#include <stdio.h>
#include <stdlib.h>

int arr[100];
int n;

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements :");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

