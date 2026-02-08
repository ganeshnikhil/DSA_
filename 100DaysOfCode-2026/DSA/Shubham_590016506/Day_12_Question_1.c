#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool isrotation(char *s1, char *s2) {
    if(strlen(s1) != strlen(s2)) return false;
    char *temp = malloc(strlen(s1) * 2 + 1);
    sprintf(temp, "%s%s", s1, s1);
    bool result = strstr(temp, s2) != NULL;
    free(temp);
    return result;
}

int main() {
    char str1[] = "abcde";
    char str2[] = "cdeab";

    if(isrotation(str1, str2)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}