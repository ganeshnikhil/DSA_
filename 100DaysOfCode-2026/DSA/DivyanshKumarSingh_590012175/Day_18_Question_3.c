#include <stdio.h>
#include <stdlib.h>

void SortColors(int *a, int n)
{
    int l=0,m=0,h=n-1,t;
    while (m<=h)
    {
        if(a[m]==0)
        {
            t=a[l];
            a[l]=a[m];
            a[m]=t;
            l++;m++;
        }
        else if(a[m]==1)
        {
            m++;
        }
        else
        {
            t=a[m];
            a[m]=a[h];
            a[h]=t;
            h--;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    SortColors(a, n);
    for (int i = 0; i < n; i++)
        printf("%d", a[i]);
    free(a);
    return 0;
}