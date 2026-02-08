#include <stdio.h>

int integer_sqrt(int n);

int main(){
int n;

// Prompt the user to enter the element whose square root is to be found
printf("Enter a positive number:\n");
scanf("%d",&n);
 
int result=integer_sqrt(n);

if(result!=-1)
printf("Integer square root of %d is: %d\n",n,result);
else
printf("Square root is undefined for negative numbers.\n");
return 0;
}

// Function to compute integer square root using binary search
int integer_sqrt(int n){
if(n<0) return -1;
if(n==0) return 0;

int left=1, right=n, ans=0;

while(left<=right){
int mid=(left+right)/2;

if((mid*mid)<=n){
ans=mid;
left=mid+1;
}
else{
right=mid-1;
}
}

return ans;
}
