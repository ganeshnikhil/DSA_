#include <stdio.h>
#include <string.h>
#define MAX 100
#define NAME_LEN 50

typedef struct 
{
    char name[NAME_LEN];
    int grade;
} Student;
int compare(const void *a, const void *b) 
{
    return ((Student*)b)->grade - ((Student*)a)->grade;
}
int main() 
{
    Student list[MAX];
    int n;
    printf("How many students: ");
    scanf("%d", &n);
    getchar();
    if (n <= 0 || n > MAX) 
    {
        printf("Please enter a number between 1 and %d.\n", MAX);
        return 1;
    }
    printf("Enter name and grade (e.g., John 85):\n");
    for (int i = 0; i < n; i++) 
    {
        fgets(list[i].name, NAME_LEN, stdin);
        list[i].name[strcspn(list[i].name, "\n")] = '\0';
        scanf("%d", &list[i].grade);
        getchar();
        if (list[i].grade < 0 || list[i].grade > 100) 
        {
            printf("Invalid grade! Use 0 to 100.\n");
            return 1;
        }
        if (strlen(list[i].name) == 0) 
        {
            printf("Name cannot be empty!\n");
            return 1;
        }
    }
    qsort(list, n, sizeof(Student), compare);
    printf("Sorted students (highest grade first):\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%s: %d\n", list[i].name, list[i].grade);
    }
    return 0;
}
