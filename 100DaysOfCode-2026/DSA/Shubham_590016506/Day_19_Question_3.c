#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int matrix[][3], int rows, int cols, int target) {
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
    int matrix[3][3] = {{1,4,7},{2,5,8},{3,6,9}};
    int target = 5;
    bool found = searchMatrix(matrix, 3, 3, target);
    printf("Output: %s\n", found ? "true" : "false");  
    return 0;
}