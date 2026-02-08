#include <stdio.h>
#include <string.h>

int check_rotation(char str1[],char str2[]);

int main(){
char str1[100],str2[100];

// Prompt the user to enter String 1
printf("Enter String 1:\n");
fgets(str1,sizeof(str1),stdin);
str1[strcspn(str1,"\n")]='\0';

// Prompt the user to enter String 1
printf("Enter String 2:\n");
fgets(str2,sizeof(str2),stdin);
str2[strcspn(str2,"\n")]='\0';

if(check_rotation(str1,str2))
printf("True\n'%s' is a rotation of '%s'.\n",str2,str1);
else
printf("False\n'%s' is not a rotation of '%s'.\n",str2,str1);

return 0;
}

// Function to check if str2 is a rotation of str1
int check_rotation(char str1[],char str2[]){
int len1=strlen(str1);
int len2=strlen(str2);

// If lengths differ, cannot be rotations
if(len1!=len2) return 0;

// Create a new string by concatenating str1 with itself
char combined[2*len1+1];
strcpy(combined,str1);
strcat(combined,str1);

// Check if str2 is a substring of combined
return strstr(combined,str2)!=NULL;
}
