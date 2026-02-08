#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int matrix[][4], int rows, int cols, int target) {
    int row = 0, col = cols - 1;

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
    int matrix[3][4] = {
        {1, 4, 7, 11},
        {8, 9, 10, 20},
        {11, 12, 17, 30}
    };

    int target = 10;

    if (searchMatrix(matrix, 3, 4, target))
        printf("Target found\n");
    else
        printf("Target not found\n");

    return 0;
}
