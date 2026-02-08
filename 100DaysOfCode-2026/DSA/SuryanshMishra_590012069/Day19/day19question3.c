#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int matrix[][10], int rows, int cols, int target) {
    // Start from top-right corner
    int row = 0;
    int col = cols - 1;
    
    while (row < rows && col >= 0) {
        if (matrix[row][col] == target) {
            return true;
        }
        // If current element is greater than target, move left
        else if (matrix[row][col] > target) {
            col--;
        }
        // If current element is smaller than target, move down
        else {
            row++;
        }
    }
    
    return false;
}

void printMatrix(int matrix[][10], int rows, int cols) {
    printf("[");
    for (int i = 0; i < rows; i++) {
        printf("[");
        for (int j = 0; j < cols; j++) {
            printf("%d", matrix[i][j]);
            if (j < cols - 1) printf(",");
        }
        printf("]");
        if (i < rows - 1) printf(",");
    }
    printf("]");
}

int main() {
    // Test case 1
    int matrix1[3][10] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    int rows1 = 3, cols1 = 3;
    int target1 = 5;
    
    printf("Matrix: ");
    printMatrix(matrix1, rows1, cols1);
    printf(", Target: %d\n", target1);
    printf("Output: %s\n\n", searchMatrix(matrix1, rows1, cols1, target1) ? "true" : "false");
    
    // Test case 2
    int target2 = 13;
    printf("Matrix: ");
    printMatrix(matrix1, rows1, cols1);
    printf(", Target: %d\n", target2);
    printf("Output: %s\n\n", searchMatrix(matrix1, rows1, cols1, target2) ? "true" : "false");
    
    // Test case 3
    int matrix3[3][10] = {{1, 3, 5}, {2, 4, 6}, {7, 8, 9}};
    int rows3 = 3, cols3 = 3;
    int target3 = 6;
    
    printf("Matrix: ");
    printMatrix(matrix3, rows3, cols3);
    printf(", Target: %d\n", target3);
    printf("Output: %s\n", searchMatrix(matrix3, rows3, cols3, target3) ? "true" : "false");
    
    return 0;
}