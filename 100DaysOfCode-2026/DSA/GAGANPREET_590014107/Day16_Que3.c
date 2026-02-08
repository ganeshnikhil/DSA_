#include<stdio.h>
int findMax(int arr[], int n) {
    int max = arr[0];  

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }

    return max;
}
int main(){

    int arr1[]={3,7,1,9,4,6};
    int n1=sizeof(arr1)/sizeof(int);
    printf("\nThe largest element found int arr1 is %d", findMax(arr1,n1));

    int arr2[]={-5,-2,-8,-1,-3};
    int n2=sizeof(arr2)/sizeof(int);
    printf("\nThe largest element found in the arr2 is %d", findMax(arr2,n2));

    int arr3[]={100,250,75,300,150};
    int n3=sizeof(arr3)/sizeof(n3);
    printf("\nThe largest element found in arr3 is %d", findMax(arr3,n3));
    return 0;
}
