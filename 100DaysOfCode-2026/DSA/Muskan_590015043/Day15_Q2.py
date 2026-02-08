# 2. Sort by String Length
string_array = list(map(str,input("Enter the array elements (space seperated) ").split()))
string_size = list(len(i) for i in string_array) #Create a list of string size
dict = dict(zip(string_size,string_array)) #Dictionary of string size and string
a = list(dict.keys())
#Sort the list of string size
a.sort() 
#return the dictianary value according to the sorted list of string size
sorted_list = list(dict[i] for i in a for j in dict if i == j) 
print(sorted_list)