#include <stdio.h>

float arr[100];
int size;
float max;

int main(){
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for(int i = 0; i < size; i++){
        scanf("%f", &arr[i]);
    }

    max = arr[0];
    for(int i = 0; i < size; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    if(max == (int)max){
        printf("Max : %d", (int)max);
    }
    else{
        printf("Max : %f", max);
    }
}
