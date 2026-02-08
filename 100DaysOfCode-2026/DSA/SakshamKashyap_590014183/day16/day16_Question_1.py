#prompt the user to enter the array

My_Array = list(map(int,input("Enter the elements (give space between every element): ").strip().split()))

target_value = int(input("Enter the number you want to find in the array: "))

found = False

for i in range(len(My_Array)):
    if My_Array[i] == target_value:
        print(f"the traget element index is: {i}")
        found = True
        break
if not found:
    print("-1") # Target value not found in the array
