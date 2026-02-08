#include <stdio.h>
#include <string.h>

int main(){
char str[100];
char c;
int count=0;

// Prompt user to enter a string
printf("Enter a string:\n");
fgets(str,100,stdin);
str[strcspn(str,"\n")]='\0';

// Prompt user to enter a character to search for
printf("Enter a character to be checked:\n");
scanf("%c",&c);

// Traverse the string to count how many times 'c' appears
for(int i=0;str[i]!='\0';++i){
if(str[i]==c)
++count;
}

printf("The occurrences of '%c' character in \"%s\" are:%d\n",c,str,count);
return 0;
}
