#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *a, int n)
{
    int k, j;
    for (int i = 1; i < n; i++)
    {
        k = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > k)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = k;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    insertionSort(a, n);
    for (int i = 0; i < n; i++)
        printf("%d", a[i]);
    free(a);
    return 0;
}