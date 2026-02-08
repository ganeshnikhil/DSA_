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
    int c=0;
    int a=0;
    for (int i = 0; i<len; i++) 
    {
       for (int j = i+1; j<len; j++) 
        {
          if(str[i]==str[j])
          c++;
          ch=str[i];
        } 
        if(c==0)
        {
        a++;
        break;
        }
    }
    if(a==1)
    printf("%c",ch);
    else
    printf("-1");
    
    return 0;
}
 
