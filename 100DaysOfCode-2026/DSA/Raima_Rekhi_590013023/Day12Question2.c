#include <stdio.h>
#include <string.h>

void remove_duplicates(char input[],char output[]);

int main(){
char input[1000],output[1000];

// Prompt the user to enter a string
printf("Enter a string:\n");
fgets(input,sizeof(input),stdin);
input[strcspn(input,"\n")]='\0';

remove_duplicates(input,output);
printf("String after removing duplicates: %s\n",output);
return 0;
}

// Function to remove duplicate characters from a string
void remove_duplicates(char input[],char output[]){
int seen[256]={0}; // ASCII character tracker
int j=0;

for(int i=0;input[i]!='\0';i++){
char ch=input[i];
if(!seen[ch]){
seen[ch]=1;
output[j++]=ch;
}
}
output[j]='\0';
}
