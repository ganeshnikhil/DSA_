#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) 
{
    char *s1 = *(char**)a;
    char *s2 = *(char**)b;
    return strlen(s1) - strlen(s2);
}
int main() 
{
    char *arr[100]; 
    char input[100]; 
    int n; 
    printf("Enter the size: ");
    scanf("%d", &n);
    getchar(); 
    if (n <= 0 || n > 100) 
    {
        printf("Incorrect size! Enter data from 1 to 100.\n");
        return 1;
    }    
    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) 
    {
        fgets(input, sizeof(input), stdin);
        if (input[strlen(input) - 1] == '\n') 
        {
            input[strlen(input) - 1] = '\0';
        }
        arr[i] = malloc(strlen(input) + 1);
        strcpy(arr[i], input);
    }
    qsort(arr, n, sizeof(char*), compare);
    printf("Sorted strings by length:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%s\n", arr[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        free(arr[i]);
    }
    return 0;
}
