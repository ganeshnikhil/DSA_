#include <stdio.h>
#include <stdlib.h>

int binarySearch(int a[], int n, int t)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == t)
            return m;
        else if (a[m] < t)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    int n, t;
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &t);
    printf("%d\n", binarySearch(a, n, t));
    free(a);
    return 0;
}