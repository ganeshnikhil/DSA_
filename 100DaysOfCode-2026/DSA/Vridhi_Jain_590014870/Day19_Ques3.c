#include <stdio.h>

int searchMatrix(int matrix[][100], int rows, int cols, int target) {
    int i = 0, j = cols - 1;
    while (i < rows && j >= 0) {
        if (matrix[i][j] == target)
            return 1;
        else if (matrix[i][j] > target)
            j--;
        else
            i++;
    }
    return 0;
}

int main() {
    int rows, cols, target;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[100][100];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Enter target: ");
    scanf("%d", &target);

    // Print Matrix in required format
    printf("Matrix: [[");
    for (int i = 0; i < rows; i++) {
        if (i > 0) printf("],[");
        for (int j = 0; j < cols; j++) {
            printf("%d", matrix[i][j]);
            if (j < cols - 1) printf(",");
        }
    }
    printf("]], Target: %d\n", target);

    // Search and print result
    int found = searchMatrix(matrix, rows, cols, target);
    printf("%s\n", found ? "true" : "false");

    return 0;
}
