def sort_students_by_grade(students):
    return sorted(students, key=lambda x: x[1], reverse=True)

students1 = [("Ram", 85), ("Bhuvi", 92), ("Chetan", 78)]
print(sort_students_by_grade(students1))

students2 = [("Jatin", 88), ("Sarah", 95), ("Mona", 82), ("Aadi", 95)]
print(sort_students_by_grade(students2))
