#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int grade;
} Student;

int compareGrades(const void *a, const void *b) {
    return ((Student *)b)->grade - ((Student *)a)->grade;  // Descending order
}

int main() {
    Student students[] = {{"Ram", 85}, {"Bhuvi", 92}, {"Chetan", 78}};
    int n = sizeof(students) / sizeof(students[0]);

    qsort(students, n, sizeof(Student), compareGrades);

    printf("Sorted Students by Grade (Descending):\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %d\n", students[i].name, students[i].grade);
    }

    return 0;
}
