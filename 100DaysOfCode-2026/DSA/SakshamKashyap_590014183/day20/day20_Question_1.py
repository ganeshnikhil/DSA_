n =int(input("Enter the number of entry of strudent grade: "))
record_list = []
for i in range(n):
    Student_name = input("Enter the student name: ")
    Student_Marks = int(input("Enter the marks of student: "))
    tuple = (f"{Student_name}",Student_Marks)
    record_list.append(tuple)

def my_func(student_tuple):
        return student_tuple[1]
    
record_list.sort(key= my_func,reverse=True)

print(f"The final record list is: {record_list}")
