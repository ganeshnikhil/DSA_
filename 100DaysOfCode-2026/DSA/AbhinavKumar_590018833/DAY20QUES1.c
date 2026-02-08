#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int grade;
} Student;

// Comparator function for sorting students by grade in descending order
int compare(const void *a, const void *b) {
    return ((Student *)b)->grade - ((Student *)a)->grade;
}

void sortStudents(Student students[], int n) {
    qsort(students, n, sizeof(Student), compare);
}

void printStudents(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("(%s, %d) ", students[i].name, students[i].grade);
    }
    printf("\n");
}

int main() {
    Student students[] = {{"Ram", 85}, {"Bhuvi", 92}, {"Chetan", 78}};
    int n = sizeof(students) / sizeof(students[0]);

    printf("Original list:\n");
    printStudents(students, n);

    sortStudents(students, n);

    printf("Sorted list by grades (Descending):\n");
    printStudents(students, n);

    return 0;
}
