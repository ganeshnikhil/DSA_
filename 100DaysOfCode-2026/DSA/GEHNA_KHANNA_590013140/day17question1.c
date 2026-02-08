#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int sp = 0, ep = size - 1;

    while (sp <= ep) {
        int mid = (sp + ep) / 2;

        if (arr[mid] == target)
            return mid;  
        else if (arr[mid] < target)
            sp = mid + 1;  
        else
            ep = mid - 1;  
    }

    return -1;  
}


int main() {
    int size;
    printf("enter array size\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter target element\n");
    scanf("%d",&target);
    int index = binarySearch(arr, size, target);
    printf("%d", index);
    return 0;
}
