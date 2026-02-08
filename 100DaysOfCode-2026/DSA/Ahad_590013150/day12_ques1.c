#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(char* s1, char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 != len2) return false;

    char concat[2 * len1 + 1];
    strcpy(concat, s1);
    strcat(concat, s1);

    return strstr(concat, s2) != NULL;
}

int main() {
    printf("%d\n", isRotation("abcde", "cdeab"));         // 1 (true)
    printf("%d\n", isRotation("hello", "world"));         // 0 (false)
    printf("%d\n", isRotation("waterbottle", "erbottlewat")); // 1 (true)
    return 0;
}
