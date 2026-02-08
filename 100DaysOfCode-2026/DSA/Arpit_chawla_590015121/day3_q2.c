#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

int main() {
    int arr[100];
    int freq[MAX + 1] = {0};
    int n;
    bool duplicateFound = false;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        freq[arr[i]]++;

        if (freq[arr[i]] > 1) {
            duplicateFound = true;
        }
    }

    if (duplicateFound) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
