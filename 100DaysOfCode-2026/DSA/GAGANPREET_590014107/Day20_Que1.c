#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int grade;
};

void sort(struct Student s[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(s[i].grade < s[j].grade) {
                struct Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for(int i = 0; i < n; i++) {
        scanf("%s %d", students[i].name, &students[i].grade);
    }
    sort(students, n);
    for(int i = 0; i < n; i++) {
        printf("%s %d\n", students[i].name, students[i].grade);
    }
    return 0;
}
