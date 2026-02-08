#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char target;
    int count = 0;

    // Input the string 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Removing newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    // Getting character to search for
    printf("Enter character to count: ");
    scanf("%c", &target);

    // Counting occurrences
    for(int i = 0; i < strlen(str); i++) 
    {
        if(str[i] == target) 
        {
            count++;
        }
    }

    printf("The character '%c' appears %d times in the string.\n", target, count);

    return 0;
}