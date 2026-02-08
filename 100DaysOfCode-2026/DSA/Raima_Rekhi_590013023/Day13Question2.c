#include <stdio.h>
#include <string.h>
#include <ctype.h>

int can_form_palindrome(char str[]);

int main(){
char str[1000];

// Prompt the user to enter a string
printf("Enter a string:\n");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';

if(can_form_palindrome(str))
printf("True\nA permutation can form a palindrome.\n");
else
printf("False\nNo permutation can form a palindrome.\n");

return 0;
}

// Function to check if any permutation of the input string can form a palindrome
int can_form_palindrome(char str[]){
int freq[256]={0}; // Frequency array for ASCII

for(int i=0;str[i]!='\0';i++){
if(!isspace(str[i])){
char ch=tolower(str[i]);
freq[(int)ch]++;
}
}

int odd_count=0;
for(int i=0;i<256;i++){
if(freq[i]%2!=0)
odd_count++;
}

return odd_count<=1; // At most one character can have an odd count
}
