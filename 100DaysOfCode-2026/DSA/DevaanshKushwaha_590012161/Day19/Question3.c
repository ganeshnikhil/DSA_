#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int rows, int cols, int matrix[rows][cols], int target) {
    int row = 0;
    int col = cols - 1;

    while (row < rows && col >= 0) {
        if (matrix[row][col] == target) return true;
        else if (matrix[row][col] > target) col--;
        else row++;
    }
    return false;
}

int main() {
    int rows, cols, target;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix entered:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Enter target value to search: ");
    scanf("%d", &target);

    bool found = searchMatrix(rows, cols, matrix, target);
    if (found)
        printf("Output: true (Target %d found in matrix)\n", target);
    else
        printf("Output: false (Target %d not found in matrix)\n", target);

    return 0;
}
