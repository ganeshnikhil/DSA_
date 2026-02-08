#include <stdio.h>

int arr[100];
int size;

int main(){
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array : ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}




