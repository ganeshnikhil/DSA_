students = [("Ram", 85), ("Bhuvi", 92), ("Chetan", 78)]
students.sort(key=lambda x: x[1], reverse=True)
print(students)
#output: [('Bhuvi', 92), ('Ram', 85), ('Chetan', 78)]