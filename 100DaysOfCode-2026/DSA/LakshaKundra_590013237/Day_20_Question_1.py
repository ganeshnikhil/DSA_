def sort_students(data):
    return sorted(data, key=lambda x: (-x[1], x[0]))

print(sort_students([("Ram", 85), ("Bhuvi", 92), ("Chetan", 78)]))
print(sort_students([("Jatin", 88), ("Sarah", 95), ("Mona", 82), ("Aadi", 95)]))
