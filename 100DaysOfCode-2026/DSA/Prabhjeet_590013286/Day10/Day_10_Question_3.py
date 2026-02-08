def function(str1, str2):          
    cleaned1 = ''.join(str1.lower().split())
    cleaned2 = ''.join(str2.lower().split())

  
    return sorted(cleaned1) == sorted(cleaned2)

s1 = input("Enter first string: ")
s2 = input("Enter second string: ")

result = function(s1, s2)
print("true" if result else "false")