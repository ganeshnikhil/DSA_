#include <stdio.h>

int sq(int n)
{
    int l = 0, r = n, ans = 0;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (m * m <= n)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", sq(n));
    return 0;
}
