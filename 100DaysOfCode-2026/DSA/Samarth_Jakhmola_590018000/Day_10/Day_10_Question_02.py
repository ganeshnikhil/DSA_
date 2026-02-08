def remove_spaces(string):
    remove_all = string.replace(" ", "")
    trim = string.strip()
    single_space = ' '.join(string.strip().split())
    
    return remove_all, trim, single_space

string = input("Enter a string : ")
remove_all, trim, single_space = remove_spaces(string)
print(f"Remove all: \"{remove_all}\", Trim: \"{trim}\", Single spaces: \"{single_space}\"")
