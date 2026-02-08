#include<stdio.h>
#include<ctype.h>
#include<string.h>
int isPalindrome(char *str){
    int left=0;
    int right=strlen(str)-1;
    while (left<right){
        while(left<right && !isalpha(str[left]))left++;
        while(left<right && !isalpha(str[right]))right--;
        if(tolower(str[left])!=tolower(str[right]))return 0;
        left++;
        right--;
    }
    return 1;
}
int main(){
    char str1[]="racecar";
    char str2[]="hello";
    printf("%s:%s\n",str1,isPalindrome(str1)?"true":"false");
    printf("%s:%s\n",str2,isPalindrome(str2)?"true":"false");    
    return 0;
}