#include <stdio.h>
#include <string.h>

char string1[100];
char string2[100];
int size1;
int size2;

int main(){

    //Take input
    printf("Enter the string 1 (Less than 100 characters) : ");
    fgets(string1, 100, stdin);
    printf("Enter the string 2 (Less than 100 characters) : ");
    fgets(string2, 100, stdin);

    //Make it a perfect string
    if(string1[strlen(string1) - 1] == '\n'){
        string1[strlen(string1) - 1] = '\0';
    }
    size1 = strlen(string1);

    if(string2[strlen(string2) - 1] == '\n'){
        string2[strlen(string2) - 1] = '\0';
    }
    size2 = strlen(string2);

    //Convert it to lowercase
    for(int i = 0; i < size1; i++){
        if(string1[i] >= 'A' && string1[i] <= 'Z'){
            string1[i] = string1[i] + 32;
        }
        else{
            string1[i] = string1[i];
        }
    }
    string1[size1] = '\0';

    for(int i = 0; i < size2; i++){
        if(string2[i] >= 'A' && string2[i] <= 'Z'){
            string2[i] = string2[i] + 32;
        }
        else{
            string2[i] = string2[i];
        }
    }
    string2[size2] = '\0';

    //Remove spaces
    int j = 0;
    for (int i = 0; i < size1; i++) {
        if (string1[i] != ' ') {
            string1[j++] = string1[i];
        }
    }
    string1[j] = '\0';

    int k = 0;
    for (int i = 0; i < size2; i++) {
        if (string2[i] != ' ') {
            string2[k] = string2[i];
            k++;
        }
    }
    string2[k] = '\0';



    //Sort the strings
    for (int i = 0; i < j - 1; i++) {
        for (int w = i + 1; w < j; w++) {
            if (string1[i] > string1[w]) {
                char temp = string1[i];
                string1[i] = string1[w];
                string1[w] = temp;
            }
        }
    }

    for (int i = 0; i < k - 1; i++) {
        for (int w = i + 1; w < k; w++) {
            if (string2[i] > string2[w]) {
                char temp = string2[i];
                string2[i] = string2[w];
                string2[w] = temp;
            }
        }
    }


    if(strcmp(string1, string2) == 0){
        printf("Anagrams!");
    }
    else{
        printf("Not Anagrams!");
    }
}
