#include <stdio.h>
#include <string.h>

void sortByLength(char arr[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strlen(arr[j]) > strlen(arr[j + 1])) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    char arr[][100] = {"apple", "pie", "washington", "cat"};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortByLength(arr, n);

    printf("Sorted by length: ");
    for (int i = 0; i < n; i++)
        printf("\"%s\" ", arr[i]);

    return 0;
}
