#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_palindrome(char str1[]);
int main(){
char str[1000];

// Prompt user to enter a string
printf("Enter a string:\n");
fgets(str,1000,stdin);
str[strcspn(str,"\n")]='\0';

// Check and print the result
if(check_palindrome(str)==1)
printf("True\nThe string is palindrome.\n");
else
printf("False\nThe string is not palindrome.\n");

return 0;
}

// Function to check if a string is a palindrome
int check_palindrome(char str1[]){
char filtered[1000];
int index=0;

// Filter only alphabetic and numeric characters and convert to lowercase
for(int i=0;str1[i]!='\0';++i){
if(isalnum(str1[i])){
filtered[index++]=tolower(str1[i]);
}
}

filtered[index]='\0';

// Compare characters to check for palindrome
for(int i=0;i<index/2;++i){
if(filtered[i]!=filtered[index-1-i]) return 0;
}
return 1;
}


