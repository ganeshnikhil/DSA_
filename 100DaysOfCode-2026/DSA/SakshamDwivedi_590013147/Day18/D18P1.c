#include <stdio.h>

int arr[100];
int size;
int min_ind;

int main(){
    printf("Enter the size of the array (Less than 100) : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i++){
        min_ind = i;
        for(int j = i+1; j < size; j++){
            if(arr[min_ind] > arr[j]){
                min_ind = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_ind];
        arr[min_ind] = temp;
    }

    printf("Sorted Array : ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

}
