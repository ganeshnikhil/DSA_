#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr1[] = {3, 7, 1, 9, 4, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", findMax(arr1, size1));

    int arr2[] = {-5, -2, -8, -1, -3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%d\n", findMax(arr2, size2));

    int arr3[] = {100, 250, 75, 300, 150};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("%d\n", findMax(arr3, size3));

    return 0;
}
