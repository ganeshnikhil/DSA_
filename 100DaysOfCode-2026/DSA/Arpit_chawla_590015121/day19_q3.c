#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int rows, int cols, int matrix[rows][cols], int target) {
    int i = 0, j = cols - 1;

    while (i < rows && j >= 0) {
        if (matrix[i][j] == target)
            return true;
        else if (matrix[i][j] > target)
            j--;
        else
            i++;
    }

    return false;
}

int main() {
    int matrix[4][4] = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    int target = 9;

    if (searchMatrix(4, 4, matrix, target))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
