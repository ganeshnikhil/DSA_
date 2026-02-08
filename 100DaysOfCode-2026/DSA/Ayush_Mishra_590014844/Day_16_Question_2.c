#include <stdio.h>

int count_occurrences(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            count++;
    }
    return count;
}

int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target value to count: ");
    scanf("%d", &target);

    int result = count_occurrences(arr, n, target);
    printf("%d occurred %d time(s).\n", target, result);
    return 0;
}
