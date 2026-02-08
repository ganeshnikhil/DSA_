def sort_students_by_grade(student_records):
    # Sort in  descending order
    return sorted(student_records, key=lambda x: x[1], reverse=True)

n = int(input("Enter the number of students: "))

students = []
for i in range(n):
    name = input(f"Enter name of student {i+1}: ")
    grade = int(input(f"Enter grade of student {i+1}: "))
    students.append((name, grade))

sorted_students = sort_students_by_grade(students)

print("\nStudents sorted by grades (highest first):")
for name, grade in sorted_students:
    print(f"{name}: {grade}")
