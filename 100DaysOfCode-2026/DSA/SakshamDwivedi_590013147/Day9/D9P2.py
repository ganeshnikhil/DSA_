#Function
def count_v_c(string):
    vowels = 0
    consonants = 0
    for i in range(len(string)):
        if string[i].isalpha():
            if string[i] in "aeiouAEIOU":
                vowels += 1
            else:
                consonants += 1
    return vowels, consonants

#Fixed Input
string1 = "hello"
print("Number of vowels : ", count_v_c(string1)[0], "and number of consonants : ", count_v_c(string1)[1])

#Custom Input
stringInput = input("Enter the string : ")
print("Number of vowels : ", count_v_c(stringInput)[0], "and number of consonants : ", count_v_c(stringInput)[1])
