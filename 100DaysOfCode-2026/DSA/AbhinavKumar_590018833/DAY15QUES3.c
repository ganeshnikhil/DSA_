#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void printArray( int *A,int n){
    for(int i=0;i<n;i++) printf("%d ",A[i]);
    printf("\n");
}
void bubbleSort(int *A,int n){
    int temp;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]) {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
int main(){
//     Input:
// [5, 2, 8, 1, 9]
// Output:
// [1, 2, 5, 8, 9]
    int A1[]={5,2,8,1,9};
    int n1=5;
    printArray(A1,n1);
    bubbleSort(A1,n1);
    printArray(A1,n1);
    // Input:
// [3, 7, 4, 1, 6, 2]
// Output:
// [1, 2, 3, 4, 6, 7]
    int A2[]={3,7,4,1,6,2};
    int n2=6;
    printArray(A2,n2);
    bubbleSort(A2,n2);
    printArray(A2,n2);
    // Input:
// [64, 34, 25, 12, 22, 11, 90]
// Output:
// [11, 12, 22, 25, 34, 64, 90]
    int A3[]={64,34,25,12,22,11,90};
    int n3=7;
    printArray(A3,n3);
    bubbleSort(A3,n3);
    printArray(A3,n3);
    return 0;

}