#include <stdio.h>
#include <string.h>
char string[100];
int size;
int arr[100] = {0};

int main(){
    printf("Enter the string (Less than 100 characters): ");
    fgets(string, 100, stdin);
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
    size = strlen(string);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(string[i] == string[j]){
                arr[i]++;
            }
        }
    }

    for(int i = 0; i < size; i++){
        if(arr[i] == 1){
            printf("First non repeating character : %c", string[i]);
            break;
        }
    }

}
