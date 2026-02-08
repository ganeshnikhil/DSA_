#include<stdio.h>
#include<ctype.h>
#include<string.h>
int isPalindrome(const char *str){
    int left=0;
    int right=strlen(str)-1;
    while (left < right){
        while(left<right && !isalnum((unsigned char)str[left])){
            left++;
        }
        while(left<right && !isalnum((unsigned char)str[right])){
            right--;
        }
        if(tolower((unsigned char)str[left])!=tolower((unsigned char)str[right])){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main(){
    char input1[]="A man, a plan, a canal: Panama";
    char input2[]="race a car";
    printf("Input:\"%s\"\nOutput:%s\n",input1,isPalindrome(input1)?"true":"false");
    printf("Input:\"%s\"\nOutput:%s\n",input2,isPalindrome(input2)?"true":"false");
    return 0;
}