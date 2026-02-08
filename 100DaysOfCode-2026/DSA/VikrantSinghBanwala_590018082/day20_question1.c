#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[50];
    int grade;
} Student;
int compareGrades(const void *a, const void *b) {
    const Student *studentA = (const Student *)a;
    const Student *studentB = (const Student *)b;
    return studentB->grade - studentA->grade;
}
void sortStudents(Student students[], int n) {
    qsort(students, n, sizeof(Student), compareGrades);
}
int main() {
    Student students[] = {{"Ram", 85}, {"Bhuvi", 92}, {"Chetan", 78}};
    int n = sizeof(students) / sizeof(students[0]);
    sortStudents(students, n);
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("(\"%s\", %d)", students[i].name, students[i].grade);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");   
    return 0;
}