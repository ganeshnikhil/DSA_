#include <stdio.h>
#include <string.h>

char string[100];
int size;
char string_f[100];
char rev_s[100];

int main(){
    printf("Enter the string (Less than 100 character): ");
    fgets(string, 100, stdin);
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
    size = strlen(string);
    //Lower case the whole thing
    for(int i = 0; i < size; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            string[i] = string[i] + 32;
        }
        else{
            string[i] = string[i];
        }
    }
    int ind = 0;
    for(int i = 0; i < size; i++){
        if((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')){
            string_f[ind] = string[i];
            ind++;
        }
    }
    string_f[strlen(string_f)] = '\0';
    size = strlen(string_f);

    //Reverse the string
    for(int i = 0; i < size; i++){
        rev_s[i] = string_f[size - 1 - i];
    }

    rev_s[size] = '\0';

    //Check palindrome
    if(strcmp(string_f, rev_s) == 0){
        printf("Palindrome!\n");
    }
    else{
        printf("Not Palindrome!\n");
    }

}
