#include <stdio.h>

int main() {
    int rows, cols, target;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter elements of the %dx%d matrix (sorted row & column-wise):\n", rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("Enter target to search: ");
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

    if (found)
        printf("Output: true (Target %d found at position [%d][%d])\n", target, row, col);
    else
        printf("Output: false (Target %d not found)\n", target);

    return 0;
}
