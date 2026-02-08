def sort_students_by_grade():
   
    num_students = int(input("Enter the number of students: "))
    students = []
    
    
    for i in range(num_students):
        name = input(f"Enter the name of student {i + 1}: ")
        grade = int(input(f"Enter the grade of student {i + 1}: "))
        students.append((name, grade))
    
    
    sorted_students = sorted(students, key=lambda x: x[1], reverse=True)
    
    
    print("\nSorted Students by Grade (Descending Order):")
    for student in sorted_students:
        print(student)


sort_students_by_grade()