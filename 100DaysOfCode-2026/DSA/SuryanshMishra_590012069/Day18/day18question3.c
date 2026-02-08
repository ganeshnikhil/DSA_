#include <stdio.h>

void sortColors(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    int temp;
    
    // Three-way partitioning using Dutch National Flag algorithm
    while (mid <= high) {
        if (arr[mid] == 0) {
            // Swap with low pointer and increment both low and mid
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            // Element is in correct position, just move mid pointer
            mid++;
        }
        else { // arr[mid] == 2
            // Swap with high pointer and decrement high
            // Don't increment mid as we need to check the swapped element
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}

void printArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    // Test case 1
    int arr1[] = {2, 0, 2, 1, 1, 0};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Input: ");
    printArray(arr1, n1);
    sortColors(arr1, n1);
    printf("Output: ");
    printArray(arr1, n1);
    printf("\n");
    
    // Test case 2
    int arr2[] = {2, 0, 1, 2, 1, 0, 0};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Input: ");
    printArray(arr2, n2);
    sortColors(arr2, n2);
    printf("Output: ");
    printArray(arr2, n2);
    printf("\n");
    
    // Test case 3
    int arr3[] = {1, 2, 0, 1, 2, 0};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Input: ");
    printArray(arr3, n3);
    sortColors(arr3, n3);
    printf("Output: ");
    printArray(arr3, n3);
    
    return 0;
}