st = input("Enter the string: ")
def first_non_rep_char(s):
    for i in s:
        if st.count(i)==1:
            return i
            break
        else:
            return -1
print(first_non_rep_char(st))
