#include <stdio.h>

int search2D(int a[][100], int r, int c, int x)
{
    int i = 0, j = c - 1;
    while (i < r && j >= 0)
    {
        if (a[i][j] == x)
            return 1;
        else if (a[i][j] > x)
            j--;
        else
            i++;
    }
    return 0;
}

int main()
{
    int r, c, x;
    scanf("%d %d", &r, &c);
    int a[100][100];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    scanf("%d", &x);
    printf("%d\n", search2D(a, r, c, x));
    return 0;
}
