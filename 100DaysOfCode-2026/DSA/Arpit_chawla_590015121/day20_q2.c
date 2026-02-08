#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    int b[m];
    for(int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    int merged[n + m];
    int i = 0, j = 0, k = 0;

    while(i < n && j < m) {
        if(a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    while(i < n) {
        merged[k++] = a[i++];
    }

    while(j < m) {
        merged[k++] = b[j++];
    }

    for(int x = 0; x < n + m; x++) {
        printf("%d ", merged[x]);
    }

    return 0;
}
