def anagram(s1, s2):

    s1_clean = "".join(s1.split()).lower()
    s2_clean = "".join(s2.split()).lower()
    return sorted(s1_clean) == sorted(s2_clean)

print(anagram(s1=input("enter your first word: "), s2=input("enter your second word: ")))