#prompt the user to enter the array string

My_Array = input("Enter the strings(Give space between them): ").strip().split()

def My_fnc(e):
    return len(e)

My_Array.sort(key=My_fnc)

print(My_Array)