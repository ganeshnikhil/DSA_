// Problem 3: Search 2D Matrix
// Search for a target value in a 2D matrix where rows and columns are sorted.
// Return 1 if found, 0 otherwise.

#include <stdio.h>

int func(int matrix[10][10], int rows, int cols, int target) {
    int r = 0, c = cols - 1;
    while (r < rows && c >= 0) {
        if (matrix[r][c] == target)
            return 1;
        else if (matrix[r][c] > target)
            c--;
        else
            r++;
    }
    return 0;
}

int main() {
    int rows, cols, target;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[10][10];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    printf("Enter target: ");
    scanf("%d", &target);

    int found = func(matrix, rows, cols, target);
    printf("Target found: %s\n", found ? "true" : "false");
    return 0;
}
