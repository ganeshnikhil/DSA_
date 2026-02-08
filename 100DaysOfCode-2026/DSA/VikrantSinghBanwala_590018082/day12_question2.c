#include<stdio.h>
#include<string.h>
void removeDuplicates(char *str) {
    int hash[256] = {0};
    int index = 0;
    for (int i = 0; str[i]; i++) {
        if (!hash[(unsigned char)str[i]]) {
            hash[(unsigned char)str[i]] = 1;
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
}
int main() {
    char str1[] = "programming";
    removeDuplicates(str1);
    printf("%s\n", str1);
    char str2[] = "hello";
    removeDuplicates(str2);
    printf("%s\n", str2);
    return 0;
}