def search_2D_matrix(matrix, target):
    row, col = 0, columns - 1

    while row < rows and col >= 0:
        if matrix[row][col] == target:
            return True
        elif matrix[row][col] > target:
            col -= 1
        else:
            row += 1

    return False

try:
    rows, columns = map(int, input("Enter the number of rows and columns of the matrix separated by spaces : ").split())
    matrix = []
    for i in range(0, rows):
        matrix.append(list(map(int, input(f"Enter the elements of row {i} separated by spaces : ").split())))
    target = int(input("Enter the element to be searched : "))
    print("true" if search_2D_matrix(matrix, target) else "false")
except:
    print("Invalid input. Please enter a valid input.")
