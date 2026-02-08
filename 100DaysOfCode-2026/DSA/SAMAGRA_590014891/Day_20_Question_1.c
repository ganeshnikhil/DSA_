#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    char name[50];
    int grade;
};

void sortByGrade(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].grade < students[j].grade) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void printStudents(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("(%s, %d)\n", students[i].name, students[i].grade);
    }
}

int main() {
    struct Student students[] = {
        {"Ram", 85},
        {"Bhuvi", 92},
        {"Chetan", 78}
    };

    int n = sizeof(students) / sizeof(students[0]);

    sortByGrade(students, n);
    printStudents(students, n);

    return 0;
}
 