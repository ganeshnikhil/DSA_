from collections import Counter

def are_anagrams(s1, s2):

    s1_clean = s1.replace(" ", "").lower()  #removing spaces from first string
    s2_clean = s2.replace(" ", "").lower()  #removing spaces from second string

    return Counter(s1_clean) == Counter(s2_clean)   #comparing the frequencies of both string characters

#example
print(are_anagrams("The Eyes", "They See"))    # True