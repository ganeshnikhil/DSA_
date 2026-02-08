#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    qsort(arr1, size1, sizeof(int), compare);
    printf("[");
    for (int i = 0; i < size1; i++) {
        printf("%d", arr1[i]);
        if (i < size1 - 1) printf(", ");
    }
    printf("]\n");
    int arr2[] = {5, 2, 8, 6, 1, 9, 4};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    qsort(arr2, size2, sizeof(int), compare);
    printf("[");
    for (int i = 0; i < size2; i++) {
        printf("%d", arr2[i]);
        if (i < size2 - 1) printf(", ");
    }
    printf("]\n");
    return 0;
}