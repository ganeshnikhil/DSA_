#include <stdio.h>

struct S { char n[50]; int g; };

void f(struct S s[], int x) {
    struct S t;
    for (int i = 0; i < x - 1; i++)
        for (int j = i + 1; j < x; j++)
            if (s[i].g < s[j].g) { t = s[i]; s[i] = s[j]; s[j] = t; }
}

int main() {
    int x;
    scanf("%d", &x);
    struct S s[x];

    for (int i = 0; i < x; i++) {
        scanf("%s %d", s[i].n, &s[i].g);
    }

    f(s, x);

    for (int i = 0; i < x; i++)
        printf("%s %d\n", s[i].n, s[i].g);
    return 0;
}
