#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 100

// Structure to hold student data
typedef struct 
{
    char name[MAX_NAME_LEN];
    float grade;
} Student;

// Comparison function for qsort (descending by grade)
int compareGrades(const void *a, const void *b) 
{
    Student *s1 = (Student *)a;
    Student *s2 = (Student *)b;

    if (s2->grade > s1->grade)
        return 1;
    else if (s2->grade < s1->grade)
        return -1;
    else
        return 0;
}

int main() 
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); // Consume newline left by scanf

    Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) 
    {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, MAX_NAME_LEN, stdin);

        // Removing trailing newline from name
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') 
        {
            students[i].name[len - 1] = '\0';
        }

        printf("Enter grade of %s: ", students[i].name);
        scanf("%f", &students[i].grade);
        getchar(); // Consuming newline
    }

    // Sort students by grade descending
    qsort(students, n, sizeof(Student), compareGrades);

    printf("\nStudents sorted by grade (highest to lowest):\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %.2f\n", students[i].name, students[i].grade);
    }

    return 0;
}
