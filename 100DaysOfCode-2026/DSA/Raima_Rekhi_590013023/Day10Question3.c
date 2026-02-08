#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clean_string(char original[],char cleaned[]);
void sort_string(char str[]);
int check_anagrams(char str1[],char str2[]);

int main(){
char str1[100],str2[100];

// Prompt user to enter first string
printf("Enter String 1:\n");
fgets(str1,100,stdin);
str1[strcspn(str1,"\n")]='\0';

// Prompt user to enter second string
printf("Enter String 2:\n");
fgets(str2,100,stdin);
str2[strcspn(str2,"\n")]='\0';

// Check and print result
if(check_anagrams(str1,str2))
printf("The strings are anagrams.\n");
else
printf("The strings are not anagrams.\n");
return 0;
}

// Function to remove spaces and convert to lowercase
void clean_string(char original[],char cleaned[]){
int j=0;

for(int i=0;original[i]!='\0';++i)
if(!isspace(original[i]))
cleaned[j++]=tolower(original[i]);
cleaned[j]='\0';
}

// Function to sort a string using insertion sort
void sort_string(char str[]){
int len=strlen(str);

for(int i=1;i<len;++i){
char key=str[i];
int j=i-1;

while(j>=0 && str[j]>key){
str[j+1]=str[j];
j--;
}
str[j+1]=key;
}
}

// Function to check if two strings are anagrams
int check_anagrams(char str1[],char str2[]){

char cleaned1[100],cleaned2[100];
clean_string(str1,cleaned1);
clean_string(str2,cleaned2);

if(strlen(cleaned1)!=strlen(cleaned2))
return 0;// If lengths differ after cleaning, not anagrams

sort_string(cleaned1);
sort_string(cleaned2);
return strcmp(cleaned1,cleaned2)==0;
}
