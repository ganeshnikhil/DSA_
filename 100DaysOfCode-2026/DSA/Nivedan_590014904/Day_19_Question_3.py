matrix = []
rows = int(input("Enter the number of rows: "))
columns = int(input("Enter the number of columns: "))
for i in range(rows):
    row= []
    for j in range(columns):
        val = int(input(f"Enter element at row {i}, column {j}: "))
        row.append(val)
    matrix.append(row)
target =int(input("Enter the target: "))
row = 0
col = len(matrix) - 1
while row <len(matrix) and col > -1:
    if matrix[row][col] == target:
        print("true")
        break
    if matrix[row][col] > target:
        col -=1
    else:
        row+=1
else:
    print("false")
