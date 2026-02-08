#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count[26] = {0};
    int i;
    
    printf("Enter first string: ");
    scanf("%[^\n]", str1);
    getchar();
    printf("Enter second string: ");
    scanf("%[^\n]", str2);
    
    for(i = 0; str1[i]; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z') {
            count[str1[i] - 'a']++;
        } else if(str1[i] >= 'A' && str1[i] <= 'Z') {
            count[str1[i] - 'A']++;
        }
    }
    
    for(i = 0; str2[i]; i++) {
        if(str2[i] >= 'a' && str2[i] <= 'z') {
            count[str2[i] - 'a']--;
        } else if(str2[i] >= 'A' && str2[i] <= 'Z') {
            count[str2[i] - 'A']--;
        }
    }
    
    for(i = 0; i < 26; i++) {
        if(count[i] != 0) {
            printf("false\n");
            return 0;
        }
    }
    
    printf("true\n");
    return 0;
}