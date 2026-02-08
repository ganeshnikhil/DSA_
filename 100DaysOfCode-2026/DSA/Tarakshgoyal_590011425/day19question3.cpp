#include <iostream>
using namespace std;

bool searchMatrix(int matrix[][100], int rows, int cols, int target) {
    int row = 0, col = cols - 1;

    while (row < rows && col >= 0) {
        if (matrix[row][col] == target)
            return true;
        else if (matrix[row][col] > target)
            col--; // eliminate current column
        else
            row++; // eliminate current row
    }

    return false;
}

int main() {
    int matrix[100][100];
    int rows, cols, target;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter the elements of the matrix (row-wise sorted and column-wise sorted):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the target element to search: ";
    cin >> target;

    bool found = searchMatrix(matrix, rows, cols, target);

    if (found)
        cout << "Target found in the matrix." << endl;
    else
        cout << "Target not found in the matrix." << endl;

    return 0;
}
