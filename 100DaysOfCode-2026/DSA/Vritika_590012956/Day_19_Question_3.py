def search_matrix(matrix, target):
    if not matrix or not matrix[0]:
        return False

    rows = len(matrix)
    cols = len(matrix[0])
    row = 0
    col = cols - 1  

    while row < rows and col >= 0:
        current = matrix[row][col]
        if current == target:
            return True
        elif current > target:
            col -= 1
        else:
            row += 1

    return False

rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

print("Enter matrix row by row (space-separated):")
matrix = []
for _ in range(rows):
    row = list(map(int, input().split()))
    matrix.append(row)

target = int(input("Enter target value to search: "))
if search_matrix(matrix, target):
    print("Output: true")
else:
    print("Output: false")
