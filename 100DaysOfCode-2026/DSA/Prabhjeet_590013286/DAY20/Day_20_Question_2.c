#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    int x[a];
    for (int i = 0; i < a; i++) scanf("%d", &x[i]);

    scanf("%d", &b);
    int y[b];
    for (int i = 0; i < b; i++) scanf("%d", &y[i]);

    int z[a + b], i = 0, j = 0, k = 0;
    while (i < a && j < b)
        z[k++] = (x[i] < y[j]) ? x[i++] : y[j++];
    while (i < a) z[k++] = x[i++];
    while (j < b) z[k++] = y[j++];

    for (int i = 0; i < a + b; i++) printf("%d ", z[i]);
    return 0;
}