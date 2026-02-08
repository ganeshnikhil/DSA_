#include <stdio.h>

#define MAX 1000

int main() {
    int arr[100], freq[MAX + 1] = {0};
    int n, k, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    for (int i = 0; i <= MAX; i++) {
        if (freq[i] == k) {
            sum += i;
        }
    }

    printf("Sum of elements that appear exactly %d times = %d\n", k, sum);

    return 0;
}
