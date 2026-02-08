#include <stdio.h>

float arr[100];
float target;
int size;
int count = 0;

int main(){
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for(int i = 0; i < size; i++){
        scanf("%f", &arr[i]);
    }
    printf("Enter the target value : ");
    scanf("%f", &target);

    for(int i = 0; i < size; i++){
        if (arr[i] == target){
            count++;
        }
    }
    printf("%d", count);
}
