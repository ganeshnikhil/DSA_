#include <stdio.h>
#include <stdbool.h>
#define MAX_ROWS 100
#define MAX_COLS 100

int main() 
{
    int mat[MAX_ROWS][MAX_COLS];
    int rows, cols, target;
    bool found = false;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    if (rows <= 0 || rows > MAX_ROWS || cols <= 0 || cols > MAX_COLS) 
    {
        printf("Invalid dimensions! Rows and columns must be between 1 and 100.\n");
        return 1;
    }
    printf("Enter sorted matrix elements (row by row):\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Enter target number to find: ");
    scanf("%d", &target);
    int r = 0, c = cols - 1;
    while (r < rows && c >= 0) 
    {
        if (mat[r][c] == target) 
        {
            found = true;
            break;
        }
        if (mat[r][c] > target) 
        {
            c--;
        } 
        else 
        {
            r++;
        }
    }
    if (found) 
    {
        printf("Target %d found in the matrix.\n", target);
    } 
    else 
    {
        printf("Target %d not found in the matrix.\n", target);
    }
    return 0;
}
