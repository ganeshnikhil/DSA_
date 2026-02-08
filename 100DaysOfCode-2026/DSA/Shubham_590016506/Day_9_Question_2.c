#include <stdio.h>
#include <ctype.h>

int main() {
    const char *text = "Programming";
    int vowels = 0, consonants = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        char ch = tolower(text[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}