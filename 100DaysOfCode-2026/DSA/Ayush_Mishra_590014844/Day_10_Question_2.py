import re
def clean_spaces(s):
    all_removed = s.replace(" ", "")
    trimmed = s.strip()
    single_spaced = re.sub(r'\s+', ' ', s).strip()
    
    print("Remove all:", f'"{all_removed}"')
    print("Trim:", f'"{trimmed}"')
    print("Single spaces:", f'"{single_spaced}"')
