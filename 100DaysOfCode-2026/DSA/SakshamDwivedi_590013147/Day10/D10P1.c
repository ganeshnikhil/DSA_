#include <stdio.h>
#include <string.h>

char string1[100];
char string2[100];
int size1;
int size2;
char lower1[100];
char lower2[100];


int main(){
    printf("Enter the string 1 (Less than 100 characters) : ");
    fgets(string1, 100, stdin);
    printf("Enter the string 2 (Less than 100 characters) : ");
    fgets(string2, 100, stdin);
    if(string1[strlen(string1) - 1] == '\n'){
        string1[strlen(string1) - 1] = '\0';
    }
    size1 = strlen(string1);

    if(string2[strlen(string2) - 1] == '\n'){
        string2[strlen(string2) - 1] = '\0';
    }
    size2 = strlen(string2);

    for(int i = 0; i < size1; i++){
        if(string1[i] >= 'A' && string1[i] <= 'Z'){
            lower1[i] = string1[i] + 32;
        }
        else{
            lower1[i] = string1[i];
        }
    }
    lower1[size1] = '\0';

    for(int i = 0; i < size2; i++){
        if(string2[i] >= 'A' && string2[i] <= 'Z'){
            lower2[i] = string2[i] + 32;
        }
        else{
            lower2[i] = string2[i];
        }
    }
    lower2[size2] = '\0';

    int scmp = strcmp(string1, string2);

    if(scmp == 0){
        printf("Equal, Equal ignoring case, Both strings are identical!\n");
    }
    else{
        printf("Not Equal, ");
        if(strcmp(lower1, lower2) == 0){
            printf("Equal ignoring case, ");
        }
        else{
            printf("Not equal ignoring case, ");
        }

        if(scmp < 0){
            printf("%s comes before %s\n", string1, string2);
        }
        else{
            printf("%s comes before %s\n", string2, string1);
        }
    }
}
