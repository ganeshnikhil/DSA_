#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a student
typedef struct {
    char name[50];
    int grade;
} Student;

// Comparison function for qsort - sorts by grade in descending order
int compareStudents(const void *a, const void *b) {
    Student *studentA = (Student *)a;
    Student *studentB = (Student *)b;
    
    // For descending order, return negative if a > b
    return studentB->grade - studentA->grade;
}

// Function to sort students by grade
void sortStudentsByGrade(Student students[], int n) {
    qsort(students, n, sizeof(Student), compareStudents);
}

// Function to print students
void printStudents(Student students[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("(\"%s\", %d)", students[i].name, students[i].grade);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    // Test case 1
    Student students1[] = {
        {"Ram", 85},
        {"Bhuvi", 92},
        {"Chetan", 78}
    };
    int n1 = sizeof(students1) / sizeof(students1[0]);
    
    printf("Test Case 1:\n");
    printf("Input: ");
    printStudents(students1, n1);
    
    sortStudentsByGrade(students1, n1);
    
    printf("Output: ");
    printStudents(students1, n1);
    printf("\n");
    
    // Test case 2
    Student students2[] = {
        {"Jatin", 88},
        {"Sarah", 95},
        {"Mona", 82},
        {"Aadi", 95}
    };
    int n2 = sizeof(students2) / sizeof(students2[0]);
    
    printf("Test Case 2:\n");
    printf("Input: ");
    printStudents(students2, n2);
    
    sortStudentsByGrade(students2, n2);
    
    printf("Output: ");
    printStudents(students2, n2);
    
    return 0;
}