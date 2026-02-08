#include <stdio.h>
#include <string.h>

int count_palindromic_substrings(char str[]);

int main(){
char str[1000];

//Prompt the user to enter a string
printf("Enter a string:\n");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';

int total=count_palindromic_substrings(str);
printf("Total number of palindromic substrings: %d\n",total);
return 0;
}

// Function to count all palindromic substrings
int count_palindromic_substrings(char str[]){
int n=strlen(str);
int count=0;

// Loop through each possible center of a palindrome
for(int center=0;center<2*n-1;center++){
int left=center/2;
int right=left+(center%2);

// Expand outward as long as characters match (valid palindrome)
while(left>=0 && right<n && str[left]==str[right]){
count++;
left--;
right++;
}
}
return count;
}
