#include <stdio.h>
int first_occurance(int arr[], int size, int target) {
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        return i;
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
    int index = first_occurance(arr, size, target);
    printf("%d", index);
    return 0;
}
