#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[200], all[200], trim[200], single[200];
    fgets(s, sizeof(s), stdin);
    int i = 0, j = 0;
    while (s[i]) if (s[i] != ' ') all[j++] = s[i++]; else i++;
    all[j] = '\0';

    i = 0;
    while (isspace(s[i])) i++;
    j = strlen(s) - 1;
    while (j >= 0 && isspace(s[j])) j--;
    strncpy(trim, s + i, j - i + 1);
    trim[j - i + 1] = '\0';

    i = 0, j = 0;
    int space = 0;
    while (s[i]) {
        if (!isspace(s[i])) {
            single[j++] = s[i++];
            space = 0;
        } else {
            if (!space) single[j++] = ' ';
            space = 1;
            i++;
        }
    }
    single[j] = '\0';
    i = 0;
    while (isspace(single[i])) i++;
    j = strlen(single) - 1;
    while (j >= 0 && isspace(single[j])) j--;
    single[j + 1] = '\0';

    printf("Remove all: \"%s\", Trim: \"%s\", Single spaces: \"%s\"\n", all, trim, single);
    return 0;
}