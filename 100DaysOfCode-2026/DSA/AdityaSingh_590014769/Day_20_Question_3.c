#include <stdio.h>

void f(int a[], int x) {
    int t;
    for (int i = 0; i < x - 1; i++)
        for (int j = i + 1; j < x; j++)
            if (a[i] < a[j]) { t = a[i]; a[i] = a[j]; a[j] = t; }
}

int main() {
    int x, k;
    scanf("%d", &x);
    int a[x];
    for (int i = 0; i < x; i++) scanf("%d", &a[i]);
    scanf("%d", &k);

    f(a, x);
    printf("%d\n", a[k - 1]);
    return 0;
}