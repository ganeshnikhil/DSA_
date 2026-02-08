def are_anagrams(s1, s2):
    s1_clean = s1.replace(" ", "").lower()
    s2_clean = s2.replace(" ", "").lower()

    if sorted(s1_clean) == sorted(s2_clean):
        print("true")
    else:
        print("false")

are_anagrams("listen", "silent")
are_anagrams("hello", "world")
are_anagrams("The Eyes", "They See")
