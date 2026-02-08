from operator import itemgetter

students = [("Ram", 85), ("Bhuvi", 92), ("Chetan", 78)]


sorted_students = sorted(students, key=itemgetter(1), reverse=True)

print(sorted_students)
