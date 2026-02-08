#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int grade;
};

int main() {
    struct Student students[10];
    int n, i, j;
    
    printf("Enter number of students (max 10): ");
    scanf("%d", &n);
    
    printf("Enter student details:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d name: ", i + 1);
        scanf("%s", students[i].name);
        printf("Student %d grade: ", i + 1);
        scanf("%d", &students[i].grade);
    }
    
    
    printf("\nInput:\n");
    printf("[(");
    for (i = 0; i < n; i++) {
        printf("\"%s\", %d)", students[i].name, students[i].grade);
        if (i < n - 1) printf(", (");
    }
    printf("]\n");
    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (students[i].grade < students[j].grade) {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    
    printf("\nOutput:\n");
    printf("[(");
    for (i = 0; i < n; i++) {
        printf("\"%s\", %d)", students[i].name, students[i].grade);
        if (i < n - 1) printf(", (");
    }
    printf("]\n");
    
    return 0;
}