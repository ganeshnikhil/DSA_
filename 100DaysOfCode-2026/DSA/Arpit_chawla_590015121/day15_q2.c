#include <stdio.h>
#include <string.h>

#define SIZE 5
#define MAX_LEN 100

void sortByLength(char arr[][MAX_LEN], int n) {
    char temp[MAX_LEN];
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(strlen(arr[j]) > strlen(arr[j + 1])) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    char arr[SIZE][MAX_LEN] = {
        "banana",
        "kiwi",
        "apple",
        "fig",
        "grapefruit"
    };

    printf("Original array:\n");
    for(int i = 0; i < SIZE; i++) {
        printf("%s\n", arr[i]);
    }

    sortByLength(arr, SIZE);

    printf("\nSorted by length:\n");
    for(int i = 0; i < SIZE; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
