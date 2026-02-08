#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRINGS 100
#define MAX_LEN 101

// Stable insertion sort by string length
void sortByLength(char arr[][MAX_LEN], int n) {
    for (int i = 1; i < n; i++) {
        char temp[MAX_LEN];
        strcpy(temp, arr[i]);
        int j = i - 1;
        while (j >= 0 && strlen(arr[j]) > strlen(temp)) {
            strcpy(arr[j + 1], arr[j]);
            j--;
        }
        strcpy(arr[j + 1], temp);
    }
}

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); // consume newline after number input

    char arr[MAX_STRINGS][MAX_LEN];
    printf("Enter %d strings (one per line):\n", n);
    for (int i = 0; i < n; i++) {
        fgets(arr[i], MAX_LEN, stdin);
        size_t len = strlen(arr[i]);
        if (len > 0 && arr[i][len-1] == '\n') arr[i][len-1] = '\0';
    }

    sortByLength(arr, n);

    printf("Sorted by length: [");
    for (int i = 0; i < n; i++) {
        printf("\"%s\"", arr[i]);
        if (i != n-1) printf(", ");
    }
    printf("]\n");
    return 0;
}