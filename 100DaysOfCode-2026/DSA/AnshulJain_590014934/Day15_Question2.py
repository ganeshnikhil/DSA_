def sort_by_length(strings):
    return sorted(strings, key=len)

strings = input("Enter strings separated by spaces: ").split()
sorted_strings = sort_by_length(strings)
print(sorted_strings)
#taking input from the user 
# for example :- Input: "apple banana cherry date"
# Output: ['date', 'apple', 'banana', 'cherry']