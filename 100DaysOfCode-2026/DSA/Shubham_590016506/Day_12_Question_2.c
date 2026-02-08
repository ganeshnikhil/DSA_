#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* removeduplicates(char *s) {
    int seen[256] = {0}, j = 0;
    char *res = malloc(strlen(s) + 1);
    for(int i = 0; s[i]; i++) {
        if(!seen[(unsigned char)s[i]]) {
            seen[(unsigned char)s[i]] = 1;
            res[j++] = s[i];
        }
    }
    res[j] = '\0';
    return res;
}

int main() {
    char input[] = "programming";
    char *output = removeduplicates(input);
    printf("Result: %s\n", output);
    free(output);
    return 0;
}