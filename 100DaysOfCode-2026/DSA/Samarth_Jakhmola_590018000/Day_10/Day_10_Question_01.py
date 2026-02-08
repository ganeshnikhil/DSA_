def compare(string_1, string_2):
    if len(string_1) == len(string_2):
        if string_1 == string_2:
            print("Equal, Equal ignoring case, Strings are identical")
        else:
             print("Not equal,", end = " ")
             for i in range(0, len(string_1)):
                  if string_1[i].lower() != string_2[i].lower():
                       print("Not equal ignoring case,", end = " ")
                       break
             print("Equal ignoring case,", end = " ")
             for i in range(0, len(string_1)):
                if string_1[i] != string_2[i]:
                    if string_1.isalpha() and string_2.isalpha():
                        if string_1[i] < string_2[i]:
                            print(f"\"{string_1}\" comes before \"{string_2}\"")
                            exit()
                        elif string_1[i] > string_2[i]:
                            print(f"\"{string_2}\" comes before \"{string_1}\"")
                            exit()
                else:
                    continue    
             print("Strings are identical")
    else:
            print("Not equal, Not equal ignoring case,", end = " ")
            for i in range(0, min(len(string_1), len(string_2))):
                if string_1[i] != string_2[i]:
                    if string_1.isalpha() and string_2.isalpha():
                        if string_1[i] < string_2[i]:
                            print(f"\"{string_1}\" comes before \"{string_2}\"")
                            exit()
                        elif string_1[i] > string_2[i]:
                            print(f"\"{string_2}\" comes before \"{string_1}\"")
                            exit()
                else:
                    continue    
            print("Strings are identical in the sense that without considering any other symbols or digits.")


string_1 = input("Enter the 1st string : ")
string_2 = input("Enter the 2nd string : ")
compare(string_1, string_2)
