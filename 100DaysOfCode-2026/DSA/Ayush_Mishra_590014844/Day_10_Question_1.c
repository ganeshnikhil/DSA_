#include <stdio.h>
#include <string.h>
#include <ctype.h>
void compareStrings(char *s1, char *s2) {
    if (strcmp(s1, s2) == 0)
        printf("Equal\n");
    else
        printf("Not equal\n");

    // Case-insensitive comparison
    if (strcasecmp(s1, s2) == 0)
        printf("Equal ignoring case\n");
    else
        printf("Not equal ignoring case\n");

    int cmp = strcmp(s1, s2);
    if (cmp == 0)
        printf("Strings are identical\n");
    else if (cmp < 0)
        printf("\"%s\" comes before \"%s\"\n", s1, s2);
    else
        printf("\"%s\" comes before \"%s\"\n", s2, s1);
}
