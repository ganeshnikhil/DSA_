#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int grade;
} Student;

void sortStudents(Student arr[], int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(arr[i].grade < arr[j].grade) {
                Student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    Student students[n];

    for(int i = 0; i < n; i++) {
        printf("Enter name and grade of student %d: ", i+1);
        scanf("%s %d", students[i].name, &students[i].grade);
    }

    sortStudents(students, n);

    printf("Sorted students by grade (descending):\n");
    for(int i = 0; i < n; i++)
        printf("%s %d\n", students[i].name, students[i].grade);

    return 0;
}
