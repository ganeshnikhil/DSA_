#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a struct to store student name and grade
typedef struct{
char name[100];
int grade;
}Student;

int compare_marks_descending(const void *a, const void *b);

// Comparator function for qsort to sort by grade in descending order
int compare_marks_descending(const void *a, const void *b){
Student *s1= (Student *)a;
Student *s2= (Student *)b;
return s2->grade - s1->grade;
}

int main(){
int n;

// Input number of students
printf("Enter the number of students:");
scanf("%d",&n);
getchar();

Student students[n];

// Input name and grade for each student
for(int i=0;i<n;++i){
printf("Enter name of student %d:",i+1);
fgets(students[i].name,sizeof(Student),stdin);
students[i].name[strcspn(students[i].name,"\n")]='\0';

printf("Enter marks of student %d:",i+1);
scanf("%d",&students[i].grade);
getchar();
}

// Sort the array using qsort and custom comparator
qsort(students,n,sizeof(Student),compare_marks_descending);

printf("\nStudents sorted by grade (descending):\n");
for(int i=0;i<n;++i){
printf("%s %d\n",students[i].name,students[i].grade);
}

return 0;
}
