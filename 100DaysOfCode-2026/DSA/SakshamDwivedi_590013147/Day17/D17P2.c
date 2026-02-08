#include <stdio.h>

int arr[100];
int tar;
int size;

int main(){
    printf("Enter the size of the array (Less than 100): ");
    scanf("%d", &size);
    printf("Enter the elements (In sorted order) : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the target value to search : ");
    scanf("%d", &tar);
    int start = 0;
    int end = size - 1;
    int current_index = size;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] > tar){
            end = mid - 1;
        }
        else if(arr[mid] < tar){
            start = mid + 1;
        }
        else if((arr[mid] == tar) && (current_index > mid)){
            current_index = mid;
            end = mid - 1;
        }
    }
    if(current_index < size){
        printf("%d", current_index);
    }
    else{
        printf("-1");
    }
}
