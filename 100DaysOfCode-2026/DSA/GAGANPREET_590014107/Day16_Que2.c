#include<stdio.h>
#include<stdlib.h>
int countOccurrences(int arr[], int n, int element) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }
    return count;
}
int main(){
    int arr1[]={1,2,3,2,2,4};
    int element1=2;
    int n1=sizeof(arr1)/sizeof(int);
    printf("The element %d has occured %d times", element1,countOccurrences(arr1,n1,element1));

printf("\n");
int arr2[]={5,1,5,5,3,5,7};
    int element2=5;
    int n2=sizeof(arr2)/sizeof(int);
    printf("The element %d has occured %d times", element2,countOccurrences(arr2,n2,element2));
    printf("\n");

    int arr3[]={10,20,30,10,40};
    int element3=10;
    int n3=sizeof(arr3)/sizeof(int);
    printf("The element %d has occured %d times", element3,countOccurrences(arr3,n3,element3));
    return 0;

}
