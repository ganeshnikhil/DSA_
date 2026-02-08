#include <stdio.h>
#include <string.h>
char string[100];
int size;
int pal = 1;

int main(){
    printf("Enter the string (Less than 100 characters): ");
    fgets(string, 100, stdin);
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
    size = strlen(string);
    for(int i = 0; i < size/2; i++){
        if(string[i] == string[size-i-1]){
            pal = 1;
        }
        else{
            pal = 0;
            break;
        }
    }

    if(pal == 0){
        printf("False");
    }
    else{
        printf("True");
    }

    return 0;

}
