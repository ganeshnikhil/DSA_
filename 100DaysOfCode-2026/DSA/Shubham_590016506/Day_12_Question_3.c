#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* compress(char *s) {
    int len = strlen(s), i = 0, count, k = 0;
    char *res = malloc(len * 2 + 1), num[12];
    while(i < len) {
        count = 1;
        while(i + count < len && s[i] == s[i + count]) count++;
        res[k++] = s[i];
        sprintf(num, "%d", count);
        for(int j = 0; num[j]; j++) {
            res[k++] = num[j];
        }
        i += count;
    }
    res[k] = '\0';
    return k >= len ? strdup(s) : res;
}

int main() {
    char input[] = "aabcccccaaa";
    char *output = compress(input);
    printf("Compressed: %s\n", output);
    free(output);
    return 0;
}