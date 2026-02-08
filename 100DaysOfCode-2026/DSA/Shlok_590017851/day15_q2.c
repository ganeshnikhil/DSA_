#include <stdio.h>
#include <string.h>
void sortByLength(char arr[][50], int n) 
{
    for (int i = 1; i < n; i++) 
    {
        char temp[50];
        strcpy(temp, arr[i]);
        int j = i - 1;
        while (j >= 0 && strlen(arr[j]) > strlen(temp))
          {
            strcpy(arr[j + 1], arr[j]);
            j--;
        }
        strcpy(arr[j + 1], temp);
    }
}
int main() 
{
    char arr[][50] = {"apple", "pie", "washington", "cat"};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortByLength(arr, n);
    for (int i = 0; i < n; i++)
        printf("%s ", arr[i]);
    return 0;
}
