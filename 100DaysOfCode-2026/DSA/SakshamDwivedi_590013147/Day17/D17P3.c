#include <stdio.h>

int num;
int sqroot;
int perfect = 0;

int main(){

    printf("Enter the number : ");
    scanf("%d", &num);
    int start = 0;
    int end = num;
    sqroot = -1;
    if(num == 0 || num == 1){
        printf("%d", num);
        perfect = 1;
    }
    else if(num < 0){
        printf("Imaginary Square root!\n");
        perfect = 1;
    }
    else{
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(mid*mid > num){
                end = mid - 1;
            }
            else if(mid*mid < num){
                sqroot = mid;
                start = mid + 1;
            }
            else{
                perfect = 1;
                printf("%d", mid);
                break;
            }
        }
        if(!perfect){
            printf("%d", sqroot);
        }

    }
}
