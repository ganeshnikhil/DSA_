#include<stdio.h>
#include<string.h>
char nonrepchr(char *str){
    int count[256]={0};
    int length=strlen(str);
    for(int i=0;i<length;i++){
        count[(unsigned char)str[i]]++;
    }
    for(int i=0;i<length;i++){
        if(count[(unsigned char)str[i]]==1){
            return str[i];
        }
    }
    return -1;
}
int main(){
    char str1[]="programming";
    char str2[]="aabbcc";
    char result1=nonrepchr(str1);
    char result2=nonrepchr(str2);
    if(result1!=-1){
        printf("Input:\"%s\"\nOutput:'%c'\n",str1,result1);
    }else{
        printf("Input:\"%s\"\nOutput:-1\n",str1);
    }
    if(result2!=-1){
        printf("Input:\"%s\"\nOutput:'%c'\n",str2,result2);
    }else{
        printf("Input:\"%s\"\nOutput:-1\n",str2);
    }
    return 0;
}