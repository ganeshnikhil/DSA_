#Solution Function
def sort_marks(arr):
    for i in range(len(arr) - 1):
        for j in range(i, len(arr) - 1):
            if arr[j][1] < arr[j+1][1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr


#Solution Function 2
def sort_marks_2(arr):
    def grade(stu):
        return stu[1]
    arr = sorted(arr, key=grade, reverse=True)
    return arr

#Fixed Input
arr = [("Ram", 85), ("Bhuvi", 92), ("Chetan", 78)]
arr1 = [("Jatin", 88), ("Sarah", 95), ("Mona", 82), ("Aadi", 95)]
print(sort_marks(arr))
print(sort_marks(arr1))
print(sort_marks_2(arr))
print(sort_marks_2(arr1))

#Custom Input
n = int(input("Enter number of students: "))
arr = []

for i in range(n):
    name = input("Enter student name: ")
    mark = int(input("Enter marks: "))
    arr.append((name, mark))

print(sort_marks(arr))
print(sort_marks_2(arr))
