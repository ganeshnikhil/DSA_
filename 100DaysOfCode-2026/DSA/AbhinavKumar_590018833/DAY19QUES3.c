#include<stdio.h>
#include<stdbool.h>
// 3. Search 2D Matrix
// A problem that teaches multi-dimensional search optimization and demonstrates strategic
// positioning techniques for efficient matrix traversal.
// You are given a 2D matrix where each row is sorted in ascending order and each column is
// also sorted in ascending order. Write an efficient algorithm to search for a target value in this
// matrix. Return true if the target is found, false otherwise. The key insight is to start from a
// strategic position that allows you to eliminate either a complete row or column with each
// comparison, achieving optimal time complexity.
// This teaches 2D search algorithms and matrix traversal optimization techniques essential
// for multi-dimensional data processing and spatial search operations.
// Your task: Search efficiently in sorted 2D matrix using strategic positioning approach.
// Examples
// Input:
// Matrix: [[1,4,7],[2,5,8],[3,6,9]], Target: 5
// Output:
// true
// Input:
// Matrix: [[1,4,7],[2,5,8],[3,6,9]], Target: 13
// Output:
// false
// Input:
// Matrix: [[1,3,5],[2,4,6],[7,8,9]], Target: 6
// Output:
// true
bool searchMatrix(int matrix[][3], int rows, int cols, int target) {
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
//     Input:
// Matrix: [[1,4,7],[2,5,8],[3,6,9]], Target: 5
// Output:
// true
// Input:
// Matrix: [[1,4,7],[2,5,8],[3,6,9]], Target: 13
// Output:
// false
// Input:
// Matrix: [[1,3,5],[2,4,6],[7,8,9]], Target: 6
// Output:
// true
    int matrix1[3][3] = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}
        
    };
    int target1 = 5;
    int rows1 = 3, cols1 = 3;
    bool found1 = searchMatrix(matrix1, rows1, cols1, target1);
    printf("Target %d found: %s\n", target1, found1 ? "true" : "false");
    int matrix2[3][3] = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}
    };
    int target2 = 13;
    int rows2 = 3, cols2 = 3;
    bool found2 = searchMatrix(matrix2, rows2, cols2, target2);
    printf("Target %d found: %s\n", target2, found2 ? "true" : "false");
    int matrix3[3][3] = {
        {1, 3, 5},
        {2, 4, 6},
        {7, 8, 9}
    };
    int target3 = 6;
    int rows3 = 3, cols3 = 3;
    bool found3 = searchMatrix(matrix3, rows3, cols3, target3);
    printf("Target %d found: %s\n", target3, found3 ? "true" : "false");
    return 0;
}    