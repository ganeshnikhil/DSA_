#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int rows, int cols, int matrix[rows][cols], int target) 
{
    int row = 0;
    int col = cols - 1;

    while (row < rows && col >= 0) 
    {
        if (matrix[row][col] == target)
            return true;
        else if (matrix[row][col] > target)
            col--;  // Move left
        else
            row++;  // Move down
    }

    return false;
}

int main() 
{
    int rows, cols, target;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter elements of the matrix (row-wise):\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("Enter the target value to search for: ");
    scanf("%d", &target);

    if (searchMatrix(rows, cols, matrix, target))
        printf("Target %d found in the matrix.\n", target);
    else
        printf("Target %d not found in the matrix.\n", target);

    return 0;
}
