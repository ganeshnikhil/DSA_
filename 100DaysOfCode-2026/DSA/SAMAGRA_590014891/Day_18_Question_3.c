#include <stdio.h>

void sortColors(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    int temp;

    while (mid <= high) {
        if (arr[mid] == 0) {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { // arr[mid] == 2
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr1[] = {2, 0, 2, 1, 1, 0};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 0, 1, 2, 1, 0, 0};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {1, 2, 0, 1, 2, 0};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    sortColors(arr1, size1);
    sortColors(arr2, size2);
    sortColors(arr3, size3);

    printArray(arr1, size1);
    printArray(arr2, size2);
    printArray(arr3, size3);

    return 0;
}
