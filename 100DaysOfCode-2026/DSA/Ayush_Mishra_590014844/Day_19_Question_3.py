def search_matrix(matrix, target):
    if not matrix: return False
    rows, cols = len(matrix), len(matrix[0])
    r, c = 0, cols - 1
    while r < rows and c >= 0:
        if matrix[r][c] == target:
            return True
        elif matrix[r][c] > target:
            c -= 1
        else:
            r += 1
    return False

rows = int(input("Enter number of rows: "))
matrix = []
for i in range(rows):
    matrix.append(list(map(int, input(f"Enter row {i+1}: ").split())))
target = int(input("Enter target: "))
print("Found:", search_matrix(matrix, target))
