students = []
n = int(input("Enter the number of Students: "))
for i in range(n):
    name = input(f"Enter the {i+1} name: ")
    grade = int(input(f"Enter the marks of {name}: "))
    students.append((name,grade))
for i in range(len(students)):
    for j in range(n-i-1):
        if students[j][1] < students[j+1][1]:
            students[j] , students[j+1] = students[j+1] , students[j]
print(students)
