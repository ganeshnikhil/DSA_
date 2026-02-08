#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strlen(*(const char **)a) - strlen(*(const char **)b);
}

int main() {
    const char *arr[] = {"apple", "pie", "washington", "cat"};
    int n = sizeof(arr)/sizeof(arr[0]);

    qsort(arr, n, sizeof(char*), compare);

    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);

    return 0;
}
