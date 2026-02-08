#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int matrix[][3], int rows, int cols, int target) {
    int row = 0;
    int col = cols - 1;

    while (row < rows && col >= 0) {
        if (matrix[row][col] == target)
            return true;
        else if (matrix[row][col] > target)
            col--;
        else
            row++;
    }

    return false;
}

int main() {
    int matrix1[3][3] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    printf("%s\n", searchMatrix(matrix1, 3, 3, 5) ? "true" : "false");  
    printf("%s\n", searchMatrix(matrix1, 3, 3, 13) ? "true" : "false"); 

    int matrix2[3][3] = {{1, 3, 5}, {2, 4, 6}, {7, 8, 9}};
    printf("%s\n", searchMatrix(matrix2, 3, 3, 6) ? "true" : "false");  

    return 0;
}
