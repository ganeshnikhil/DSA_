def count_character_frequency(input_string, target_character):
   
    count = input_string.count(target_character)
    return count


if __name__ == "__main__":
    
    string = "Hello my name is mouli i am from btech cse."
    
    character_to_count = 'o'
    
   
    frequency = count_character_frequency(string, character_to_count)
    
    print(f"The character '{character_to_count}' appears {frequency} times in the string.")
