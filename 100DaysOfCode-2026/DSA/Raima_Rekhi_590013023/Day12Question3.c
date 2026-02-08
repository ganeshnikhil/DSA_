#include <stdio.h>
#include <string.h>

void compress_string(char input[],char output[]);

int main(){
char input[1000],compressed[1000];

// Prompt the user to enter a string
printf("Enter a string:\n");
fgets(input,sizeof(input),stdin);
input[strcspn(input,"\n")]='\0';

compress_string(input,compressed);
printf("Compressed string: %s\n",compressed);
return 0;
}

// Function to perform run-length encoding
void compress_string(char input[],char output[]){
int len=strlen(input);
int i=0,j=0;

while(i<len){
char current=input[i];
int count=1;
while(i+1<len && input[i]==input[i+1]){
count++;
i++;
}

output[j++]=current;
int digits=sprintf(output+j,"%d",count);
j+=digits;
i++;
}

// Note: We're allowing compressed output even if equal in size,
// to match the example behavior like "aabbcc" --> "a2b2c2"
output[j]='\0';
if(strlen(output)>len){
strcpy(output,input);
}
}
