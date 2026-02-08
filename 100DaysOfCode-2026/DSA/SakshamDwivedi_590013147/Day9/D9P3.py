#Solution 1 : The first one I came up with [O(n^2)]
def non_repeating(string):
    dic = {}
    count = 0
    for i in range(len(string)):
        for j in range(len(string)):
            if(string[i] == string[j]):
                count += 1
        dic[string[i]] = count

    for i in range(len(string)):
        if dic[string[i]] == 1:
            return string[i]
    return -1

#Solution 2 : More Optimized [O(n)]
def non_repeating_op(string):
    dic = {}
    for i in range(len(string)):
        dic[string[i]] = dic.get(string[i], 0) + 1

    for i in range(len(string)):
        if dic[string[i]] == 1:
            return string[i]
    return -1

#THE GIGACHAD PYTHON WAY
from collections import Counter
def non_repeating_py(string):
    dic = Counter(string)
    for i in range(len(string)):
        if dic[string[i]] == 1:
            return string[i]
    return -1

#Fixed Input
print(non_repeating("aabbcc"))
print(non_repeating_op("programming"))
print(non_repeating_py("abbccd"))



#Custom Input
string1 = input("Enter a string : ")
print(non_repeating(string1))
print(non_repeating_op(string1))
print(non_repeating_py(string1))
