#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
char str[100];
char upper[100];
char lower[100];

// Prompt user to enter a string
printf("Enter a String:\n");
fgets(str,100,stdin);
str[strcspn(str,"\n")]='\0';

// Print length and original string
printf("Length of the string:%lu  ",strlen(str));
printf("Original string: \"%s\"  ",str);

for(int i=0;str[i]!='\0';++i){
if(isupper(str[i])){
// If character is uppercase: keep in upper, convert to lowercase in lower
upper[i]=str[i];
lower[i]=tolower(str[i]);
}

else if(islower(str[i])){
// If character is lowercase: convert to uppercase in upper, keep in lower
upper[i]=toupper(str[i]);   
lower[i]=str[i];
}

else{
// For non-alphabetic characters: copy as-is
upper[i]=str[i];
lower[i]=str[i];
}
}

upper[strlen(str)]='\0';
lower[strlen(str)]='\0';

printf("Uppercase: \"%s\"  ",upper);
printf("Lowercase: \"%s\"  ",lower);
return 0;
}
