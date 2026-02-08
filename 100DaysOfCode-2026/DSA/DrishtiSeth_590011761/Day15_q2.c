#include <stdio.h>
#include <string.h>

void sort_by_length(char arr[][20], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strlen(arr[i]) > strlen(arr[j])) {
                char temp[20];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

void print_strings(char arr[][20], int n) {
    for(int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

int main() {
    char arr[][20] = {"apple", "pie", "washington", "cat"};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort_by_length(arr, n);
    print_strings(arr, n);
    return 0;
}