#include <stdio.h>
#include <string.h>
#include <ctype.h>
void removeSpaces(char *s) {
    char all[100], trim[100], single[100];
    int i = 0, j = 0, start = 0, end;

    // Remove all spaces
    for (i = 0; s[i]; i++)
        if (s[i] != ' ')
            all[j++] = s[i];
    all[j] = '\0';

    // Trim (remove leading and trailing spaces)
    while (isspace(s[start])) start++;
    end = strlen(s) - 1;
    while (end > start && isspace(s[end])) end--;

    j = 0;
    for (i = start; i <= end; i++)
        trim[j++] = s[i];
    trim[j] = '\0';

    // Reduce multiple spaces to single space
    j = 0;
    int space = 0;
    for (i = start; i <= end; i++) {
        if (isspace(s[i])) {
            if (!space) {
                single[j++] = ' ';
                space = 1;
            }
        } else {
            single[j++] = s[i];
            space = 0;
        }
    }
    single[j] = '\0';

    printf("Remove all: \"%s\"\n", all);
    printf("Trim: \"%s\"\n", trim);
    printf("Single spaces: \"%s\"\n", single);
}
