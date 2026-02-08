#include<stdio.h>
int findMaximum(int arr[], int size) {
    if (size <= 0) {
        return -1; //return -1 for empty array
    }   
    int max = arr[0]; //initialize max with the first element
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; //update max if current element is greater
        }
    }
    return max;
}
int main() {
    int arr1[] = {3, 7, 1, 9, 4, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int result1 = findMaximum(arr1, size1);
    printf("%d\n", result1);  // Output: 9
    int arr2[] = {-5, -2, -8, -1, -3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int result2 = findMaximum(arr2, size2);
    printf("%d\n", result2);  // Output: -1
    return 0;
}