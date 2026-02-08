#include <stdio.h>

int main() {
    int matrix[100][100];
    int rows; 
    int cols; 
    int target;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter the array elements (row-wise):");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter the target value to find: ");
    scanf("%d", &target);

    int row = 0;
    int col = cols - 1; 
    int found = 0;

    while (row < rows && col >= 0) {
        if (matrix[row][col] == target) {
            found = 1;
            break;
        } else if (matrix[row][col] > target) {
            col--;
        } else {
            row++;
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    if (found) {
        printf("True");
    } else {
        printf("False");
    }
}
