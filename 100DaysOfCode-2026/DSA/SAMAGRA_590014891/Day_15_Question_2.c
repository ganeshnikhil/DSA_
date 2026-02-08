#include <stdio.h>
#include <string.h>

int main() {
    char arr[][20] = {"apple", "pie", "washington", "cat"};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(arr[j]) > strlen(arr[j + 1])) {
                char temp[20];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }

    return 0;
}
