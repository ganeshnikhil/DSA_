#include <stdio.h>

int firstOccurrence(int arr[], int size, int target) {
    int low = 0, high = size - 1, mid, result = -1;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, i, target;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d sorted array elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter target value: ");
    scanf("%d", &target);
    
    int result = firstOccurrence(arr, n, target);
    
    if (result != -1) {
        printf("First occurrence of %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found\n", target);
    }
    
    return 0;
}