#include <stdio.h>
#include <string.h>
#define MAX 100

struct Student {
    char name[50];
    int grade;
};
void sortStudents(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].grade < students[j + 1].grade) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Student students[MAX];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name and grade of student %d: ", i + 1);
        scanf("%s %d", students[i].name, &students[i].grade);
    }

    sortStudents(students, n);

    printf("\nSorted list :\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", students[i].name, students[i].grade);
    }

    return 0;
}
