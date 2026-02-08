def grade_sort():
    n = int(input("Enter the number of students: "))
    students = []
    
    for i in range(n):
        name = input(f"Enter the name of student {i+1}: ")
        grade = int(input(f"Enter the grade of {name}: "))
        students.append((name, grade))
    
    students.sort(key=lambda x: x[1], reverse=True)
    
    print(students)

grade_sort()