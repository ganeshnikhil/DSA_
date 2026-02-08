
#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int grade;
};

void sortStudents(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (students[j].grade < students[j+1].grade) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

int main() {
    struct Student students[] = {{"Ram", 85}, {"Bhuvi", 92}, {"Chetan", 78}};
    int n = sizeof(students) / sizeof(students[0]);

    sortStudents(students, n);

    for (int i = 0; i < n; i++) {
        printf("(%s, %d)\n", students[i].name, students[i].grade);
    }

    return 0;
}
