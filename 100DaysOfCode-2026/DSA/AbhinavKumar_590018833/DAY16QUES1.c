#include<stdio.h>
int linearSearch(int arr[], int size1, int element1){
    for (int i = 0; i < size1; i++)
    {
        if(arr[i]==element1){
            return i;
        }
    }
    return -1;
}
 
int binarySearch(int arr[], int size1, int element1){
    int low, mid, high;
    low = 0;
    high = size1-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element1){
            return mid;
        }
        if(arr[mid]<element1){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    
}
int main(){
//     Input:
// Array: [10, 20, 30, 40, 50], Target: 30
// Output:
// 2
    int arr1[] = {10,20,30,40,50};
    int size1 = sizeof(arr1)/sizeof(int);
    int element1 = 30;
    int searchIndex1 = binarySearch(arr1, size1, element1);
    printf("The element %d was found at index %d \n", element1, searchIndex1);
//     Input:
// Array: [1, 5, 9, 3, 7], Target: 8
// Output:
// -1

    int arr2[] = {1,5,9,3,7};
    int size2 = sizeof(arr2)/sizeof(int);
    int element2 = 8;
    int searchIndex2 = binarySearch(arr2, size2, element2);
    printf("The element %d was found at index %d \n", element2, searchIndex2);
//     Input:
// Array: [15, 25, 35, 45], Target: 25
// Output:
// 1
    int arr3[]={15,25,35,45};
    int element3= 25;
    int size3=sizeof(arr3)/sizeof(int);
    int searchIndex3=binarySearch(arr3,size3,element3);
    printf("The element %d was found at index %d",element3,searchIndex3);
    return 0;

}