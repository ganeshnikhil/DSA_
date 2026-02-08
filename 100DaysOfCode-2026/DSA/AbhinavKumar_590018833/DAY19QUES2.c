#include <stdio.h>

int findPeakElement(int* nums1, int numsSize) {
    int low = 0, high = numsSize - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        // Compare mid and mid+1 to decide the slope
        if (nums1[mid] < nums1[mid + 1])
            low = mid + 1;  // Peak must be on the right
        else
            high = mid;     // Peak is on the left or at mid
    }

    // At the end, low == high pointing to a peak
    return low;
}

int main() {
    //input:{1,3,20,4,1,0};
    int nums1[] = {1,3,20,4,1,0};
    int n1 = sizeof(nums1) / sizeof(int);

    int peakIndex1 = findPeakElement(nums1, n1);
    printf("Peak element found at index: %d\n", peakIndex1); 
//     Input:
// [1, 2, 1, 3, 5, 6, 4]
// Output:
// 5
// Input:
// [10, 20, 15, 2, 23, 90, 67]
// Output:
// 1
    int nums2[]={1,2,1,3,5,6,4};
    int n2 = sizeof(nums2) / sizeof(int);
    int peakIndex2 = findPeakElement(nums2, n2);
    printf("Peak element found at index: %d\n", peakIndex2);
    
    int nums3[] = {10, 20, 15, 2, 23, 90, 67};
    int n3 = sizeof(nums3) / sizeof(int);
    int peakIndex3 = findPeakElement(nums3, n3);
    printf("Peak element found at index: %d\n", peakIndex3);
    return 0;
}
