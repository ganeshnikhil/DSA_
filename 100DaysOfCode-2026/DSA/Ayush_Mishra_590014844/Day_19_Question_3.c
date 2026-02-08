#include <stdio.h>
#include <stdbool.h>

bool search_matrix(int matrix[][100], int rows, int cols, int target) {
    int r = 0, c = cols - 1;
    while (r < rows && c >= 0) {
        if (matrix[r][c] == target)
            return true;
        else if (matrix[r][c] > target)
            c--;
        else
            r++;
    }
    return false;
}

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[100][100];
    printf("Enter matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    int target;
    printf("Enter target: ");
    scanf("%d", &target);
    printf("Found: %s\n", search_matrix(matrix, rows, cols, target) ? "true" : "false");
    return 0;
}
