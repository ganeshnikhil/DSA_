#include <stdio.h>
#include <string.h>

void sortByLength(char arr[][20], int n) {
    char temp[20];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(arr[j]) > strlen(arr[j + 1])) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    char arr[][20] = {"apple", "hi", "banana", "a", "cat"};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortByLength(arr, n);

    printf("Sorted strings by length:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);

    return 0;
}
