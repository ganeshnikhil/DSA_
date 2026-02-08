def sort_students_by_grade(students):
    return sorted(students, key=lambda student: student[1], reverse=True)

n = int(input("Enter number of students: "))
students = []

for _ in range(n):
    name = input("Enter student name: ")
    grade = int(input(f"Enter grade for {name}: "))
    students.append((name, grade))

sorted_students = sort_students_by_grade(students)
print("\nSorted students by grade (highest first):")
for name, grade in sorted_students:
    print(f"{name} - {grade}")
