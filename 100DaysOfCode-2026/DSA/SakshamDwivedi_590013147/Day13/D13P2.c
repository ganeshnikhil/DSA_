//O(n)
#include <stdio.h>
#include <string.h>

char string[100];
int size;
int count = 0;
int freq[26] = {0};
int odd_count = 0;

int main(){
    printf("Enter the string (Less than 100 characters) : ");
    fgets(string, 100, stdin);
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
    size = strlen(string);

    //This part is for lower case
    for(int i = 0; i < size; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            string[i] += 32;
        }
        else{
            string[i] = string[i];
        }
    }

    //This is where the real fun begins.
    for(int i = 0; i < size; i++){
        if(string[i] >= 'a' && string[i] <= 'z'){
            freq[string[i] - 'a']++;
        }
    }

    for(int i = 0; i < 26; i++){
        if(freq[i] % 2 != 0){
            odd_count++;
        }
    }
    if(odd_count > 1){
        printf("Palidrome not Possible!\n");
    }
    else{
        printf("Palindrome Possible!\n");
    }
}
