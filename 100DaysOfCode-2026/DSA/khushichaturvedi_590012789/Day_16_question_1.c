#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;  
    }
    return -1; 
}

int main() {
    int arr[] = {4, 7, 2, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int index = linearSearch(arr, n, target);

    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}
