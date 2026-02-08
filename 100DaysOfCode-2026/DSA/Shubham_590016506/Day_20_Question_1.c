#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int grade;
} Student;

int compare(const void *a, const void *b) {
    return ((Student *)b)->grade - ((Student *)a)->grade;
}

void sort_students(Student students[], int n) {
    qsort(students, n, sizeof(Student), compare);
}

int main() {
    Student students[] = {{"Ram", 85}, {"Bhuvi", 92}, {"Chetan", 78}};
    int n = sizeof(students) / sizeof(students[0]);
    sort_students(students, n);
    for (int i = 0; i < n; i++)
        printf("(%s, %d)\n", students[i].name, students[i].grade);
    return 0;
}