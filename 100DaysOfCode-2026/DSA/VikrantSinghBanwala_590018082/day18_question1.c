#include<stdio.h>
void selectionSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < size; j++)
            if(arr[j] < arr[minIndex]) minIndex = j;
        if(minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
int main() {
    int arr1[] = {29, 10, 14, 37, 13};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    selectionSort(arr1, size1);
    for(int i = 0; i < size1; i++) printf("%d ", arr1[i]);
    printf("\n");
    int arr2[] = {64, 25, 12, 22, 11};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    selectionSort(arr2, size2);
    for(int i = 0; i < size2; i++) printf("%d ", arr2[i]);
    printf("\n");   
    return 0;
}