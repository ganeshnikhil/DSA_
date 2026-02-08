#include <stdio.h>
#include <string.h>

int main() {
    char arr[100][100];
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();

    printf("Enter the strings : \n");
    for(int i = 0; i < n; i++) {
        fgets(arr[i], 100, stdin);
        if(arr[i][strlen(arr[i]) - 1] == '\n'){
            arr[i][strlen(arr[i]) - 1] = '\0';
        }
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(strlen(arr[j]) > strlen(arr[j + 1])) {
                char temp[100];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }

    printf("Sorted strings: \n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}

