#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWords(char *str) {
    char *words[100];
    int count = 0;
    int len = strlen(str);
    char temp[1000];
    strcpy(temp, str); 

    char *token = strtok(temp, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");
}

int main() {
    reverseWords("Hello World Programming");
    reverseWords("The quick brown fox");
    reverseWords("Java Python C++"); 
    return 0;
}
