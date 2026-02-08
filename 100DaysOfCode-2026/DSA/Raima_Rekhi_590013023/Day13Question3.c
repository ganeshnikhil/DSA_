#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim(char string[],char output[]);
void single_spaces_only(char string[],char output[]);
void reverse_word_order(char string[]);

int main(){
char str[1000];

// Prompt the user to enter a string
printf("Enter a string:\n");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';

reverse_word_order(str);
return 0;
}

// Function to reverse word order in a string
void reverse_word_order(char string[]){
char cleaned[1000];
single_spaces_only(string,cleaned);

char words[100][100];
int word_count=0,i=0;
while(cleaned[i]!='\0'){
int j=0;
while(cleaned[i]!=' ' && cleaned[i]!='\0'){
words[word_count][j++]=cleaned[i++];
}
words[word_count][j]='\0';
word_count++;
if(cleaned[i]==' ')
i++;
}

printf("Reversed word order:\n");
for(int k=word_count-1;k>=0;k--){
printf("%s ",words[k]);
}
}

// Removes leading and trailing spaces
void trim(char string[],char output[]){
int start=0,end=strlen(string)-1;

while(isspace(string[start])) start++;
while(end>start&&isspace(string[end])) end--;
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
