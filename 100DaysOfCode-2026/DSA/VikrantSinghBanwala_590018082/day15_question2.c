#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
    char *str;
    int index;
} StringWithIndex;
int compare(const void *a, const void *b) {
    StringWithIndex *strA = (StringWithIndex *)a;
    StringWithIndex *strB = (StringWithIndex *)b;
    if (strlen(strA->str) == strlen(strB->str)) {
        return strA->index - strB->index;
    }
    return strlen(strA->str) - strlen(strB->str);
}
void sortByLength(char *arr[], int size) {
    StringWithIndex temp[size];
    for (int i = 0; i < size; i++) {
        temp[i].str = arr[i];
        temp[i].index = i;
    }
    qsort(temp, size, sizeof(StringWithIndex), compare);
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i].str;
    }
}
int main() {
    char *arr1[] = {"apple", "pie", "washington", "cat"};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    sortByLength(arr1, size1);
    printf("[");
    for (int i = 0; i < size1; i++) {
        printf("\"%s\"", arr1[i]);
        if (i < size1 - 1) printf(", ");
    }
    printf("]\n");
    char *arr2[] = {"hello", "world", "a", "programming", "fun"};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    sortByLength(arr2, size2);
    printf("[");
    for (int i = 0; i < size2; i++) {
        printf("\"%s\"", arr2[i]);
        if (i < size2 - 1) printf(", ");
    }
    printf("]\n");
    return 0;
}