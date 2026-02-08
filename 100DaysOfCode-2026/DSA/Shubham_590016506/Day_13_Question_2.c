#include <stdio.h>
#include <string.h>

void checkpalindromeperm(char str[]) {
    int freq[256] = {0}, odd = 0;

    for(int i = 0; str[i]; i++) {
        if(str[i] != '\n' && str[i] != ' ') {
            freq[(unsigned char)str[i]]++;
        }
    }

    for(int i = 0; i < 256; i++) {
        if(freq[i] % 2 != 0) odd++;
    }

    if(odd <= 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    checkpalindromeperm(str);
    return 0;
}