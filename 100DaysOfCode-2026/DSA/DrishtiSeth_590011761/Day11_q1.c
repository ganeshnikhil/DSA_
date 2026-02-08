#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000], clean[1000];
    int i, j = 0;
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i]; i++) {
        if (isalnum(str[i])) {
            clean[j++] = tolower(str[i]);
        }
    }
    int left = 0, right = j - 1, flag = 1;
    while (left < right) {
        if (clean[left] != clean[right]) {
            flag = 0;
            break;
        }
        left++;
        right--;
    }
    if (flag)
        printf("true\n");
    else
        printf("false\n");
    return 0;
}
