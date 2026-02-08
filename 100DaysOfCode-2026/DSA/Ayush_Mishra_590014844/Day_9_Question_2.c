#include <stdio.h>
#include <ctype.h>
void countVowelsConsonants(const char *s, int *vowels, int *consonants) {
    *vowels = *consonants = 0;
    for (int i = 0; s[i]; i++) {
        if (isalpha(s[i])) {
            char ch = tolower(s[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
    }
}
