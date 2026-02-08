#include <stdio.h>
#include <string.h>

void reversewords(char str[]) {
    char *words[100];
    int count = 0;

    char *token = strtok(str, " \n");
    while(token) {
        words[count++] = token;
        token = strtok(NULL, " \n");
    }

    for(int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if(i > 0) printf(" ");
    }
    printf("\n");
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    reversewords(str);
    return 0;
}