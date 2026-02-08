//String.h has made code easier to write :)
#include <stdio.h>
#include <string.h>

char string[100];
char c_string[200];
int count = 1;

int main(){
    printf("Enter a string (Less than 100 characters) : ");
    fgets(string, 100, stdin);
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
    int size = strlen(string);
    for (int i = 0; i < size; i++) {
        if (i < size - 1 && string[i] == string[i + 1]) {
            count++;
        } else {
            char temp[20];
            temp[0] = string[i];
            temp[1] = '\0';
            strcat(c_string, temp);
            sprintf(temp, "%d", count);
            strcat(c_string, temp);

            count = 1;
        }
    }
    if (strlen(c_string) >= size) {
        printf("%s\n", string);
    } else {
        printf("%s\n", c_string);
    }
}
