#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isRotation(const char* s1, const char* s2) 
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) return false;

    char concat[2 * len1 + 1]; 
    strcpy(concat, s1);
    strcat(concat, s1);

    return strstr(concat, s2) != NULL;
}

int main()
{
    printf("%s\n", isRotation("abcde", "cdeab") ? "true" : "false");
    printf("%s\n", isRotation("hello", "world") ? "true" : "false");
    printf("%s\n", isRotation("waterbottle", "erbottlewat") ? "true" : "false");
    return 0;
}
