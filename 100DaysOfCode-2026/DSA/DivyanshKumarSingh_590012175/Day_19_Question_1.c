#include <stdio.h>

int search(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
            return m;
        if (a[l] <= a[m])
        {
            if (x >= a[l] && x < a[m])
                r = m - 1;
            else
                l = m + 1;
        }
        else
        {
            if (x > a[m] && x <= a[r])
                l = m + 1;
            else
                r = m - 1;
        }
    }
    return -1;
}

int main()
{
    int n, x;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    printf("%d\n", search(a, n, x));
    return 0;
}
