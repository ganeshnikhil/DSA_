#include <stdio.h>
#include <string.h>
#include <ctype.h>

void check_equality(char string1[],char string2[]);
void check_case_insensitive_equality(char string1[],char string2[]);
void check_lexicographical_order(char string1[],char string2[]);

int main(){
char string1[100];
char string2[100];

// Prompt user to enter first string
printf("Enter String 1:\n");
fgets(string1,100,stdin);
string1[strcspn(string1,"\n")]='\0';

// Prompt user to enter second string
printf("Enter String 2:\n");
fgets(string2,100,stdin);
string2[strcspn(string2,"\n")]='\0';

// Perform comparisons
check_equality(string1,string2);
check_case_insensitive_equality(string1,string2);
check_lexicographical_order(string1,string2);

return 0;
}

// Function to check exact string equality (case-sensitive)
void check_equality(char string1[],char string2[]){
int result=strcmp(string1,string2);
if(result==0)
printf("Equal.\n");
else
printf("Not Equal.\n");
}

// Function to check case-insensitive string equality
void check_case_insensitive_equality(char string1[],char string2[]){
int i=0;
while(string1[i] && string2[i]){
if(tolower(string1[i])!=tolower(string2[i])){
printf("Not Equal Ignoring Case.\n");
return;
}
++i;
}

if(string1[i]=='\0' && string2[i]=='\0')
printf("Equal Ignoring Case.\n");
else
printf("Not Equal Ignoring Case.\n");
}

// Function to compare strings lexicographically
void check_lexicographical_order(char string1[],char string2[]){
int result=strcmp(string1,string2);
if(result==0)
printf("Strings are identical.\n");
else if(result<0)
printf("\"%s\" comes before \"%s\".\n",string1,string2);
else
printf("\"%s\" comes before \"%s\".\n",string2,string1);
}
