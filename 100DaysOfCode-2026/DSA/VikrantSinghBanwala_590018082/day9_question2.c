#include<stdio.h>
#include<ctype.h>
void cntVandC(char *str,int *vowelCount,int *consonantCount){
    *vowelCount=0;
    *consonantCount=0;

    while (*str){
        char ch=tolower(*str);
        if(isalpha(ch)){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                (*vowelCount)++;
            }else{
                (*consonantCount)++;
            }
        }
        str++;
    }
}
int main(){
    char str1[]="hello";
    char str2[]="Programming";
    int vowels,consonants;
    cntVandC(str1,&vowels,&consonants);
    printf("Input:\"%s\"\nOutput:Vowels:%d,Consonants:%d\n",str1,vowels,consonants);
    cntVandC(str2,&vowels,&consonants);
    printf("Input:\"%s\"\nOutput:Vowels:%d,Consonants:%d\n",str2,vowels,consonants);
    return 0;
}
