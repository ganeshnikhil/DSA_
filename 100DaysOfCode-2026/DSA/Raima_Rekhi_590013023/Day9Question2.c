#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
char str[100];
int count_consonants=0,count_vowels=0;

// Prompt user to enter a string
printf("Enter a string:\n");
fgets(str,100,stdin);
str[strcspn(str,"\n")]='\0';

for(int i=0;str[i]!='\0';++i){
// Check if character is alphabetic
if(isalpha(str[i])){
char ch=tolower(str[i]);

// Check if character is a vowel
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
++count_vowels;
else
++count_consonants;
}
}

printf("Vowels: %d , Consonants: %d\n",count_vowels,count_consonants);
return 0;
}
