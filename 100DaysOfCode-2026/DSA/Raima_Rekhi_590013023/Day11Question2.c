#include <stdio.h>
#include <string.h>

void longest_palindromic_substring(char str[]);

int main(){
char str[1000];

// Prompt user to enter a string
printf("Enter a string:\n");
fgets(str,1000,stdin);
str[strcspn(str,"\n")]='\0';

longest_palindromic_substring(str);
return 0;
}

// Function to find the longest palindromic substring
void longest_palindromic_substring(char str[]){
int n=strlen(str);
if(n==0){
printf("Empty string.\n");
return;
}

int dp[n][n];
memset(dp,0,sizeof(dp));

int maxLength=1,start=0;

// All substrings of length 1 are palindromes
for(int i=0;i<n;i++)
dp[i][i]=1;

// Check substrings of length 2
for(int i=0;i<n-1;i++){
if(str[i]==str[i+1]){
dp[i][i+1]=1;
start=i;
maxLength=2;
}
}

// Check substrings of length > 2
for(int len=3;len<=n;len++){
for(int i=0;i<n-len+1;i++){
int j=i+len-1;

if(str[i]==str[j] && dp[i+1][j-1]){
dp[i][j]=1;
if(len>maxLength){
start=i;
maxLength=len;
}
}
}
}

printf("Longest Palindromic Substring: ");
for(int i=start;i<start+maxLength;i++)
putchar(str[i]);
printf("\n");
}
