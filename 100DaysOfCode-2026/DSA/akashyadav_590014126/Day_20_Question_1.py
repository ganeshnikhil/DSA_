def sort_students_by_grade(students):
    return sorted(students, key=lambda x: x[1], reverse=True)   # telling the sorted() to consider the second element of tuple to arrange with  

#example
students = [("ram", 98), ("shyam", 95), ("radha", 99),]
print(sort_students_by_grade(students))