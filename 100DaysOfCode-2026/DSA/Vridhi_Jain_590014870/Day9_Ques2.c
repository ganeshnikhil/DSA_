#include <stdio.h>

int main() {
    char str[100];
    int i;
    int vowels = 0, consonants = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        
        if(ch >= 'a' && ch <= 'z') {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    
    return 0;
}