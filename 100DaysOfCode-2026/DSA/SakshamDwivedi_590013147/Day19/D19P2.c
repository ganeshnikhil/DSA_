#include <stdio.h>

int arr[100];
int size;
int found = 0;

int main(){
    printf("Enter the size of the array (Less than 100) : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    int low = 0;
    int high = size - 1;
    int mid = 0;
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    while (low <= high){
        mid = low + (high - low) / 2;

        if(mid == 0){
            if(arr[mid] > arr[mid + 1]){
                found = 1;
                break;
            }
            else{
                low = mid + 1;
                continue;
            }
        }

        if(mid == size - 1){
            if(arr[mid] > arr[mid - 1]){
                found = 1;
                break;
            }
            else{
                high = mid - 1;
                continue;
            }
        }
        if((arr[mid] > arr[mid + 1]) && (arr[mid] > arr[mid - 1])){
            found = 1;
            break;
        }

        if(arr[mid] < arr[mid - 1]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    if(found){
        printf("%d", arr[mid]);
    }
    else{
        printf("-1");
    }
}
