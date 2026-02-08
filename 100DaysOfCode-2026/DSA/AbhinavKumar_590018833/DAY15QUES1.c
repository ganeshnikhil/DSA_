#include<stdio.h>
#include<stdlib.h>
void printArray(int *A, int n){
    for(int i=0;i<n;i++) printf("%d ",A[i]);
    printf("\n");
}
void selectionSort(int *A,int n){
    int indexofMin;
    int temp;
    for (int i=0;i<n-1;i++){
        indexofMin=i;
        for(int j=i+1;j<n;j++){
            if (A[j]<A[indexofMin]) indexofMin=j;
            
        }
        temp=A[i];
        A[i]=A[indexofMin];
        A[indexofMin]=temp;
    }
}
int main(){
    //Input:
// [64, 34, 25, 12, 22, 11, 90]
// Output:
// [11, 12, 22, 25, 34, 64, 90]
    int A1[]={64,34,25,12,22,11,90};
    int n1=7;
    printArray(A1,n1);
    selectionSort(A1,n1);
    printArray(A1,n1);
//     Input:
// [5, 2, 8, 6, 1, 9, 4]
// Output:
// [1, 2, 4, 5, 6, 8, 9]
    int A2[]={5,2,8,6,1,9,4};
    int n2= 7;
    printArray(A2,n2);
    selectionSort(A2,n2);
    printArray(A2,n2);
//     Input:
// [100, 50, 25, 75]
// Output:
// [25, 50, 75, 100]   
    int A3[]={100,50,25,75};
    int n3= 4;
    printArray(A3,n3);
    selectionSort(A3,n3);
    printArray(A3,n3);
    return 0;
}

