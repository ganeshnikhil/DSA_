def search_matrix(matrix, target):
    i = 0
    j = len(matrix[0]) - 1
    while i < len(matrix) and j >= 0:
        if matrix[i][j] == target:
            return True
        elif matrix[i][j] > target:
            j -= 1
        else:
            i += 1
    return False

matrix = eval(input())#taking input from the user 
target = int(input())
print(search_matrix(matrix, target))
#for example:-
# Input: [1,4,7],[2,5,8],[3,6,9] 
# Target: 5
# Output: True