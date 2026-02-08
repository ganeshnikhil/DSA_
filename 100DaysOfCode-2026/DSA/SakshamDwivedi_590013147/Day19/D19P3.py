#Solution Function
def search_matrix(matrix, target):
    rows = len(matrix)
    cols = len(matrix[0])
    
    row = 0
    col = cols - 1
    while row < rows and col >= 0:
        if matrix[row][col] == target:
            return True
        elif matrix[row][col] > target:
            col -= 1
        else:
            row += 1

    return False

#Fixed Input
matrix = [[1,4,7],[2,5,8],[3,6,9]]
print(search_matrix(matrix, 3))

#Custom Input
rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))
arr_pro = list(int(x) for x in input("Enter the array elements: ").split())
arr = [arr_pro[i *cols:(i + 1)*cols] for i in range(rows)]
target = int(input("Enter the target value to find : "))
for row in arr:
    print(row)
print(search_matrix(matrix, target))
