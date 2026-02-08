#include <stdio.h>


int arr[100];
int tar;
int size;
int found = 0;
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
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] > tar){
            end = mid - 1;
        }
        else if(arr[mid] < tar){
            start = mid + 1;
        }
        else{
            printf("%d", mid);
            found = 1;
            break;
        }
    }

    if(!found){
        printf("-1");
    }
}
