#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int target1 = 30;
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", linearSearch(arr1, size1, target1));

    int arr2[] = {1, 5, 9, 3, 7};
    int target2 = 9;
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%d\n", linearSearch(arr2, size2, target2));

    return 0;
}

