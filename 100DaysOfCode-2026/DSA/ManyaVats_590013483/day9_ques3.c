#include <stdio.h>

char firstNonRepeating(char str[]) {
    int freq[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] == 1) {
                return str[i];
            }
        }
    }

    return -1; 
}

int main() {
    char str[] = "programming";

    char result = firstNonRepeating(str);

    if (result != -1) {
        printf("First non-repeating character: %c\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}
