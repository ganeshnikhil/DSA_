Your task: Search efficiently in sorted 2D matrix using strategic positioning approach.

def search_in_sorted_matrix(matrix, target_number):
    if matrix == [] or matrix[0] == []:
        return False
    total_rows = len(matrix)
    total_columns = len(matrix[0])
    current_row = 0
    current_column = total_columns - 1

    while current_row < total_rows and current_column >= 0:
        current_value = matrix[current_row][current_column]

        if current_value == target_number:
            return True
        elif current_value > target_number:
            current_column = current_column - 1
        else:
            current_row = current_row + 1
    return False
