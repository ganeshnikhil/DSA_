#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1, mid;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, i, target;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Array size must be positive!\n");
        return 1;
    }
    
    int arr[n];
    
    printf("Enter %d sorted array elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter target value to search: ");
    scanf("%d", &target);
    
    int result = binarySearch(arr, n, target);
    
    if (result != -1) {
        printf("Element %d found at index %d (position %d)\n", target, result, result + 1);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    
    return 0;
}