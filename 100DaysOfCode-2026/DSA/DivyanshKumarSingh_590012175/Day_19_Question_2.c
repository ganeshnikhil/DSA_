#include <stdio.h>

int peak(int a[], int l, int r, int n)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if ((m == 0 || a[m] > a[m - 1]) && (m == n - 1 || a[m] > a[m + 1]))
            return m;
        else if (m > 0 && a[m - 1] > a[m])
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("%d\n", peak(a, 0, n - 1, n));
    return 0;
}
