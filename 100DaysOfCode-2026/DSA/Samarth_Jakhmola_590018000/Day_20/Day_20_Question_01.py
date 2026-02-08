def sort_by_grade(grade):
    grade.sort(key = lambda x : x[1], reverse = True)
    return grade

try:
    grade = []
    n = int(input("Enter the number of students whose grades are to be sorted : "))
    for i in range(n):
        name, grade_ = map(str, input(f"Enter the name and grade of student {i + 1} separated by spaces : ").split())
        grade.append((name, grade_))
    grade = sort_by_grade(grade)
    result = "[" + ", ".join(f"(\"{name}\", {grade_})" for name, grade_ in grade) + "]"
    print(result)
except:
    print("Invalid input. Please enter a valid input.")
