#include <stdio.h>

int colours[100];
int size;
int high, low, mid;

int main(){
    printf("Enter the size of the colours array (Less than 100) : ");
    scanf("%d", &size);
    high = size - 1;
    printf("Enter the colours [0, 1 and 2] : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &colours[i]);
    }
    while(mid <= high){
        if(colours[mid] == 0){
            int temp = colours[mid];
            colours[mid] = colours[low];
            colours[low] = temp;
            mid++;
            low++;
        }
        else if(colours[mid] == 1){
            mid++;
        }
        else{
            int temp = colours[mid];
            colours[mid] = colours[high];
            colours[high] = temp;
            high--;
        }
    }

    printf("Sorted Array : ");
    for(int i = 0; i < size; i++){
        printf("%d ", colours[i]);
    }
}
