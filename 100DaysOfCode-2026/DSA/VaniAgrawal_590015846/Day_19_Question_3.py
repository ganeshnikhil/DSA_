# Search efficiently in sorted 2D matrix using strategic positioning approach.rom user
rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

matrix = []
print("Enter matrix row by row:")
for i in range(rows):
    row = list(map(int, input().split()))
    matrix.append(row)

target = int(input("Enter the target value: "))

row = 0
col = cols - 1
found = False

while row < rows and col >= 0:
    if matrix[row][col] == target:
        found = True
        break
    elif matrix[row][col] > target:
        col -= 1
    else:
        row += 1

print(found)
