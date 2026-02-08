#include <stdio.h>
#include <stdlib.h>

int first(int a[], int n, int t)
{
    int l = 0, r = n - 1, res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == t)
        {
            res = m;
            r = m - 1;
        }
        else if (a[m] < t)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return res;
}

int main()
{
    int n, t;
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &t);
    printf("%d\n", first(a, n, t));
    free(a);
    return 0;
}
