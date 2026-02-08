#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void compressString(const char *input) {
    int len = strlen(input);
    char result[2 * len + 1];
    int count = 1, j = 0;
    for (int i = 1; i <= len; i++) {
        if (input[i] == input[i-1]) count++;
        else {
            result[j++] = input[i-1];
            j += sprintf(&result[j], "%d", count);
            count = 1;
        }
    }
    result[j] = '\0';
    if (strlen(result) < len) printf("%s\n", result);
    else printf("%s\n", input);
}
int main() {
    compressString("aabcccccaaa"); 
    compressString("abc");        
    return 0;
}
