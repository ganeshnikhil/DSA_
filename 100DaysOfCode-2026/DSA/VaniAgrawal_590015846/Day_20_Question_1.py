#Sort student records by grades in descending order using custom sorting criteria
n = int(input("Enter number of students: "))
students = []

for i in range(n):
    name = input("Enter student name: ")
    grade = int(input("Enter student grade: "))
    students.append((name, grade))

for i in range(len(students)):
    for j in range(i + 1, len(students)):
        if students[i][1] < students[j][1]:
            temp = students[i]
            students[i] = students[j]
            students[j] = temp

print("Sorted students by grade (descending):")
print(students)
