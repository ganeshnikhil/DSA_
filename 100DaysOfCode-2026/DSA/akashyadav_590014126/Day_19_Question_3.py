def search_matrix(matrix, target):
    if not matrix or not matrix[0]:
        return False

    rows, cols = len(matrix), len(matrix[0])
    row, col = 0, cols - 1  

    while row < rows and col >= 0:
        current = matrix[row][col]
        if current == target:
            return True
        elif current > target:
            col -= 1    # to move along a column
        else:
            row += 1    # to move along a row

    return False

#example
print(search_matrix([[1,4,7],[2,5,8],[3,6,9]],16))