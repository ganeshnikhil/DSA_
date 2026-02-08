#include <stdio.h>
int searchMatrix(int rows, int cols, int matrix[rows][cols], int target) 
{
    int row = 0, col = cols - 1;
    while (row < rows && col >= 0) 
    {
        if (matrix[row][col] == target)
            return 1;
        else if (matrix[row][col] > target)
            col--;
        else
            row++;
    }
    return 0;
}
int main() 
{
    int rows, cols, target;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Enter the target value: ");
    scanf("%d", &target);
    int found = searchMatrix(rows, cols, matrix, target);
    if (found)
        printf("Output: true\n");
    else
        printf("Output: false\n");
    return 0;
}
