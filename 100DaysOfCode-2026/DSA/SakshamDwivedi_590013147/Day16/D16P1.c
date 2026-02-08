#include <stdio.h>

float arr[100];
float target;
int size;
int found = 0;

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
            printf("%d", i);
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("-1");
    }
}
