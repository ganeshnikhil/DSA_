#include <stdio.h>
#include <string.h>

int isRotation(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    
    if (len1 != len2 || len1 == 0) return 0;
    
    char temp[2 * len1 + 1];
    strcpy(temp, s1);
    strcat(temp, s1);
    
    return strstr(temp, s2) != NULL;
}

int main() {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    
    if (isRotation(str1, str2))
        printf("Yes\n");
    else
        printf("No\n");
        
    return 0;
}
