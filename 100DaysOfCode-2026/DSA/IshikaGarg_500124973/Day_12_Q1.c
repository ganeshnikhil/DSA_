#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// 1. String Rotation
int isRotation(const char *s1, const char *s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    char tmp[2 * strlen(s1) + 1];
    strcpy(tmp, s1);
    strcat(tmp, s1);
    return strstr(tmp, s2) != NULL;
}
int main() {
    printf("%d\\n", isRotation("abcde", "cdeab"));
    return 0;
}
