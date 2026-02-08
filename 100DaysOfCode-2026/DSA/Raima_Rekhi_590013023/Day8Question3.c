#include <stdio.h>
#include <string.h>

int main(){
char str[100];
char newstr[100];

// Prompt user to enter a string
printf("Enter a string:\n");
fgets(str,100,stdin);
str[strcspn(str,"\n")]='\0';

int len=strlen(str);
// Reverse the string into newstr
for(int i=0;str[i]!='\0';++i){
newstr[len-1-i]=str[i];
}

newstr[len]='\0';

printf("Original String: %s\n",str);
printf("Reversed String: %s\n",newstr);

return 0;
}
