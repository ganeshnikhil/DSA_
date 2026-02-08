#include<stdio.h>
void sortColors(int arr[], int size) {
    int low = 0, mid = 0, high = size - 1;
    while(mid <= high) {
        if(arr[mid] == 0) {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}
int main() {
    int arr1[] = {2, 0, 2, 1, 1, 0};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    sortColors(arr1, size1);
    for(int i = 0; i < size1; i++) printf("%d ", arr1[i]);
    printf("\n");
    int arr2[] = {2, 0, 1, 2, 1, 0, 0};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    sortColors(arr2, size2);
    for(int i = 0; i < size2; i++) printf("%d ", arr2[i]);
    printf("\n");   
    return 0;
}