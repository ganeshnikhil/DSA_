#include <stdio.h>

int findPeak(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int left = (mid == 0 || arr[mid] >= arr[mid - 1]);
        int right = (mid == n - 1 || arr[mid] >= arr[mid + 1]);
        if (left && right)
            return mid;
        if (mid > 0 && arr[mid - 1] > arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int peakIndex = findPeak(arr, n);
    if (peakIndex != -1)
        printf("Peak found at index %d\n", peakIndex);
    else
        printf("No peak found\n");
    
    return 0;
}