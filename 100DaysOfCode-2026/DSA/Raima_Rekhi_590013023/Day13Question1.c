#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim(char string[],char output[]);
void word_count(char string[]);

int main(){
char string[1000];

// Prompt the user to enter a string
printf("Enter a string:\n");
fgets(string,sizeof(string),stdin);
string[strcspn(string,"\n")]='\0';

word_count(string);
return 0;
}

// Removes leading and trailing spaces
void trim(char string[],char output[]){
int start=0,end=strlen(string)-1;

while(isspace(string[start])) start++;
while(end>start && isspace(string[end])) end--;
int j=0;
for(int i=start;i<=end;++i){
output[j++]=string[i];
}
output[j]='\0';
}

// Counts words and finds longest word
void word_count(char string[]){
char trimmed[1000];
trim(string,trimmed); // Remove leading/trailing spaces

int count=0,maxlen=0,currentlen=0;
char longestWord[100]="";
char currentWord[100];
int j=0;

for(int i=0;trimmed[i]!='\0';++i){
if(!isspace(trimmed[i])){
currentWord[j++]=trimmed[i];
currentlen++;
}
else{
if(j>0){
currentWord[j]='\0';
count++;
if(currentlen>maxlen){
maxlen=currentlen;
strcpy(longestWord,currentWord);
}
j=0;
currentlen=0;
}
}
}

// Final word check (if input doesn't end with space)
if(j>0){
currentWord[j]='\0';
count++;
if(currentlen>maxlen){
strcpy(longestWord,currentWord);
}
}
printf("Word count: %d\n",count);
printf("Longest word: %s\n",longestWord);
}



