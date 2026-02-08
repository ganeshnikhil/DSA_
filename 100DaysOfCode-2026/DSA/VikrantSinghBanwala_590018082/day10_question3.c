#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define ALPHABET_SIZE 26
void countCharacters(const char *str,int *count){
    while(*str){
        if(isalpha((unsigned char)*str)){
            count[tolower((unsigned char)*str)-'a']++;
        }
        str++;
    }
}
int areAnagrams(const char *str1,const char *str2){
    int count1[ALPHABET_SIZE]={0};
    int count2[ALPHABET_SIZE]={0};
    countCharacters(str1,count1);
    countCharacters(str2,count2);
    for(int i=0;i<ALPHABET_SIZE;i++){
        if(count1[i]!=count2[i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char str1[100],str2[100];
    printf("Enter String1:");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]=0; 
    printf("Enter String2:");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]=0;
    if(areAnagrams(str1,str2)){
        printf("Output:true\n");
    }else{
        printf("Output:false\n");
    }
    return 0;
}