#include <stdio.h>
#include <string.h>
#include <ctype.h>
int compare(const char *str1,const char *str2){
    while(*str1 && *str2){
        if(tolower(*str1)!=tolower(*str2)){
            return 0;
        }
        str1++;
        str2++;
    }
    return *str1==*str2;
}
int main(){
    char str1[100],str2[100];
    printf("Enter String1:");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]=0;//Remove newline chr
    printf("Enter String2:");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]=0;//Remove newline chr
    int exactEqual=strcmp(str1,str2)==0;
    int caseEqual=compare(str1,str2);
    int lexicographicalOrder=strcmp(str1,str2);
    if(exactEqual){
        printf("Equal\n");
    }else{
        printf("Not equal\n");
    }
    if(caseEqual){
        printf("Equal ignoring case\n");
    }else{
        printf("Not equal ignoring case\n");
    }
    if(lexicographicalOrder<0){
        printf("\"%s\"comes before\"%s\"\n",str1,str2);
    }else if(lexicographicalOrder>0){
        printf("\"%s\"comes after\"%s\"\n",str1,str2);
    }else{
        printf("Strings are equal lexicographically\n");
    }
    return 0;
}