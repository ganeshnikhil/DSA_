#include<stdio.h>
#include<string.h>
#include<ctype.h>
void rmspaces(const char *input,char *output){
    while(*input){
        if (*input!=' ') {
            *output++=*input;
        }
        input++;
    }
    *output='\0';
}
void trimSpaces(const char *input,char *output){
    while(isspace((unsigned char)*input))input++;
    while(*input){
        if(isspace((unsigned char)*input)){
            if(output!=output-1){
                *output++=' ';
            }
            while(isspace((unsigned char)*input))input++;
        }else{
            *output++=*input;
        }
        input++;
    }
    *output='\0';
    if(output!=output-1 && *(output-1)==' '){
        output--;
    }
    *output='\0';
}
void singleSpaces(const char *input,char *output){
    int inSpace=0;
    while(*input){
        if(isspace((unsigned char)*input)){
            if(!inSpace){
                *output++=' ';
                inSpace=1;
            }
        }else{
            *output++=*input;
            inSpace=0;
        }
        input++;
    }
    *output='\0';
}
int main(){
    char input1[]=" hello world ";
    char input2[]="programming is fun";
    char output[100];
    rmspaces(input1,output);
    printf("Input:\"%s\"\nRemove all:\"%s\"\n",input1,output);
    trimSpaces(input1,output);
    printf("Trim:\"%s\"\n",output);
    singleSpaces(input1,output);
    printf("Single spaces:\"%s\"\n\n",output);
    rmspaces(input2,output);
    printf("Input:\"%s\"\nRemove all:\"%s\"\n",input2,output);
    trimSpaces(input2,output);
    printf("Trim:\"%s\"\n",output);
    singleSpaces(input2,output);
    printf("Single spaces:\"%s\"\n",output);
    return 0;
}