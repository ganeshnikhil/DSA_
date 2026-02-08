#include <stdio.h>
#include<string.h>
int isAlphabetic(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}
char toLowerChar(char ch) {
    if (ch >= 'A' && ch <= 'Z') return ch + 32;
    return ch;
}
int isVowel(char ch) {
    ch = toLowerChar(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
void countVowelsAndConsonants(char str[], int *vowels, int *consonants) {
    *vowels = *consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isAlphabetic(str[i])) {
            if (isVowel(str[i])) {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    countVowelsAndConsonants(str, &vowels, &consonants);

    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);

    return 0;
}
