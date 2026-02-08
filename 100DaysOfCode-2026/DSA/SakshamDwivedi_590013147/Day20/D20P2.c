#include <stdio.h>

int arr1[100];
int arr2[100];
int arr3[200];
int size1;
int size2;
int size3;
int i = 0, j = 0, k= 0;

int main(){
    printf("Enter the size of array 1 : ");
    scanf("%d", &size1);
    printf("Enter the elements : ");
    for(int i = 0; i < size1; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of array 2 : ");
    scanf("%d", &size2);
    printf("Enter the elements : ");
    for(int i = 0; i < size2; i++){
        scanf("%d", &arr2[i]);
    }

    size3 = size1 + size2;

    i = j = k = 0;

    while((i < size1) && (j < size2)){
        if(arr1[i] <= arr2[j]){
            arr3[k] = arr1[i];
            i++, k++;
        }
        else{
            arr3[k] = arr2[j];
            j++, k++;
        }
    }

    while(i < size1){
        arr3[k] = arr1[i];
        i++, k++;
    }

    while(j < size2){
        arr3[k] = arr2[j];
        j++, k++;
    }

    for(int i = 0; i < size3; i++){
        printf("%d ", arr3[i]);
    }

}
