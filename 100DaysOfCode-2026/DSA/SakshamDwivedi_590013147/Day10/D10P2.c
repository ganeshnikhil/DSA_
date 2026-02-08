#include <stdio.h>
#include <string.h>

char string[100];
char removed_all[100];
char trimmed[100];
char single_spaced[100];

int main() {
    printf("Enter the string (Less than 100 characters): ");
    fgets(string, 100, stdin);

    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    //This section removes all the spaces
    int j = 0;
    int size = strlen(string);
    for (int i = 0; i < size; i++) {
        if (string[i] != ' ') {
            removed_all[j] = string[i];
            j++;
        }
    }
    removed_all[j] = '\0';
    printf("Removed all : \"%s\", ", removed_all);

    //This is the trimming section
    int start = 0;
    int end = size - 1;

    while(string[start] == ' '){
        start++;
    }
    while(end > start && string[end] == ' '){
        end--;
    }

    int k = 0;
    for(int i = start; i <= end; i++){
        trimmed[k] = string[i];
        k++;
    }
    trimmed[k] = '\0';

    printf("Trimmed : \"%s\" ", trimmed);

    //This section is for single space
    int i = start;
    int p = 0;
    int in_space = 0;

    while (i <= end) {
        if (string[i] == ' ') {
            if (!in_space) {
                single_spaced[p] = ' ';
                in_space = 1;
                p++;
            }
        } else {
            single_spaced[p] = string[i];
            in_space = 0;
            p++;
        }
        i++;
    }
    single_spaced[p] = '\0';
    printf("Single Spaced : \"%s\"\n", single_spaced);

    return 0;
}
