#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int isRotation(const char *s1, const char *s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    
    char *concat = malloc(strlen(s1) * 2 + 1);
    strcpy(concat, s1);
    strcat(concat, s1);

    int result = strstr(concat, s2) != NULL;
    free(concat);
    return result;
}

int main() {
    printf("%d\n", isRotation("abcde", "cdeab")); // 1
    printf("%d\n", isRotation("hello", "world")); // 0
    return 0;
}
