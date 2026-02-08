#include <stdio.h>
#include <string.h>

char string[100];
int size;
int count = 0;
int main(){
    printf("Enter a string (Less than 100 characters) : ");
    fgets(string, 100, stdin);
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
    size = strlen(string);
    int w = 0;

    for(int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < w; j++) {
            if (string[i] == string[j]) {
                break;
            }
        }
        if (j == w) {
            string[w] = string[i];
            w++;
        }
    }
    string[w] = '\0';

    printf("%s\n", string);
}
