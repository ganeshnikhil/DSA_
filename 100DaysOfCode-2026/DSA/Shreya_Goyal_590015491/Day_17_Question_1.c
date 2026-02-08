#include <stdio.h>

int main() {
    int arr[8], i, target;
    int left, right, mid;
    int found = -1;

    printf("Enter elements in sorted order:\n");
    for(i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);

    left = 0;
    right = 7;

    while(left <= right) {
        mid = (left + right) / 2;

        if(arr[mid] == target) {
            found = mid;
            break;
        }
        else if(target < arr[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    if(found != -1) {
        printf("Element found at index %d", found);
    } else {
        printf("-1\n");
    }

    return 0;
}
