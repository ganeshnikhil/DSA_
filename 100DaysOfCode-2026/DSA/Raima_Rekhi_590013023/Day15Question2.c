#include <stdio.h>
#include <string.h>

void sort_by_length(char arr[][100],int n);

int main(){
char arr[100][100];
int n;

printf("Enter number of strings:\n");
scanf("%d",&n);
getchar();

// Prompt the user to enter the strings
printf("Enter %d strings:\n",n);
for(int i=0;i<n;++i){
fgets(arr[i],sizeof(arr[i]),stdin);
arr[i][strcspn(arr[i],"\n")]='\0';
}

sort_by_length(arr,n);

printf("\nSorted strings by length:\n");
for(int i=0;i<n;i++){
printf("%s\n",arr[i]);
}

return 0;
}

// Function to sort strings by their length using insertion sort
void sort_by_length(char arr[][100],int n){
for(int i=1;i<n;++i){
char temp[100];
strcpy(temp,arr[i]);
int len=strlen(temp);
int j=i-1;

// Shift strings that are longer than current
while(j>=0 && strlen(arr[j])>len){
strcpy(arr[j+1],arr[j]);
j--;
}
strcpy(arr[j+1],temp);
}
}
