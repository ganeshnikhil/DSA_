#include <stdio.h>
#include <string.h>
#include <ctype.h>

int first_non_repeating_character(char str1[]);
int main(){
char str[100];

// Prompt user to enter a string
printf("Enter a string:\n");
fgets(str,100,stdin);
str[strcspn(str,"\n")]='\0';

int index=first_non_repeating_character(str);
// Handle empty string case
if(str[0]=='\0')
printf("The string is empty.\n");
// Handle case when no unique character is found
else if(index==-1)
printf("There is no non-repeating element present.\n");
// Print the result
else
printf("The first non repeating element is: %c\n",str[index]);
return 0;
}

// Function to find the index of the first non-repeating character
int first_non_repeating_character(char str1[]){
int len=strlen(str1);

// Count how many times a character appears in the string and if the character occurs only once, return its index,else return -1
for(int i=0;i<len;++i){
int count=0;
char current=tolower(str1[i]);

for(int j=0;j<len;++j){
if(tolower(str1[j])==current) ++count;
}
if(count==1)return i;
}
return -1;
}

