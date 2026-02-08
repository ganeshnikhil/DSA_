#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int grade;
};

int compare(const void *a, const void *b) {
    return ((struct Student *)b)->grade - ((struct Student *)a)->grade;
}

int main() {
    struct Student students[] = {
        {"Alice", 85},
        {"Bob", 92},
        {"Charlie", 78},
        {"David", 90}
    };

    int n = sizeof(students) / sizeof(students[0]);

    qsort(students, n, sizeof(struct Student), compare);

    printf("Sorted Students (by Grade):\n");
    for (int i = 0; i < n; i++)
        printf("%s - %d\n", students[i].name, students[i].grade);

    return 0;
}
