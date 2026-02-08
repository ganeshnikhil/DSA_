def space_operations(s):

    remove_all = s.replace(" ", "")

    trim = s.strip()
    
    single_spaces = ' '.join(s.split())
    
    print(f'Remove all: "{remove_all}", Trim: "{trim}", Single spaces: "{single_spaces}"')

input_string = " programming is fun "

space_operations(input_string)
