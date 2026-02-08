class Student:
    def __init__(self, name, grade):
        self.name = name
        self.grade = grade

def sort_students(students):
    n = len(students)
    for i in range(n - 1):
        for j in range(n - i - 1):
            if students[j].grade < students[j + 1].grade:
                students[j], students[j + 1] = students[j + 1], students[j]

# Create a list of Student objects
students = [Student("Ram", 85), Student("Bhuvi", 92), Student("Chetan", 78)]

# Sort the students by grade in descending order
sort_students(students)

# Print the sorted list
for student in students:
    print(f"({student.name}, {student.grade})")
