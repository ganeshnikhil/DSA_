#include <stdio.h>

int search(int* nums1, int numsSize, int target1) {
    int low = 0, high = numsSize - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums1[mid] == target1)
            return mid;

        if (nums1[low] <= nums1[mid]) {
            if (nums1[low] <= target1 && target1 < nums1[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else {
            if (nums1[mid] < target1 && target1 <= nums1[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int nums1[] = {4, 5, 6, 7, 0, 1, 2};
    int target1 = 0;
    int index1 = search(nums1, sizeof(nums1)/sizeof(nums1[0]), target1);
    printf("Index: %d\n", index1); 
    int nums2[] = {4, 5, 6, 7, 0, 1, 2};
    int target2 = 3;
    int index2 = search(nums2, sizeof(nums2)/sizeof(nums2[0]), target2);
    printf("Index: %d\n", index2); 
    int nums3[]={11,13,15,17,19,2,3,6,7};
    int target3=6;
    int index3 = search(nums3, sizeof(nums3)/sizeof(nums3[0]), target3);
    printf("Index: %d\n", index3);
    
    return 0;
}
