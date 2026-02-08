#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

void countFrequencies(int arr[], int freq[], int size) {
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
}

bool areArraysEqual(int arr1[], int arr2[], int size1, int size2) {
    if (size1 != size2) {
        return false;
    }

    int freq1[MAX + 1] = {0};
    int freq2[MAX + 1] = {0};

    countFrequencies(arr1, freq1, size1);
    countFrequencies(arr2, freq2, size2);

    for (int i = 0; i <= MAX; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int arr1[100], arr2[100];
    int size1, size2;

    printf("Enter number of elements in first array: ");
    scanf("%d", &size1);

    printf("Enter elements of first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &size2);

    printf("Enter elements of second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    if (areArraysEqual(arr1, arr2, size1, size2)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
