students = []

num = int(input("How many students? "))

for i in range(num):
    n = input("Enter student name: ")
    m = int(input("Enter marks: "))
    students.append([n, m])

for i in range(len(students)):
    for j in range(i + 1, len(students)):
        if students[i][1] < students[j][1]:
            students[i], students[j] = students[j], students[i]

print("\nSorted list:")
for s in students:
    print(s[0], "-", s[1])
