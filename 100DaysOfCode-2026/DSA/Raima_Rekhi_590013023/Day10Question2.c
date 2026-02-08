#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remove_all_spaces(char string[],char output[]);
void trim(char string[],char output[]);
void single_spaces_only(char string[],char output[]);

int main(){
char string[100],all_removed[100],trimmed[100],single_spaced[100];

// Prompt input from user
printf("Enter a String:\n");
fgets(string,100,stdin);
string[strcspn(string,"\n")]='\0';

remove_all_spaces(string,all_removed);
trim(string,trimmed);
single_spaces_only(string,single_spaced);
printf("Remove all: \"%s\",Trim: \"%s\",Single spaces: \"%s\".",all_removed,trimmed,single_spaced);

return 0;
}

// Removes all spaces from the string
void remove_all_spaces(char string[],char output[]){
int j=0;
for(int i=0;string[i]!='\0';++i){
if(string[i]!=' ')
output[j++]=string[i];
}
output[j]='\0';
}

// Removes leading and trailing spaces
void trim(char string[],char output[]){
int start=0,end=strlen(string)-1;

// Move start to first non-space character
while(isspace(string[start])) start++;
// Move end to last non-space character
while(end>start && isspace(string[end])) end--;

int j=0;
for(int i=start;i<=end;++i){
output[j++]=string[i];
}
output[j]='\0';
}

// Reduces multiple spaces to single space between words
void single_spaces_only(char string[],char output[]){
char temp[100];
trim(string,temp);
int j=0,in_space=0;

for(int i=0;temp[i]!='\0';++i){
if(isspace(temp[i])){
if(!in_space) output[j++]=' '; // Add one space only
in_space=1;
}
else{
output[j++]=temp[i];
in_space=0;
}
}
output[j]='\0';
}


