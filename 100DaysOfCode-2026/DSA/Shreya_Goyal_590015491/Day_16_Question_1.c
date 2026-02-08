#include <stdio.h>

int main() {
    int arr[6], target, i, found = -1;

    printf("Enter 6 numbers:\n");
    for(i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);

    for(i = 0; i < 6; i++) {
        if(arr[i] == target) {
            found = i;
            break;
        }
    }

    if(found != -1) {
        printf("Element found at index %d", found);
    } else {
        printf("-1");
    }

    return 0;
}
