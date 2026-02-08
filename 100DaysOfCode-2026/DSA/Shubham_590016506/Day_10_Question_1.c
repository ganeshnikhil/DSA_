#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);

    if (strcmp(s1, s2) == 0)
        printf("Equal, Equal ignoring case, Strings are identical\n");
    else {
        printf("Not equal, ");
        int i = 0, f = 1;
        while (s1[i] && s2[i]) {
            if (tolower(s1[i]) != tolower(s2[i])) {
                f = 0;
                break;
            }
            i++;
        }
        if (f && s1[i] == '\0' && s2[i] == '\0')
            printf("Equal ignoring case, ");
        else
            printf("Not equal ignoring case, ");

        if (strcmp(s1, s2) < 0)
            printf("\"%s\" comes before \"%s\"\n", s1, s2);
        else
            printf("\"%s\" comes before \"%s\"\n", s2, s1);
    }
    return 0;
}