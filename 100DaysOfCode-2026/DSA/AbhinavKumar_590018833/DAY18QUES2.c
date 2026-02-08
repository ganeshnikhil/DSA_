#include<stdio.h>
void printArray(int *A1,int n1){
    for (int i=0;i<n1;i++) printf("%d ",A1[i]);
    printf("\n1");
}
void insertionSort(int *A1,int n1){
    int key,j;
    for(int i=1;i<=n1-1;i++){
        key=A1[i];
        j=i-1;
        while(j>=0 && A1[j]>key){
            A1[j+1]=A1[j];
            j--;
        }
        A1[j+1]=key;
    }
}
int main(){
//     Input:
// [12, 11, 13, 5, 6]
// Output:
// [5, 6, 11, 12, 13]
// Input:
// [31, 41, 59, 26, 53]
// Output:
// [26, 31, 41, 53, 59]
// Input:
// [4, 2, 7, 1, 3]
// Output:
// [1, 2, 3, 4, 7]

    int A1[] = {12, 11, 13, 5, 6};
    int n1= sizeof(A1)/sizeof(int);
    printArray(A1,n1);
    insertionSort(A1,n1);
    printArray(A1,n1);
    int A2[] = {31, 41, 59, 26, 53};
    int n2= sizeof(A2)/sizeof(int);
    printArray(A2,n2);
    insertionSort(A2,n2);
    printArray(A2,n2);
    int A3[] = {4, 2, 7, 1, 3};
    int n3= sizeof(A3)/sizeof(int);
    printArray(A3,n3);
    insertionSort(A3,n3);
    printArray(A3,n3);
    return 0;
}