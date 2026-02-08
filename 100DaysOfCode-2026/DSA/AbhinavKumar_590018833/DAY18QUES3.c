#include<stdio.h>
void printArray(int *A, int n) {
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");
}
void colorSort(int *A,int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        switch(A[mid]){
            case 0:{
                int temp= A[low];
                A[low]=A[mid];
                A[mid]=temp;
                low++,mid++;
                break;
            }
            case 1:{
                mid++;
                break;
            }
            case 2:{
                int temp=A[mid];
                A[mid]=A[high];
                A[high]=temp;
                high--;
                break;

            }
            default:{
                printf("This case is invalid, lol!\n");
                return;
            }
        }
    }
}
int main(){
//     Input:
// [2, 0, 2, 1, 1, 0]
// Output:
// [0, 0, 1, 1, 2, 2]
// Input:
// [2, 0, 1, 2, 1, 0, 0]
// Output:
// [0, 0, 0, 1, 1, 2, 2]
// Input:
// [1, 2, 0, 1, 2, 0]
// Output:
// [0, 0, 1, 1, 2, 2]
    int A1[] = {2, 0, 2, 1, 1, 0};
    int n1 = sizeof(A1) / sizeof(int);
    printArray(A1, n1);
    colorSort(A1, n1);
    printArray(A1, n1);
    int A2[] = {2, 0, 1, 2, 1, 0, 0};
    int n2 = sizeof(A2) / sizeof(int);
    printArray(A2, n2);
    colorSort(A2, n2); 
    printArray(A2, n2);
    int A3[] = {1, 2, 0, 1, 2, 0};
    int n3 = sizeof(A3) / sizeof(int);
    printArray(A3, n3);
    colorSort(A3, n3);
    printArray(A3, n3);
    return 0;     
}