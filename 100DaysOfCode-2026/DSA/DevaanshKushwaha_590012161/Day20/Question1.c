#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char name[50];
    int grade;
} Student;

// Function to swap two Student structures
void swap(Student *a, Student *b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

// Sorting students by grade (descending)
void sortByGrade(Student arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j].grade < arr[j + 1].grade) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    Student students[MAX];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter grade of %s: ", students[i].name);
        scanf("%d", &students[i].grade);
    }

    sortByGrade(students, n);

    printf("\nStudents sorted by grade (highest first):\n");
    for (int i = 0; i < n; ++i) {
        printf("%s: %d\n", students[i].name, students[i].grade);
    }

    return 0;
}
