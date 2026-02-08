Your task: Sort student records by grades in descending order using custom sorting criteria

def get_student_data():
    students = []
    while True:
        name = input("Student name (or 'done'): ").strip()
        if name.lower() == 'done':
            break
        if name == "":
            print("Name can't be empty.")
            continue
        grade_input = input(f"Grade for {name}: ").strip()
        try:
            grade = float(grade_input)
            if grade < 0 or grade > 100:
                print("Grade must be between 0 and 100.")
                continue
        except:
            print("Please enter a number.")
            continue
        students.append((name, grade))
    return students
def sort_students(students):
    return sorted(students, key=lambda x: x[1], reverse=True)

def show_students(students):
    for i, (name, grade) in enumerate(students, start=1):
        print(f"{i}. {name} - {grade}")

students = get_student_data()
if students:
    sorted_students = sort_students(students)
    show_students(sorted_students)
