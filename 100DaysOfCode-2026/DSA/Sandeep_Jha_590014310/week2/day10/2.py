def string_clean(s):
    #clear all spaces
    print(f"remove all: '{"".join(s.split())}'")

    #trim
    print(f"trim: '{s.strip()}'")

    #single spaces
    print(f"single spaces: '{" ".join(s.split())}'")

string_clean(s=input("enter your string to be cleaned: "))