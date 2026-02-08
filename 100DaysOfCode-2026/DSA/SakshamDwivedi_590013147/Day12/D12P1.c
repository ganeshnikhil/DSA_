//Idk why I wasn't using string functions earlier, strlen, strcpy, strcat and strstr saved the day :)
#include <stdio.h>
#include <string.h>

char string[100];
char c_string[100];
char new_string[200];
int main(){
    printf("Enter a string 1 (Less than 100 characters) : ");
    fgets(string, 100, stdin);
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
    printf("Enter a string 2 (Less than 100 characters) : ");
    fgets(c_string, 100, stdin);
    if(c_string[strlen(c_string) - 1] == '\n'){
        c_string[strlen(c_string) - 1] = '\0';
    }
    if(strlen(string) == strlen(c_string)){
        strcpy(new_string, c_string);
        strcat(new_string, c_string);

        if(strstr(new_string, string) != NULL){
            printf("This is a rotated string!\n");
        }
        else{
            printf("This is not a rotated string!\n");
        }
    }
    else{
        printf("This is not a rotated string!\n");
    }

}
