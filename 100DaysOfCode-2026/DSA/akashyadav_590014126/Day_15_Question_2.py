def sort_by_length(strings):
    n = len(strings)    # to count the number of strings entered

    for i in range(n):
        for j in range(0, n - i - 1):
            if len(strings[j]) > len(strings[j + 1]):   # checks for 2 adjacent strings according to their length  and sorts them out

                strings[j], strings[j + 1] = strings[j + 1], strings[j] # sorting them 
    return strings

#example
input_strings = ["world", "hello", "programmer", "hey"]
sorted_strings = sort_by_length(input_strings)
print(sorted_strings)
