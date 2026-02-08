#include <stdio.h>

int freq(int arr[], int size, int target) {
    int c=0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            c++; 
    }
    return c; 
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
    int frequency = freq(arr, size, target);
    printf("frequency of target element: %d\n", frequency);
   

    return 0;
}
