#Remove duplicate characters while preserving first occurrence order.
input_string = input("enter string :")
result = ""
seen = ""

i = 0
while i < len(input_string):
    ch = input_string[i]

    
    already_seen = False
    j = 0
    while j < len(seen):
        if seen[j] == ch:
            already_seen = True
            break
        j = j + 1

    if not already_seen:
        result = result + ch
        seen = seen + ch

    i = i + 1

print(result)
