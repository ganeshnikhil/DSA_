#include <stdio.h>

int arr[100];
int size;
int target;
int found = 0;

int main(){
    printf("Enter the size of the array (Less than 100) : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the target value to be searched : ");
    scanf("%d", &target);
    int low = 0;
    int high = size - 1;
    int mid = 0;
    while (low <= high){
        mid = low + (high - low) / 2;
        if(arr[mid] == target){
            found = 1;
            break;
        }

        if(arr[mid] >= arr[low]){
            if(arr[low] <= target && target < arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(arr[mid] < target && target <= arr[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }

    if(found){
        printf("%d\n", mid);
    }
    else{
        printf("-1\n");
    }
}
