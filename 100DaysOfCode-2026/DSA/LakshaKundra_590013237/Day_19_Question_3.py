def search_matrix(matrix, target):
    if not matrix:
        return False
    rows, cols = len(matrix), len(matrix[0])
    row, col = 0, cols - 1
    while row < rows and col >= 0:
        if matrix[row][col] == target:
            return True
        elif matrix[row][col] > target:
            col -= 1
        else:
            row += 1
    return False

print(search_matrix([[1,4,7],[2,5,8],[3,6,9]], 5))
print(search_matrix([[1,4,7],[2,5,8],[3,6,9]], 13))
print(search_matrix([[1,3,5],[2,4,6],[7,8,9]], 6))
