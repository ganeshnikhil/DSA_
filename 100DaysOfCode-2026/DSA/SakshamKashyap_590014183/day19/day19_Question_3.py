#prompt the user to enter the 2-D matrix
import numpy as np

Row = int(input("Enter the number of rows: "))
Column = int(input("Enter the number of column: "))

data = []

for i in range(Row):
    row = list(map(int,input(f"Enter {Column} values for row {i + 1}, separated by spaces: " ).strip().split()))
    data.append(row)

matrix = np.array(data)

sorted_matrix = np.sort(matrix,axis=1) # axis = 1 is here means, that sorting is done in row

print(f"Your sorted_matrix is: \n{sorted_matrix}")
target_value = int(input("Enter the number you want to find in 2-D Matrix: "))
found = False
for i in range(Row):
    for j in range(Column):
        if target_value == sorted_matrix[i][j]:
            print("true")
            found = True
            break
if not found:
    print("false")  