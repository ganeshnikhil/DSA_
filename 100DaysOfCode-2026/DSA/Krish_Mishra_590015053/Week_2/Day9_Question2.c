#include <stdio.h>
#include <string.h>
char string[100];
int size;
int vowels;
int consonants;
int main(){
    printf("Enter the string (Less than 100 characters): ");
    fgets(string, 100, stdin);
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
    size = strlen(string);
    for(int i = 0; i < size; i++){
        if((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')){
            if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U'){
                vowels += 1;
            }
            else{
                consonants += 1;
            }
        }
    }
    printf("Vowels : %d, Consonants : %d", vowels, consonants);

}
