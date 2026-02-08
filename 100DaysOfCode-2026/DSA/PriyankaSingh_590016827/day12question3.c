#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* compressString(const char* str) 
{
    int len = strlen(str);
    if (len == 0) return strdup("");
    
    // Allocating maximum possible compressed string length (2x original)
    char* compressed = malloc(2 * len + 1);
    if (!compressed) return NULL;
    
    int count = 1;
    int index = 0;
    
    for (int i = 1; i <= len; i++) 
    {
        if (i < len && str[i] == str[i-1]) 
        {
            count++;
        } 
        else 
        {
            // Append character and count
            compressed[index++] = str[i-1];
            int num_chars = snprintf(compressed + index, 10, "%d", count);
            index += num_chars;
            count = 1;
        }
    }
    
    compressed[index] = '\0';
    
    // Returning original if compression didn't help
    if (strlen(compressed) >= len) 
    {
        free(compressed);
        return strdup(str);
    }
    
    return compressed;
}

int main() 
{
    char input[100];
    
    printf("Enter a string to compress: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Removing newline
    
    char* compressed = compressString(input);
    
    printf("Compressed string: %s\n", compressed);
    
    free(compressed);
    return 0;
}