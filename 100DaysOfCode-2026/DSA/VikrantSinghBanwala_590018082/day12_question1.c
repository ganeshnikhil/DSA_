#include<stdio.h>
#include<string.h>
int isRotation(char *s1, char *s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    char temp[2 * strlen(s1) + 1];
    strcpy(temp, s1);
    strcat(temp, s1);
    return strstr(temp, s2) != NULL;
}
int main() {
    char *s1 = "abcde";
    char *s2 = "cdeab";
    printf("%s\n", isRotation(s1, s2) ? "true" : "false");
    s1 = "hello";
    s2 = "world";
    printf("%s\n", isRotation(s1, s2) ? "true" : "false");
    return 0;
}