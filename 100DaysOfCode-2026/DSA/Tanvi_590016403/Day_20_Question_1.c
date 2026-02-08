#include <stdio.h>
#include <string.h>

// --------- Problem 1: Sort Students by Grade ---------
typedef struct {
    char name[20];
    int grade;
} Student;

void sortStudentsByGrade(Student students[], int n) {
    Student temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(students[j].grade < students[j+1].grade) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

void printStudents(Student students[], int n) {
    for(int i = 0; i < n; i++) {
        printf("(%s, %d) ", students[i].name, students[i].grade);
    }
    printf("\n");
}

// --------- Problem 2: Merge Two Sorted Arrays ---------
void mergeSortedArrays(int a[], int n, int b[], int m, int merged[]) {
    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        if(a[i] < b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }
    while(i < n)
        merged[k++] = a[i++];
    while(j < m)
        merged[k++] = b[j++];
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// --------- Problem 3: Find Kth Largest Element ---------
void sortDescending(int arr[], int n) {
    int temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int findKthLargest(int arr[], int n, int k) {
    sortDescending(arr, n);
    return arr[k - 1];
}

// --------- Main Function ---------
int main() {
    // Problem 1
    Student students[] = {{"Ram", 85}, {"Bhuvi", 92}, {"Chetan", 78}};
    int studentCount = 3;
    sortStudentsByGrade(students, studentCount);
    printf("Sorted Students by Grade:\n");
    printStudents(students, studentCount);

    // Problem 2
    int a[] = {1, 3, 5}, b[] = {2, 4, 6};
    int n = 3, m = 3;
    int merged[n + m];
    mergeSortedArrays(a, n, b, m, merged);
    printf("Merged Array:\n");
    printArray(merged, n + m);

    // Problem 3
    int arr[] = {7, 10, 4, 3, 20, 15};
    int len = 6, k = 3;
    int result = findKthLargest(arr, len, k);
    printf("Kth Largest Element (K=%d): %d\n", k, result);

    return 0;
}
