def sort_students_by_grade(students):
    return sorted(students, key=lambda x: x[1], reverse=True)

n = int(input("Enter number of students: "))
students = []
for _ in range(n):
    name = input("Enter student name: ")
    grade = int(input("Enter grade: "))
    students.append((name, grade))

sorted_students = sort_students_by_grade(students)
print("Sorted students by grade (descending):")
for student in sorted_students:
    print(student)
