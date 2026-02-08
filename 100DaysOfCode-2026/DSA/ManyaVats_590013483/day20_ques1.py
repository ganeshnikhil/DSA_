def sort_students_by_grade(students):
    return sorted(students, key=lambda x: x[1], reverse=True)

student_records = [("Ram", 85), ("Bhuvi", 92), ("Chetan", 78)]

sorted_students = sort_students_by_grade(student_records)

print(sorted_students)
