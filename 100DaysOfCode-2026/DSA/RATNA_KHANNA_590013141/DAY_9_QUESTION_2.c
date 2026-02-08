#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main() 
{
    char str[100];
    char ch;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len=strlen(str);
    if (str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
        len--;  
    }
    for (int i = 0; str[i] != '\0'; i++) 
    {
        str[i] = tolower(str[i]);
    }
    int vowel=0;
    int cons=0;
    for(int i=0;i<len;i++)
    {
        ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        vowel++;
        else if(ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='n'||
            ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z')
        cons++;

    }
    printf("vowels=%d",vowel);
    printf("consonents=%d",cons);
    
    return 0;
}
 
