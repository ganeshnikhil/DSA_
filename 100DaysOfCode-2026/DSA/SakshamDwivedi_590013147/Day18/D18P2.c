#include <stdio.h>

int arr[100];
int size;
int sw_key;
int j;

int main(){
    printf("Enter the size of the array (Less than 100) : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i < size; i++){
        sw_key = arr[i];
        j = i - 1;
        while((j >= 0) && (arr[j] > sw_key)){
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = sw_key;
    }
    printf("Sorted Array : ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
