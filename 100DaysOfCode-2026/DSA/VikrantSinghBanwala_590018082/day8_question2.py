def character_count(input_string,character):
    count=input_string.count(character)
    return count
input1_string="programming"
input1_character='r'
output1=character_count(input1_string,input1_character)
print(output1)
input2_string="Hello World"
input2_character='l'
output2=character_count(input2_string,input2_character)
print(output2)