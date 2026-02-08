//O(n)
#include <stdio.h>
#include <string.h>

char string[100];
int size;
int start_point;
char reversed_string[100];
int j = 0;

int main(){
    printf("Enter the string (Less than 100 characters) : ");
    fgets(string, 100, stdin);
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
    size = strlen(string);
    start_point = size;
    for (int i = size; i >= 0; i--) {
        if (string[i] == ' ' || i == 0) {
            int begin;
            if (i == 0) {
                begin = 0;
            }
            else {
                begin = i + 1;
            }

            for (int k = begin; k < start_point; k++) {
                reversed_string[j] = string[k];
                j++;
            }

            if (i != 0) {
                reversed_string[j] = ' ';
                j++;
            }

            start_point = i;
        }
    }

    reversed_string[j] = '\0';
    printf("%s", reversed_string);
}
