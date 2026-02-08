#This is the most GIGACHAD solution O(n) time complexity
'''The Gigachad solution checks if the strings have same length if no - return false else : concatenate the comparision string with 
itself. So cdeab + cdeab = cdeabcdeab. abcde is in this string, hence it is a rotated string.'''
def rotated_giga(string, c_string):
    if(len(string) == len(c_string)):
        if(string in (c_string + c_string)):
            return True
        else:
            return False
    return False

#This solution works but it has O(n^2) time complexity
'''This one performs the whole rotation by itself and compares both 
the string during each rotation'''
def rotated(string, c_string):
    if string == c_string:
        return True
    t_string = ""
    for i in range(len(string)):
        t_string += string[-1]
        for j in range(len(string) - 1):
            t_string += string[j]
        if(t_string == c_string):
            return True
        else:
            string = t_string
            t_string = ""
    return False

#Fixed Input
string1 = "abcde"
string2 = "cdeab"
print(rotated_giga(string1, string2))
print(rotated(string1, string2))

#Custom input
string1 = input("Enter string 1 : ")
string2 = input("Enter string 2 : ")
print(rotated_giga(string1, string2))
print(rotated(string1, string2))
