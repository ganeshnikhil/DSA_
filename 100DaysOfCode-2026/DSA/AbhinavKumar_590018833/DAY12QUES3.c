#include <stdio.h>
#include <string.h>

void compressString(char *str) {
    int len = strlen(str);
    if (len == 0) {
        printf("%s\n", str);
        return;
    }

    char compressed[2 * len + 1];  
    int index = 0, count = 1;

    for (int i = 1; i < len; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            index += sprintf(compressed + index, "%c%d", str[i - 1], count);
            count = 1;
        }
    }
    index += sprintf(compressed + index, "%c%d", str[len - 1], count);
    compressed[index] = '\0';

    if (strlen(compressed) < len)
        printf("%s\n", compressed);
    else
        printf("%s\n", str);
}

int main() {
    compressString("aabcccccaaa"); 
    compressString("abc");   
    compressString("aabbcc");  
    return 0;
}
