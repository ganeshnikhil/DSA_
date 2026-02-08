#Solution Function O(n)
def perm_pal(string):
    string = string.strip()
    string = "".join(string.split())
    string = string.lower()
    d_freq = {}
    odd_count = 0
    for i in range(len(string)):
        if string[i] in d_freq:
            d_freq[string[i]] += 1
        else:
            d_freq[string[i]] = 1
    for i in d_freq:
        if d_freq[i] % 2 != 0:
            odd_count += 1
    if odd_count > 1:
        return "Palindrome Not Possible!"
    return "Palindrome Possible!"

#Fixed Input
print(perm_pal("aab"))
print(perm_pal("abc"))

#Custom Input
string1 = input("Enter a string : ")
print(perm_pal(string1))
