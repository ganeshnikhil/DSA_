#include<stdio.h>
#include<stdbool.h>
bool searchMatrix(int** matrix, int rows, int cols, int target) {
    if (rows == 0 || cols == 0) return false;
    int row = 0;
    int col = cols - 1;
    while (row < rows && col >= 0) {
        if (matrix[row][col] == target) {
            return true; //Target found
        } else if (matrix[row][col] > target) {
            col--; //Move left
        } else {
            row++; //Move down
        }
    }
    return false; //Target not found
}
int main() {
    int matrix1[3][3] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    int* ptr1[3] = {matrix1[0], matrix1[1], matrix1[2]};
    printf("%s\n", searchMatrix(ptr1, 3, 3, 5) ? "true" : "false");
    int matrix2[3][3] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    int* ptr2[3] = {matrix2[0], matrix2[1], matrix2[2]};
    printf("%s\n", searchMatrix(ptr2, 3, 3, 13) ? "true" : "false");
    return 0;
}
