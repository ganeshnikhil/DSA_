#include<stdio.h>
#include<string.h>
int canPalin(char *str){
    int charCount[256] = {0};
    for (int i = 0; str[i]; i++){
        charCount[(unsigned char)str[i]]++;
    }
    int oddCount = 0;
    for (int i = 0; i < 256; i++) {
        if (charCount[i] % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount <= 1;
}
int main() {
    char str1[] = "aab";
    printf("%s\n", canPalin(str1)?"true":"false");
    char str2[] = "abc";
    printf("%s\n", canPalin(str2)?"true":"false");
    return 0;
}