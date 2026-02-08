#include<stdio.h>
void printArray(int *A,int n){
    for(int i=0;i<n;i++) printf("%d ",A[i]);
    printf("\n");
}
void selectionSort(int *A,int n){
    int indexOfMin, temp;
    for(int i=0;i<n-1;i++){
        indexOfMin=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[indexOfMin]) indexOfMin=j;
        }
        temp=A[i];
        A[i]=A[indexOfMin];
        A[indexOfMin]=temp;
    }
}
int main(){
//     Input:
// [29, 10, 14, 37, 13]
// Output:
// [10, 13, 14, 29, 37]
// Input:
// [64, 25, 12, 22, 11]
// Output:
// [11, 12, 22, 25, 64]
// Input:
// [5, 3, 8, 1, 6]
// Output:
// [1, 3, 5, 6, 8]
    int A1[]={29, 10, 14, 37, 13};
    int n1=sizeof(A1)/sizeof(int);
    printArray(A1,n1);
    selectionSort(A1,n1);
    printArray(A1,n1);
    int A2[]={64, 25, 12, 22, 11};
    int n2=sizeof(A2)/sizeof(int);
    printArray(A2,n2);
    selectionSort(A2,n2);
    printArray(A2,n2);
    int A3[]={5, 3, 8, 1, 6};
    int n3=sizeof(A3)/sizeof(int);
    printArray(A3,n3);
    selectionSort(A3,n3);
    printArray(A3,n3);
    return 0;
}